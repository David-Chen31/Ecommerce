#ifndef CONTACT_H
#define CONTACT_H

#include <QWidget>
#include <QStyle>
#include <QMouseEvent>
#include "Communication/chatmessage.h"

namespace Ui {
class Contact;
}

class Shop;
class MessageArea;
class Message;
class MessageArea;


class Contact : public QWidget
{
    Q_OBJECT

public:
    explicit Contact(QWidget *parent = nullptr, QString shopName = QString(), QString avatarPath = QString(), int shopId = 0);
    ~Contact();

    void InsertMessageToScrollArea(Message* message);
    void setSelected(bool selected);


    MessageArea* getMessageArea();

signals:
    void contactClicked(int shopId, const QString &shopName);

protected:
    void mousePressEvent(QMouseEvent *event) override;


private:
    Ui::Contact *ui;
    QString shopName;
    int shopId;
    MessageArea* messageArea;
    bool isSelected;
    QString avatarPath;
};

#endif // CONTACT_H
