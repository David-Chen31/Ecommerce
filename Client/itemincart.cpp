#include "itemincart.h"
#include "ui_itemincart.h"
#include "root.h"
#include "objects.h"
#include "notification/create_notification.h"

ItemInCart::ItemInCart(QWidget *parent, Order* order)
    : QWidget(parent), order(order)
    , ui(new Ui::ItemInCart)
{
    ui->setupUi(this);

    ui->productName->setText(order->getOrderProductName());
    ui->productPrice->setText(order->getOrderCost());
    ui->productQuantity->setText(QString::number(order->getOrderProductNum()));
    ui->productStyle->setText(order->getOrderProductStyle());

    // 获取商品价格并保存
    productPrice = order->getOrderCost().toDouble();
    //qDebug() << productPrice;

    // 连接复选框的状态变化信号到槽函数
    connect(ui->selectCheckBox, &QCheckBox::stateChanged, this, &ItemInCart::onCheckBoxStateChanged);
}

ItemInCart::~ItemInCart()
{
    delete ui;
}

void ItemInCart::setProductName(QString name)
{
    ui->productName->setText(name);
}

void ItemInCart::setProductPrice(QString price)
{
    ui->productPrice->setText(price);
}

void ItemInCart::setProductQuantity(QString quantity)
{
    ui->productQuantity->setText(quantity);
}

void ItemInCart::setProductStyle(QString style)
{
    ui->productStyle->setText(style);
}

void ItemInCart::setProductImage(QString address)
{
    ui->productImage->setPixmap(address);
}

Order *ItemInCart::getOrder()
{
    return order;
}


double ItemInCart::getProductPrice() const
{
    return productPrice;
}

QCheckBox* ItemInCart::getCheckBox() const
{
    return ui->selectCheckBox;
}

void ItemInCart::onCheckBoxStateChanged(int state)
{
    bool isSelected = (state == Qt::Checked);
    emit selectionChanged(isSelected, productPrice); // 发射信号，通知 ShoppingCart
}

void ItemInCart::on_deleteButton_clicked()
{
    ui->selectCheckBox->setCheckState(Qt::Unchecked);
    order->setOrderHide(-1);
    ObjectsManager::updateHistory(order);
    this->close();
}

