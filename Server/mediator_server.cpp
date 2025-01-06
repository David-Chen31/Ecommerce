#include "mediator_server.h"
#include <QDebug>

MediatorServer::MediatorServer(QObject *parent) : QTcpServer(parent) {
    connect(this, &QTcpServer::newConnection, this, &MediatorServer::onNewConnection);
}

bool MediatorServer::startServer(const QString &address, quint16 port) {
    if (!this->listen(QHostAddress(address), port)) {
        qWarning() << "Server failed to start on" << address << ":" << port;
        return false;
    }
    qDebug() << "Server started on" << address << ":" << port;
    return true;
}

void MediatorServer::onNewConnection() {
    QTcpSocket *clientSocket = this->nextPendingConnection(); // 获取新连接的 socket
    if (!clientSocket) {
        qWarning() << "Failed to get new connection socket!";
        return;
    }

    // 绑定信号槽
    connect(clientSocket, &QTcpSocket::readyRead, this, &MediatorServer::onReadyRead);
    connect(clientSocket, &QTcpSocket::disconnected, this, &MediatorServer::onClientDisconnected);

    // 将新连接的 socket 加入 clientSockets，并暂时设置 ID 为 -1 和 senderType 为 "Unknown"
    clientSockets[clientSocket] = {"Unknown", -1};

    qDebug() << "New client connected from" << clientSocket->peerAddress().toString()
             << "and port" << clientSocket->peerPort();
}


void MediatorServer::onClientDisconnected() {
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket *>(sender());
    if (!clientSocket) return;

    auto it = clientSockets.find(clientSocket);
    if (it != clientSockets.end()) {
        qDebug() << "Client disconnected with ID:" << it.value().id
                 << "Type:" << it.value().senderType;
        clientSockets.erase(it);
    }

    clientSocket->deleteLater();
}


void MediatorServer::onReadyRead() {
    QTcpSocket *clientSocket = qobject_cast<QTcpSocket *>(sender());
    if (!clientSocket) return;

    QByteArray data = clientSocket->readAll();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(data);

    if (jsonDoc.isNull() || !jsonDoc.isObject()) {
        qWarning() << "Invalid JSON received:" << data;
        return;
    }

    QJsonObject json = jsonDoc.object();
    qDebug() << "Message received from client:" << json;

    // 如果是绑定请求
    if (json.contains("messageClientId") && json.contains("senderType")) {
        QString senderType = json["senderType"].toString();
        int id = senderType == "Client" ? json["messageClientId"].toInt() : json["messageShopId"].toInt();

        clientSockets[clientSocket] = {senderType, id}; // 使用 ClientInfo 存储信息
        qDebug() << "Client bound to ID:" << id << "as" << senderType;
    }

    // 转发消息
    forwardMessage(json);
}



void MediatorServer::forwardMessage(const QJsonObject &message) {
    QString senderType = message["senderType"].toString();
    int targetId = -1;

    if (senderType == "Client") {
        // 客户发的消息，目标是商家
        targetId = message["messageShopId"].toInt();
    } else if (senderType == "Shop") {
        // 商家发的消息，目标是客户
        targetId = message["messageClientId"].toInt();
    }

    if (targetId == -1) {
        qWarning() << "Invalid target ID in message:" << message;
        return;
    }

    QTcpSocket *targetSocket = nullptr;

    // 查找目标 socket
    for (auto it = clientSockets.begin(); it != clientSockets.end(); ++it) {
        if (it.value().id == targetId && it.value().senderType != senderType) {
            targetSocket = it.key();
            break;
        }
    }

    if (!targetSocket) {
        qWarning() << "Target socket not found for ID:" << targetId;
        return;
    }

    QByteArray jsonData = QJsonDocument(message).toJson(QJsonDocument::Compact);
    targetSocket->write(jsonData);
    targetSocket->flush();

    qDebug() << "Message forwarded to" << (senderType == "Client" ? "Shop" : "Client")
             << "with ID:" << targetId;
}




void MediatorServer::broadcastMessage(const QJsonObject &message) {
    QByteArray jsonData = QJsonDocument(message).toJson(QJsonDocument::Compact);
    for (QTcpSocket *socket : clientSockets.keys()) {
        socket->write(jsonData);
        socket->flush();
    }
    qDebug() << "Broadcasted message:" << message;
}
