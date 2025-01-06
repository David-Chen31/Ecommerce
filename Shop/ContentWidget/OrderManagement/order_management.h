#ifndef ORDER_MANAGEMENT_H
#define ORDER_MANAGEMENT_H

#include <QWidget>
#include <QVBoxLayout>
#include "ContentWidget/content_widget.h"


namespace Ui {
class OrderManagement;
}

class OrderWidget;
class Order;

class OrderManagement : public ContentWidget
{
    Q_OBJECT

public:
    explicit OrderManagement(QWidget *parent = nullptr);
    ~OrderManagement();

    void Refresh();

    void Show(QList<OrderWidget*>  filteredOrderWidgetList);

    void filterOrders();

private:
    Ui::OrderManagement *ui;
    QList<OrderWidget*> orderWidgetList; // 所有订单
    QWidget* contentWidget;
    QVBoxLayout* layout;  // 使用垂直布局来排列商品行
};

#endif // ORDER_MANAGEMENT_H
