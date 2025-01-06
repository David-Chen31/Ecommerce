#ifndef CONTACT_H
#define CONTACT_H

#include <QWidget>
#include <QStyle>
#include <QMouseEvent>
#include "ContentWidget/Communication/chat_message.h"

namespace Ui {
class Contact;
}

class Client;
class MessageArea;
class Message;
class MessageArea;

class Contact : public QWidget
{
    Q_OBJECT

public:
    explicit Contact(QWidget *parent = nullptr, QString clientName = QString(), QString avatarPath = QString(), int clientId = 0);
    ~Contact();

    void InsertMessageToScrollArea(Message* message);
    void setSelected(bool selected);


    MessageArea* getMessageArea();

signals:
    void contactClicked(int clientId, const QString &clientName);

protected:
    void mousePressEvent(QMouseEvent *event) override;


private:
    Ui::Contact *ui;
    QString clientName;
    int clientId;
    MessageArea* messageArea;
    bool isSelected;
    QString avatarPath;
};

#endif // CONTACT_H
