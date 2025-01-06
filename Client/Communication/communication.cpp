#include "communication.h"
#include "ui_communication.h"
#include "Communication/contact.h"
#include "root.h"
#include "Communication/messagearea.h"
#include "objecttojson.h"

Communication::Communication(QWidget *parent)
    : FunctionZone(parent),
    ui(new Ui::Communication),
    tcpSocket(new QTcpSocket(this))
    , currentMessageArea(nullptr)
{
    ui->setupUi(this);
    // 连接信号槽：读取数据、连接成功、断开连接
    // connect(socket, &QTcpSocket::readyRead, this, &Communication::onMessageReceived);
    // connect(socket, &QTcpSocket::connected, this, &Communication::onConnected);
    // connect(socket, &QTcpSocket::disconnected, this, &Communication::onDisconnected);
    // 初始化 TCP 客户端
    setupTcpClient();

}

Communication::~Communication()
{
    delete ui;
    delete tcpSocket;
}

// 连接到服务器
void connectToServer(const QString& host, quint16 port) {
    //socket->connectToHost(host, port);
}

void Communication::setupTcpClient() {
    tcpSocket = new QTcpSocket(this);

    // 连接到服务端
    tcpSocket->connectToHost("127.0.0.1", 12345); // 替换为实际服务端 IP 和端口
    if (!tcpSocket->waitForConnected(3000)) {
        qWarning() << "Failed to connect to server:" << tcpSocket->errorString();
        return;
    }

    qDebug() << "Connected to server!";

    // 监听服务端的消息
    connect(tcpSocket, &QTcpSocket::readyRead, this, &Communication::onMessageReceived);
    connect(tcpSocket, &QTcpSocket::disconnected, []() {
        qWarning() << "Disconnected from server!";
    });

    // 连接成功后，发送绑定信息
    sendBindMessageToServer();  // 发送绑定信息
}



void Communication::Initial()
{
    ObjectsManager::LoadReadMessageFromShop();
    ObjectsManager::LoadUnreadMessageFromShop();

    readMessageList = ObjectsManager::GetReadMessageFromShop();
    unreadMessageList = ObjectsManager::GetUnreadMessageFromShop();

    for (Message *msg : readMessageList + unreadMessageList) {
        int shopId = msg->getMessageShopId();

        if (contactList.contains(shopId)) {
            Contact *contact = contactList[shopId];
            contact->getMessageArea()->addChatMessage(msg); // 添加消息到 MessageArea
        } else {
            Contact *contactWidget = new Contact(nullptr, msg->getMessageShopName(), "", msg->getMessageShopId());
            connect(contactWidget, &Contact::contactClicked, this, &Communication::onContactClicked);

            QListWidgetItem *item = new QListWidgetItem(ui->contactList);
            item->setSizeHint(contactWidget->sizeHint());
            ui->contactList->addItem(item);
            ui->contactList->setItemWidget(item, contactWidget);

            contactList[shopId] = contactWidget;
            contactWidget->getMessageArea()->addChatMessage(msg); // 添加消息
        }
    }
}


void Communication::Refresh()
{
    qDebug("Communication Refresh");
    ObjectsManager::LoadReadMessageFromShop();
    ObjectsManager::LoadUnreadMessageFromShop();

    readMessageList = ObjectsManager::GetReadMessageFromShop();
    unreadMessageList = ObjectsManager::GetUnreadMessageFromShop();

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
        int shopId = msg->getMessageShopId();

        qDebug()<<msg->getMessageId();

        if (contactList.contains(shopId)) {
            Contact *contact = contactList[shopId];
            contact->getMessageArea()->addChatMessage(msg); // 添加消息到 MessageArea
        } else {
            Contact *contactWidget = new Contact(nullptr, msg->getMessageShopName(), ":/image/shop.png", msg->getMessageShopId());
            connect(contactWidget, &Contact::contactClicked, this, &Communication::onContactClicked);

            QListWidgetItem *item = new QListWidgetItem(ui->contactList);
            item->setSizeHint(contactWidget->sizeHint());
            ui->contactList->addItem(item);
            ui->contactList->setItemWidget(item, contactWidget);

            contactList[shopId] = contactWidget;
            contactWidget->getMessageArea()->addChatMessage(msg); // 添加消息
        }
    }
}


void Communication::onContactClicked(int shopId, const QString &shopName)
{
    if (!contactList.contains(shopId)) {
        qWarning() << "Contact clicked but shopId not found: " << shopId;
        return;
    }

    Contact *contact = contactList[shopId];
    if (!contact) {
        qWarning() << "Contact is null for shopId: " << shopId;
        return;
    }

    // 隐藏当前 MessageArea
    if (currentMessageArea) {
        currentMessageArea->hide();
    }

    // 设置当前 MessageArea 和 ShopId
    currentMessageArea = contact->getMessageArea();
    currentShopId = shopId;

    // 显示新选中的 MessageArea
    if (currentMessageArea) {
        currentMessageArea->setParent(ui->messageArea);
        currentMessageArea->show();
    }

    // 更新标题栏
    ui->titleLabel->setText(shopName);

    // 标记联系人为选中
    for (auto it = contactList.begin(); it != contactList.end(); ++it) {
        it.value()->setSelected(it.key() == shopId);
    }
}

