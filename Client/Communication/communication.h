#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <QWidget>
#include <QTcpSocket>
#include <QCoreApplication>
#include <QDebug>
#include <QMap>
#include <QList>
#include <QJsonDocument>
#include <QJsonObject>
#include "function_zone.h"

namespace Ui {
class Communication;
}

class Contact;
class Shop;
class Message;
class MessageArea;
class ObjectToJson;

class Communication : public FunctionZone
{
    Q_OBJECT

public:
    explicit Communication(QWidget *parent = nullptr);
    ~Communication();

    void Refresh();          // 刷新联系人列表
    void Initial();          // 初始化联系人列表和消息
    void sendBindMessageToServer();
    void addContactToList(QString shopName, int shopId, QString avatarPath);  // 向联系人列表中添加新的联系人

private slots:
    void onContactClicked(int shopId, const QString &shopName); // 联系人点击事件
    void onMessageReceived(); // 处理从服务端接收到的消息
    void on_sendButton_clicked();

private:
    Ui::Communication *ui;
    QTcpSocket *tcpSocket;              // 用于与服务端通信的 TCP 客户端
    QList<Message*> readMessageList;
    QList<Message*> unreadMessageList;
    QMap<int, Contact*>contactList;
    MessageArea *currentMessageArea;  // 当前选中联系人的消息区域
    int currentShopId;                // 当前选中联系人的商店ID

    //void updateUnreadMessageCount();            // 更新未读消息数量
    void setupTcpClient();             // 初始化 TCP 客户端
    void processIncomingMessage(const QJsonObject &json); // 处理接收到的 JSON 消息
    void sendMessageToServer(Message *message);           // 发送消息给服务端
};

#endif // COMMUNICATION_H
