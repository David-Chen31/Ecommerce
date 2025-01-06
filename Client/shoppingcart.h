#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <QWidget>
#include "function_zone.h"
#include <QMessageBox>


namespace Ui {
class ShoppingCart;
}

class ObjectsManager;
class ItemInCart;

class ShoppingCart : public FunctionZone
{
    Q_OBJECT

public:
    explicit ShoppingCart(QWidget *parent = nullptr);
    ~ShoppingCart();

    void Refresh();

private slots:
    void onCheckAllStateChanged(bool isCheck); // 全选按钮状态变化
    void updateSelectedItems(bool isSelected, double price); // 更新已选商品数量和总价

    void on_Settle_clicked();

private:
    Ui::ShoppingCart *ui;
    QList<ItemInCart*> itemList; // 存储购物车中的所有商品
    int selectedValue;  // 已选商品数量
    double totalValue;  // 总价
};

#endif // SHOPPINGCART_H
