#ifndef CHAT_MESSAGE_H
#define CHAT_MESSAGE_H

#include <QWidget>
#include <QLabel>
#include <QString>
#include <QHBoxLayout>
#include <QDebug>

namespace Ui {
class ChatMessage;
}

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
    Ui::ChatMessage *ui;
    QLabel *avatarLabel; // 头像
    QLabel *messageLabel; // 消息内容
    QHBoxLayout *layout; // 水平布局

    void setStyle(MessageType type);
};

#endif // CHAT_MESSAGE_H
