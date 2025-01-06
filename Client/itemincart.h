#ifndef ITEMINCART_H
#define ITEMINCART_H

#include <QWidget>
#include <QCheckBox>
#include <QDebug>

namespace Ui {
class ItemInCart;
}

class Order;
class ObjectsManager;

class ItemInCart : public QWidget
{
    Q_OBJECT

public:
    explicit ItemInCart(QWidget *parent = nullptr, Order* order = nullptr);
    ~ItemInCart();

    void setProductName(QString name);
    void setProductPrice(QString price);
    void setProductQuantity(QString quantity);
    void setProductStyle(QString style);
    void setProductImage(QString address);

    Order* getOrder();

    double getProductPrice() const; // 获取商品价格
    QCheckBox* getCheckBox() const; // 获取商品选择框

signals:
    void selectionChanged(bool isSelected, double price); // 信号：选择状态变化

private slots:
    void onCheckBoxStateChanged(int state); // 槽函数：复选框状态变化

    void on_deleteButton_clicked();

private:
    Ui::ItemInCart *ui;
    Order* order;
    double productPrice; // 保存商品价格
};

#endif // ITEMINCART_H
