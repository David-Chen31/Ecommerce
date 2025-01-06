#include "purchasehistory.h"
#include "ui_purchasehistory.h"
#include "objects.h"
#include "iteminpurchasehistory.h"
#include "root.h"

PurchaseHistory::PurchaseHistory(QWidget *parent)
    : FunctionZone(parent)
    , ui(new Ui::PurchaseHistory)
{
    ui->setupUi(this);
}

PurchaseHistory::~PurchaseHistory()
{
    delete ui;
}

void PurchaseHistory::Refresh()
{
    qDebug("purchase_history refresh");

    ObjectsManager::LoadOrderListHistory();

    // 获取购物车中所有商品的列表
    QList<Order*>& history_order_list = ObjectsManager::GetOrderListHistory();
    QList<std::shared_ptr<Product>>& productList = ObjectsManager::GetProductList();

    QWidget* contentWidget = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(contentWidget);  // 使用垂直布局来排列商品行

    for (Order* order : history_order_list)
    {
        ItemInPurchaseHistory* itemInPurchaseHistory = new ItemInPurchaseHistory(nullptr, order);

        int productId = order->getOrderProductId();
        for (std::shared_ptr<Product> product:productList)
        {
            if (product->getProductId() == productId)
                itemInPurchaseHistory->setProductImage(product->getProductImage());
        }

        layout->addWidget(itemInPurchaseHistory);
    }

    // 将 contentWidget 设置为 scrollArea 的内容
    QScrollArea* scrollArea = ui->scrollArea;
    scrollArea->setWidget(contentWidget);  // 将整个容器放入 scrollArea
    scrollArea->setWidgetResizable(true);  // 使 scrollArea 可调整大小

}
