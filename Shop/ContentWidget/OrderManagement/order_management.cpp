#include "order_management.h"
#include "ui_order_management.h"
#include "root/root.h"
#include "ContentWidget/OrderManagement/order_widget.h"
#include "objects.h"

OrderManagement::OrderManagement(QWidget *parent)
    : ContentWidget(parent)
    , ui(new Ui::OrderManagement)
{
    ui->setupUi(this);
    // 将按钮的点击事件与筛选函数连接
    connect(ui->shippedButton, &QPushButton::clicked, this, &OrderManagement::filterOrders);
    connect(ui->unshippedButton, &QPushButton::clicked, this, &OrderManagement::filterOrders);
    connect(ui->returnInProgressButton, &QPushButton::clicked, this, &OrderManagement::filterOrders);
    connect(ui->returnCompleteButton, &QPushButton::clicked, this, &OrderManagement::filterOrders);

    // 创建一个容器 QWidget 用于承载所有商品的 orderWidget
    contentWidget = new QWidget();
    layout = new QVBoxLayout(contentWidget);  // 使用垂直布局来排列商品行


    // 将 contentWidget 设置为 scrollArea 的内容
    QScrollArea* scrollArea = ui->orderScrollArea;
    scrollArea->setWidget(contentWidget);  // 将整个容器放入 scrollArea
    scrollArea->setWidgetResizable(true);  // 使 scrollArea 可调整大小
}

OrderManagement::~OrderManagement()
{
    delete ui;
}

void OrderManagement::Refresh()
{
    //qDebug("OrderManagement Refresh");

    // 清空已有的订单控件
    for (OrderWidget* widget : orderWidgetList)
    {
        delete widget;  // 删除已有的控件
    }

    ObjectsManager::LoadOrderListByInfo();
    ObjectsManager::LoadProductsList();

    QList<Order*>& orderList = ObjectsManager::GetOrderList();
    QList<Product*>& productList = ObjectsManager::GetProductList();

    orderWidgetList.clear();

    // 遍历所有购物车中的商品，并为每个商品创建一个 orderWidget
    for (Order* order : orderList)
    {
        // 创建一个 orderWidget 实例，并传递商品信息给它
        OrderWidget* orderWidget = new OrderWidget(nullptr, order);

        // 将商品添加到 itemList
        orderWidgetList.append(orderWidget);

        // 设置商品图片
        int productId = order->getOrderProductId();
        for (Product* product : productList)
        {
            if (product->getProductId() == productId)
            {
                orderWidget->setProductImage(product->getProductImage());
                //qDebug("找到对应的商品图片地址");
            }
        }

        // 将该 orderWidget 添加到当前行布局中
        layout->addWidget(orderWidget);
    }

}

void OrderManagement::Show(QList<OrderWidget*>  filteredOrderWidgetList)
{
    for (OrderWidget* orderWidget : orderWidgetList)
    {
        orderWidget->hide();
    }

    for (OrderWidget* orderWidget : filteredOrderWidgetList)
    {
        orderWidget->show();
    }

}


void OrderManagement::filterOrders()
{
    // 清空筛选后的订单列表
    QList<OrderWidget*> newOrderWidgetList;

    // 遍历所有订单并应用筛选条件
    for (OrderWidget* orderWidget : orderWidgetList)
    {
        // 如果 "已发货" 按钮被选中并且订单是已发货的，添加到筛选结果
        if (ui->shippedButton->isChecked() && orderWidget->getOrderShip() == 1)
        {
            newOrderWidgetList.append(orderWidget);
        }
        // 如果 "未发货" 按钮被选中并且订单是未发货的，添加到筛选结果
        else if (ui->unshippedButton->isChecked() && orderWidget->getOrderShip() == 0)
        {
            newOrderWidgetList.append(orderWidget);
        }
        // 如果 "退货处理中" 按钮被选中并且订单处于退货处理中，添加到筛选结果
        else if (ui->returnInProgressButton->isChecked() && orderWidget->getOrderRefund() == 2)
        {
            newOrderWidgetList.append(orderWidget);
        }
        // 如果 "退货完成" 按钮被选中并且订单已退款，添加到筛选结果
        else if (ui->returnCompleteButton->isChecked() && orderWidget->getOrderRefund() == 1)
        {
            newOrderWidgetList.append(orderWidget);
        }
        // 如果没有按钮被选中，默认添加所有订单
        else if (!ui->shippedButton->isChecked() && !ui->unshippedButton->isChecked() &&
                 !ui->returnInProgressButton->isChecked() && !ui->returnCompleteButton->isChecked())
        {
            newOrderWidgetList.append(orderWidget);
        }
    }

    Show(newOrderWidgetList);
}
