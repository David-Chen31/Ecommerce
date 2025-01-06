#include "shop_communication.h"
#include "ui_shop_communication.h"
#include "root/root.h"
#include "ContentWidget/Communication/message_area.h"
#include "ContentWidget/Communication/contact.h"
#include "objecttojson.h"


ShopCommunication::ShopCommunication(QWidget *parent)
    : ContentWidget(parent)
    , ui(new Ui::ShopCommunication),
    tcpSocket(new QTcpSocket(this))
    , currentMessageArea(nullptr)
{
    ui->setupUi(this);
    setupTcpShop();
}

ShopCommunication::~ShopCommunication()
{
    delete ui;
    delete tcpSocket;
}

void ShopCommunication::setupTcpShop() {
    tcpSocket = new QTcpSocket(this);

    // 连接到服务端
    tcpSocket->connectToHost("127.0.0.1", 12345); // 替换为实际服务端 IP 和端口
    if (!tcpSocket->waitForConnected(3000)) {
        qWarning() << "Failed to connect to server:" << tcpSocket->errorString();
        return;
    }

    //qDebug() << "Connected to server!";

    // 监听服务端的消息
    connect(tcpSocket, &QTcpSocket::readyRead, this, &ShopCommunication::onMessageReceived);
    connect(tcpSocket, &QTcpSocket::disconnected, []() {
        qWarning() << "Disconnected from server!";
    });

    // 连接成功后，发送绑定信息
    sendBindMessageToServer();
}

void ShopCommunication::Refresh()
{
    //qDebug("Communication Refresh");
    ObjectsManager::LoadReadMessageFromClient();
    ObjectsManager::LoadUnreadMessageFromClient();

    readMessageList = ObjectsManager::GetReadMessageFromClient();
    unreadMessageList = ObjectsManager::GetUnreadMessageFromClient();

    // 遍历所有联系人，清空其对应的 MessageArea
    for (auto it = contactList.begin(); it != contactList.end(); ++it) {
        Contact *contact = it.value();
        MessageArea *messageArea = contact->getMessageArea();

        // 清空旧消息（只需清空一次）
        for (ChatMessage *chatMsg : messageArea->messages) {
            messageArea->messageLayout->removeWidget(chatMsg);
            delete chatMsg;
        }
        messageArea->messages.clear();
    }


    for (Message *msg : readMessageList + unreadMessageList) {
        int clientId = msg->getMessageClientId();

        //qDebug()<<msg->getMessageId();

        if (contactList.contains(clientId)) {
            Contact *contact = contactList[clientId];
            contact->getMessageArea()->addChatMessage(msg); // 添加消息到 MessageArea
        } else {
            Contact *contactWidget = new Contact(nullptr, msg->getMessageClientName(), ":/image/profilePhoto.jpg", msg->getMessageClientId());
            connect(contactWidget, &Contact::contactClicked, this, &ShopCommunication::onContactClicked);

            QListWidgetItem *item = new QListWidgetItem(ui->customerList);
            item->setSizeHint(contactWidget->sizeHint());
            ui->customerList->addItem(item);
            ui->customerList->setItemWidget(item, contactWidget);

            contactList[clientId] = contactWidget;
            contactWidget->getMessageArea()->addChatMessage(msg); // 添加消息
        }
    }
}

void ShopCommunication::onContactClicked(int clientId, const QString &clientName)
{
    if (!contactList.contains(clientId)) {
        qWarning() << "Contact clicked but clientId not found: " << clientId;
        return;
    }

    Contact *contact = contactList[clientId];
    if (!contact) {
        qWarning() << "Contact is null for clientId: " << clientId;
        return;
    }

    // 隐藏当前 MessageArea
    if (currentMessageArea) {
        currentMessageArea->hide();
    }

    // 设置当前 MessageArea 和 ShopId
    currentMessageArea = contact->getMessageArea();
    currentClientId = clientId;

    // 显示新选中的 MessageArea
    if (currentMessageArea) {
        currentMessageArea->setParent(ui->messageArea);
        currentMessageArea->show();
    }

    // 更新标题栏
    ui->customerNameLabel->setText(clientName);

    // 标记联系人为选中
    for (auto it = contactList.begin(); it != contactList.end(); ++it) {
        it.value()->setSelected(it.key() == clientId);
    }
}

