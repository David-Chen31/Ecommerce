#include "order_widget.h"
#include "ui_order_widget.h"
#include "objects.h"
#include "root/root.h"

OrderWidget::OrderWidget(QWidget *parent, Order* order)
    : QWidget(parent), order(order)
    , ui(new Ui::OrderWidget)
{
    ui->setupUi(this);

    ui->productInfo->setText("商品名称：" + order->getOrderProductName() +" | 数量：" + QString::number(order->getOrderProductNum()));
    ui->orderAmount->setText("订单金额：¥"+ order->getOrderCost() + " | 优惠：¥20.00 | 实付：¥" + order->getOrderCost());
    ui->orderTitle->setText("订单编号：" + QString::number(order->getOrderId()));

}

OrderWidget::~OrderWidget()
{
    delete ui;
}

void OrderWidget::setProductInfo(QString name)
{
    ui->productInfo->setText("商品名称：" + order->getOrderProductName() +" | 数量：" + QString::number(order->getOrderProductNum()));
}

void OrderWidget::setOrderAmount(QString amount)
{
    ui->orderAmount->setText("订单金额：¥"+ order->getOrderCost() + " | 优惠：¥20.00 | 实付：¥180.00" + order->getOrderCost());
}

void OrderWidget::setOrderTitle(QString orderTitle)
{
    ui->orderTitle->setText("订单编号：" + QString::number(order->getOrderId()));
}

void OrderWidget::setProductImage(QString address)
{
    ui->productImage->setPixmap(address);

    // 获取 QLabel 的大小
    QSize labelSize = ui->productImage->size();

    // 设置调整后的图片到 QLabel
    QPixmap pixmap(address);
    ui->productImage->setPixmap(pixmap);

    // 获取原始图片并调整大小
    pixmap = pixmap.scaled(labelSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    if (!pixmap.isNull()) {
        //QPixmap scaledPixmap = pixmap.scaled(400, 450, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        ui->productImage->setPixmap(pixmap);
    } else {
        //qDebug() << "Failed to load product image:" << address;
    }
}

int OrderWidget::getOrderShip()
{
    return order->getOrderShip();
}

int OrderWidget::getOrderRefund()
{
    return order->getOrderRefund();
}
