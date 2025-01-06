#ifndef ORDER_WIDGET_H
#define ORDER_WIDGET_H

#include <QWidget>
#include <QCheckBox>
#include <QDebug>

namespace Ui {
class OrderWidget;
}

class Order;
class ObjectsManager;

class OrderWidget : public QWidget
{
    Q_OBJECT

public:
    explicit OrderWidget(QWidget *parent = nullptr, Order* order = nullptr);
    ~OrderWidget();

    void setProductInfo(QString name);
    void setOrderAmount(QString amount);
    void setOrderTitle(QString orderTitle);
    void setProductImage(QString address);

    int getOrderShip();
    int getOrderRefund();


private:
    Ui::OrderWidget *ui;
    Order* order;
};

#endif // ORDER_WIDGET_H