void ShopCommunication::onMessageReceived() {
    while (tcpSocket->bytesAvailable() > 0) {
        QByteArray data = tcpSocket->readAll(); // 从 TCP 流中读取数据
        //qDebug() << "Raw data received:" << data;

        QJsonDocument jsonDoc = QJsonDocument::fromJson(data);
        if (jsonDoc.isNull() || !jsonDoc.isObject()) {
            qWarning() << "Invalid JSON received from server:" << data;
            continue;
        }

        QJsonObject json = jsonDoc.object();
        //qDebug() << "Parsed JSON:" << json;

        processIncomingMessage(json); // 处理接收到的 JSON 消息
    }
}


void ShopCommunication::processIncomingMessage(const QJsonObject &json) {
    // 将 JSON 转换为 Message 对象
    Message *newMessage = ObjectToJson::parseMessage(json);
    if (!newMessage) {
        qWarning() << "Failed to parse message from JSON:" << json;
        return;
    }

    //qDebug() << "Parsed Message:" << newMessage->getMessageContent();

    // 如果是当前选中商店的消息，直接展示
    if (newMessage->getMessageClientId() == currentClientId && currentMessageArea) {
        currentMessageArea->addChatMessage(newMessage);
        //qDebug() << "Message added to current MessageArea.";
    } else {
        // 如果消息不属于当前商店，提示或存储在后台
        //qDebug() << "Message received for ClientId:" << newMessage->getMessageClientId();
    }
}


void ShopCommunication::on_sendButton_clicked()
{
    // 获取输入框中的消息内容
    QString content = ui->messageInputBox->toPlainText().trimmed();

    // 检查消息内容是否为空
    if (content.isEmpty()) {
        qWarning() << "Message content is empty, cannot send.";
        return;
    }

    // 检查当前是否有选中的联系人
    if (!currentMessageArea || currentClientId == -1) {
        qWarning() << "No contact selected. Please select a contact before sending a message.";
        return;
    }

    // 创建新消息对象
    Message *newMessage = new Message();
    newMessage->setMessageClientId(currentClientId);
    newMessage->setMessageContent(content);
    newMessage->setMessageTime(QDateTime::currentDateTime());
    newMessage->setMessageFrom(2); // 2 表示是商家发的消息
    newMessage->setReadStatus(1);  // 标记为已读
    newMessage->setMessageShopName(ObjectsManager::getShopName());
    newMessage->setMessageClientName(ui->customerNameLabel->text());
    newMessage->setMessageShopId(ObjectsManager::getShopId());

    // 调用 ObjectsManager::InsertMessage 将消息插入数据库
    if (!ObjectsManager::InsertMessage(newMessage)) {
        qWarning() << "Failed to insert message into the database.";
        delete newMessage; // 如果插入失败，释放内存
        return;
    }

    // 将消息显示在当前 MessageArea
    currentMessageArea->addChatMessage(newMessage);

    // **调用 sendMessageToServer 方法，发送消息到中介**
    sendMessageToServer(newMessage);

    // 清空输入框
    ui->messageInputBox->clear();
}


void ShopCommunication::sendMessageToServer(Message *message) {
    if (!tcpSocket || tcpSocket->state() != QAbstractSocket::ConnectedState) {
        //qDebug() << "Socket is not connected!";
        return;
    }

    QJsonObject jsonObject;
    ObjectToJson::integrateMessage(jsonObject, message);
    jsonObject["senderType"] = "Shop"; // 发送者是商家
    QByteArray jsonData = QJsonDocument(jsonObject).toJson(QJsonDocument::Compact);

    //qDebug() << "Sending message to mediator:" << jsonObject;

    tcpSocket->write(jsonData);
    tcpSocket->flush();
}


void ShopCommunication::sendBindMessageToServer() {
    // 创建一个包含商家绑定信息的 JSON 对象
    QJsonObject bindMessage;
    bindMessage["senderType"] = "Shop";  // 发送者类型为商家
    bindMessage["messageShopId"] = ObjectsManager::getShopId();  // 获取商家的 ID
    bindMessage["messageClientId"] = -1;  // 客户 ID 不适用，商家绑定

    // 将 JSON 转换为 QByteArray 发送给服务器
    QByteArray jsonData = QJsonDocument(bindMessage).toJson(QJsonDocument::Compact);
    tcpSocket->write(jsonData);
    tcpSocket->flush();

    //qDebug() << "Shop bound to ID:" << ObjectsManager::getShopId();
}