void Communication::onMessageReceived() {
    while (tcpSocket->bytesAvailable() > 0) {
        QByteArray data = tcpSocket->readAll(); // 从 TCP 流中读取数据
        QJsonDocument jsonDoc = QJsonDocument::fromJson(data);

        if (jsonDoc.isNull() || !jsonDoc.isObject()) {
            qWarning() << "Invalid JSON received from server:" << data;
            continue;
        }

        QJsonObject json = jsonDoc.object();
        processIncomingMessage(json); // 处理接收到的 JSON 消息
    }
}


void Communication::processIncomingMessage(const QJsonObject &json) {
    // 将 JSON 转换为 Message 对象
    Message *newMessage = ObjectToJson::parseMessage(json);
    if (!newMessage) {
        qWarning() << "Failed to parse message from JSON:" << json;
        return;
    }

    // 如果是当前选中商店的消息，直接展示
    if (newMessage->getMessageShopId() == currentShopId && currentMessageArea) {
        currentMessageArea->addChatMessage(newMessage);
    } else {
        // 如果消息不属于当前商店，提示或存储在后台（此处为简单打印日志）
        qDebug() << "Message received for shopId:" << newMessage->getMessageShopId();
    }

    // 释放 newMessage 由 `addChatMessage` 或其他机制管理
}




void Communication::on_sendButton_clicked()
{
    // 获取输入框中的消息内容
    QString content = ui->inputBox->toPlainText().trimmed();

    // 检查消息内容是否为空
    if (content.isEmpty()) {
        qWarning() << "Message content is empty, cannot send.";
        return;
    }

    // 检查当前是否有选中的联系人
    if (!currentMessageArea || currentShopId == -1) {
        qWarning() << "No contact selected. Please select a contact before sending a message.";
        return;
    }

    // 创建新消息对象
    Message *newMessage = new Message();
    newMessage->setMessageShopId(currentShopId);
    newMessage->setMessageContent(content);
    newMessage->setMessageTime(QDateTime::currentDateTime());
    newMessage->setMessageFrom(1); // 1 表示是客户发的消息
    newMessage->setReadStatus(1);  // 标记为已读
    newMessage->setMessageClientName(ObjectsManager::getClientName());
    newMessage->setMessageShopName(ui->titleLabel->text());
    newMessage->setMessageClientId(ObjectsManager::getClientId());

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
    ui->inputBox->clear();
}


void Communication::sendMessageToServer(Message *message) {
    if (!tcpSocket || tcpSocket->state() != QAbstractSocket::ConnectedState) {
        qDebug() << "Socket is not connected!";
        return;
    }

    QJsonObject jsonObject;
    ObjectToJson::integrateMessage(jsonObject, message);
    jsonObject["senderType"] = "Client"; // 发送者是客户
    QByteArray jsonData = QJsonDocument(jsonObject).toJson(QJsonDocument::Compact);

    qDebug() << "Sending message to mediator:" << jsonObject;

    tcpSocket->write(jsonData);
    tcpSocket->flush();
}


void Communication::sendBindMessageToServer() {
    // 创建一个包含客户端绑定信息的 JSON 对象
    QJsonObject bindMessage;
    bindMessage["senderType"] = "Client";  // 发送者类型为客户端
    bindMessage["messageClientId"] = ObjectsManager::getClientId();  // 获取客户端 ID
    bindMessage["messageShopId"] = -1;  // 商家 ID 不适用，客户端绑定

    // 将 JSON 转换为 QByteArray 发送给服务器
    QByteArray jsonData = QJsonDocument(bindMessage).toJson(QJsonDocument::Compact);
    tcpSocket->write(jsonData);
    tcpSocket->flush();

    qDebug() << "Client bound to ID:" << ObjectsManager::getClientId();
}

void Communication::addContactToList(QString shopName, int shopId, QString avatarPath)
{
    if (!contactList.contains(shopId))
    {
        // 创建新的 Contact 对象（商家联系人）
        Contact* contact = new Contact(nullptr, shopName, avatarPath, shopId);

        // 创建一个新的 QListWidgetItem，指定其父 QWidget 为 ui->contactList
        QListWidgetItem *item = new QListWidgetItem(ui->contactList);

        // 设置该 item 的大小提示
        item->setSizeHint(contact->sizeHint());  // 使用 contact 的 sizeHint 来确定 item 的大小

        // 将 QListWidgetItem 添加到 contactList 中
        ui->contactList->addItem(item);

        // 使用 setItemWidget 将 contactWidget（即 contact）设置为该 item 的显示内容
        ui->contactList->setItemWidget(item, contact);

        // 将联系人添加到联系人列表中
        contactList[shopId] = contact;

        // 连接联系人点击信号与槽函数，确保点击联系人时能显示该商家的消息
        connect(contact, &Contact::contactClicked, this, &Communication::onContactClicked);

    }

    onContactClicked(shopId, shopName);
}

