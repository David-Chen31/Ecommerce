#include "chatmessage.h"
#include "ui_chatmessage.h"

ChatMessage::ChatMessage(QWidget *parent, const QString &message, const QString &avatarPath, MessageType type)
    : QWidget(parent)
{
    layout = new QHBoxLayout(this);
    avatarLabel = new QLabel(this);
    messageLabel = new QLabel(this);

    QPixmap avatarPixmap(avatarPath.isEmpty() ? "D:/QT/Documents/Ecommerce/Images/O1CN01CEAqor1T5Bm2U3Ccm_--6000000002330-2-tps-48-44.png" : avatarPath);
    if (avatarPixmap.isNull()) {
        qWarning() << "Avatar image failed to load from path: " << avatarPath;
        avatarPixmap = QPixmap("D:/QT/Documents/Ecommerce/Images/O1CN01CEAqor1T5Bm2U3Ccm_--6000000002330-2-tps-48-44.png"); // 使用默认头像
    }
    avatarLabel->setPixmap(avatarPixmap.scaled(50, 50, Qt::KeepAspectRatio, Qt::SmoothTransformation));
    avatarLabel->setFixedSize(50, 50);

    // 设置消息内容
    messageLabel->setText(message);
    messageLabel->setWordWrap(true);
    messageLabel->setMaximumWidth(250);

    // 根据消息类型设置样式和布局
    setStyle(type);

    setLayout(layout);
}


ChatMessage::~ChatMessage()
{
    // 自动释放布局和子控件
}


void ChatMessage::setStyle(MessageType type)
{
    if (type == Sent) { // 客户消息
        messageLabel->setStyleSheet(
            "background-color: #FF6A00; color: #FFFFFF; border-radius: 10px; padding: 10px;"
            );
        layout->addWidget(messageLabel);
        layout->addWidget(avatarLabel);
        layout->setAlignment(messageLabel, Qt::AlignRight);
    } else { // 商家消息
        messageLabel->setStyleSheet(
            "background-color: #FFFFFF; color: #333333; border: 1px solid #FF6A00; border-radius: 10px; padding: 10px;"
            );
        layout->addWidget(avatarLabel);
        layout->addWidget(messageLabel);
        layout->setAlignment(messageLabel, Qt::AlignLeft);
    }

    layout->setSpacing(10);
    layout->setContentsMargins(5, 5, 5, 5);
}
