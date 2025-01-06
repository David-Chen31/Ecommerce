#include "iteminpurchasehistory.h"
#include "ui_iteminpurchasehistory.h"
#include "root.h"
#include "objects.h"

ItemInPurchaseHistory::ItemInPurchaseHistory(QWidget *parent, Order* order)
    : QWidget(parent), order(order)
    , ui(new Ui::ItemInPurchaseHistory)
{
    ui->setupUi(this);

    ui->productImage->setPixmap(QPixmap("D:/QT/Documents/Ecommerce/Images/O1CN01FOJxee1R0UYd42KhH_--6000000002049-2-tps-192-192.png"));
    ui->productName->setText(order->getOrderProductName());
    ui->productPrice->setText(order->getOrderCost());
    ui->productQuantity->setText(QString::number(order->getOrderProductNum()));
    ui->productStyle->setText(order->getOrderProductStyle());
}

ItemInPurchaseHistory::~ItemInPurchaseHistory()
{
    delete ui;
}

void ItemInPurchaseHistory::setProductName(QString name)
{
    ui->productName->setText(name);
}

void ItemInPurchaseHistory::setProductPrice(QString price)
{
    ui->productPrice->setText(price);
}

void ItemInPurchaseHistory::setProductQuantity(QString quantity)
{
    ui->productQuantity->setText(quantity);
}

void ItemInPurchaseHistory::setProductStyle(QString style)
{
    ui->productStyle->setText(style);
}

void ItemInPurchaseHistory::setProductImage(QString address)
{
    ui->productImage->setPixmap(address);
}

void ItemInPurchaseHistory::on_refund_clicked()
{
    order->setOrderCheck(1); //退款后进入购物车，待优化
    ObjectsManager::updateHistory(order);
    this->close();
}


void ItemInPurchaseHistory::on_deleteButton_clicked()
{
    order->setOrderHide(-1); //退款后进入购物车，待优化
    ObjectsManager::updateHistory(order);
    this->close();
}

