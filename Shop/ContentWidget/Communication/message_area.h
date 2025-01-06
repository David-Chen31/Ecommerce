#ifndef MESSAGE_AREA_H
#define MESSAGE_AREA_H

#include <QWidget>
#include <QVBoxLayout>
#include <QScrollArea>
#include <QDateTime>
#include <QDebug>
#include <QScrollBar>
#include "ContentWidget/Communication/chat_message.h"

namespace Ui {
class MessageArea;
}

class Message;

class MessageArea : public QWidget
{
    Q_OBJECT

public:
    explicit MessageArea(QWidget *parent = nullptr);
    ~MessageArea();

    void addChatMessage(Message *message); // 根据 Message 对象添加消息
    void clearMessages();                   // 清除所有消息

    QVBoxLayout *messageLayout; // 消息布局
    QList<ChatMessage *> messages; // 存储消息的指针列表

private:
    Ui::MessageArea *ui;
    void scrollToBottom(); // 自动滚动到底部
};

#endif // MESSAGE_AREA_H
