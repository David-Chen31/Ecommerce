#ifndef MEDIATOR_SERVER_H
#define MEDIATOR_SERVER_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QMap>
#include <QJsonObject>
#include <QJsonDocument>

struct ClientInfo {
    QString senderType; // "Client" 或 "Shop"
    int id;             // 客户或商家的 ID
};


class MediatorServer : public QTcpServer {
    Q_OBJECT

public:
    explicit MediatorServer(QObject *parent = nullptr);
    bool startServer(const QString &address, quint16 port);

private slots:
    void onNewConnection();
    void onClientDisconnected();
    void onReadyRead();

private:
    QMap<QTcpSocket*, ClientInfo> clientSockets;     // 客户端连接映射 (socket -> clientId/shopId)
    void forwardMessage(const QJsonObject &message); // 转发消息
    void broadcastMessage(const QJsonObject &message); // 广播消息
};

#endif // MEDIATOR_SERVER_H
