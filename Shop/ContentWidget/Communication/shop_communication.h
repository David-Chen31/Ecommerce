#ifndef SHOP_COMMUNICATION_H
#define SHOP_COMMUNICATION_H

#include <QWidget>
#include <QTcpSocket>
#include <QCoreApplication>
#include <QDebug>
#include <QMap>
#include <QList>
#include <QJsonDocument>
#include <QJsonObject>
#include "ContentWidget/content_widget.h"

namespace Ui {
class ShopCommunication;
}

class Contact;
class Client;
class Message;
class MessageArea;
class ObjectToJson;

class ShopCommunication : public ContentWidget
{
    Q_OBJECT

public:
    explicit ShopCommunication(QWidget *parent = nullptr);
    ~ShopCommunication();

    void Refresh();          // 刷新联系人列表
    void sendBindMessageToServer();

private slots:
    void on_sendButton_clicked();
    void onContactClicked(int clientId, const QString &clientName); // 联系人点击事件
    void onMessageReceived(); // 处理从服务端接收到的消息

private:
    Ui::ShopCommunication *ui;
    QTcpSocket *tcpSocket;              // 用于与服务端通信的 TCP 客户端
    QList<Message*> readMessageList;
    QList<Message*> unreadMessageList;
    QMap<int, Contact*>contactList;
    MessageArea *currentMessageArea;  // 当前选中联系人的消息区域
    int currentClientId;                // 当前选中联系人的商店ID

    //void updateUnreadMessageCount();            // 更新未读消息数量
    void setupTcpShop();             // 初始化 TCP 客户端
    void processIncomingMessage(const QJsonObject &json); // 处理接收到的 JSON 消息
    void sendMessageToServer(Message *message);           // 发送消息给服务端

};

#endif // SHOP_COMMUNICATION_H
