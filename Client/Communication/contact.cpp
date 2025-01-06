#include "contact.h"
#include "ui_contact.h"
#include "objects.h"
#include "Communication/messagearea.h"
#include "Communication/chatmessage.h"

Contact::Contact(QWidget *parent, QString shopName, QString avatarPath, int shopId)
    : QWidget(parent)
    , ui(new Ui::Contact)
    , shopName(shopName)
    , shopId(shopId)
    , isSelected(false)
    , avatarPath(avatarPath)
{
    ui->setupUi(this);
    // 设置名字
    ui->nameLabel->setText(shopName);

    // 设置头像
    if (!avatarPath.isEmpty()) {
        QPixmap avatarPixmap(avatarPath);
        ui->avatar->setPixmap(avatarPixmap);
    }

    messageArea = new MessageArea();
}

Contact::~Contact()
{
    delete ui;
    delete messageArea;
}

void Contact::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        emit contactClicked(shopId, shopName);
        setSelected(true); // 设置为选中状态
    }
    QWidget::mousePressEvent(event);
}

void Contact::setSelected(bool selected)
{
    isSelected = selected;
    setProperty("selected", selected); // 更新 QSS 属性
    style()->unpolish(this);           // 重新应用 QSS
    style()->polish(this);
}

MessageArea *Contact::getMessageArea()
{
    return messageArea;
}

