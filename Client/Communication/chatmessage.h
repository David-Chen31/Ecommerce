#ifndef CHATMESSAGE_H
#define CHATMESSAGE_H

#include <QWidget>
#include <QLabel>
#include <QString>
#include <QHBoxLayout>
#include <QDebug>

class ChatMessage : public QWidget
{
    Q_OBJECT

public:
    enum MessageType {
        Sent,
        Received
    };

    explicit ChatMessage(QWidget *parent = nullptr, const QString &message = "", const QString &avatarPath = "", MessageType type = Sent);
    ~ChatMessage();

private:
    QLabel *avatarLabel; // 头像
    QLabel *messageLabel; // 消息内容
    QHBoxLayout *layout; // 水平布局

    void setStyle(MessageType type);
};

#endif // CHATMESSAGE_H
