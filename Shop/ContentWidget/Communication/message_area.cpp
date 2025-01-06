#include "message_area.h"
#include "ui_message_area.h"
#include "objects.h"

MessageArea::MessageArea(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MessageArea)
{
    ui->setupUi(this);
    // 初始化消息布局
    QWidget *container = new QWidget(this);
    messageLayout = new QVBoxLayout(container);
    messageLayout->setAlignment(Qt::AlignTop);

    ui->messageScrollArea->setWidget(container);
    ui->messageScrollArea->setWidgetResizable(true);

    if (!messageLayout) {
        qFatal("Message layout initialization failed!");
    }
    if (!ui->messageScrollArea) {
        qFatal("messageScrollArea is null!");
    }

    //qDebug() << "Creating ChatMessage with parent:" << this;

}

MessageArea::~MessageArea()
{
    delete ui;
}

void MessageArea::addChatMessage(Message *message) {
    if (!message) {
        qWarning() << "addChatMessage received a nullptr message!";
        return;
    }

    //qDebug() << "Adding chat message:" << message->getMessageContent();

    ChatMessage::MessageType type = (message->getMessageFrom() == 1) ? ChatMessage::Sent : ChatMessage::Received;
    QString avatarPath = (type == ChatMessage::Sent) ? "D:/QT/Documents/Ecommerce/Images/profilePhoto.jpg" : "D:/QT/Documents/Ecommerce/Images/O1CN01CEAqor1T5Bm2U3Ccm_--6000000002330-2-tps-48-44.png";

    // 创建新的 ChatMessage 对象
    ChatMessage *chatMessage = new ChatMessage(this, message->getMessageContent(), avatarPath, type);
    chatMessage->setProperty("messageId", message->getMessageId());
    messages.append(chatMessage);

    // 添加到布局中
    messageLayout->addWidget(chatMessage);
    //qDebug() << "Message added to layout.";

    // 自动滚动到最新消息
    scrollToBottom();
}



void MessageArea::clearMessages()
{
    // 删除布局中的所有 ChatMessage 对象
    for (ChatMessage *msg : messages) {
        if (msg) {
            messageLayout->removeWidget(msg);
            delete msg;  // 释放内存
        }
    }
    messages.clear();  // 清空指针列表
}

void MessageArea::scrollToBottom() {
    QScrollArea *scrollArea = ui->messageScrollArea;
    if (scrollArea) {
        QScrollBar *vScrollBar = scrollArea->verticalScrollBar();
        if (vScrollBar) {
            // 如果当前滚动条已经在底部，滚动到底部
            if (vScrollBar->value() == vScrollBar->maximum()) {
                vScrollBar->setValue(vScrollBar->maximum());
                //qDebug() << "Scrolled to bottom of MessageArea.";
            } else {
                //qDebug() << "User is viewing history, not scrolling.";
            }
        }
    }
}


