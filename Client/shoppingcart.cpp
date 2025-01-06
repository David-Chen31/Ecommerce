#include "shoppingcart.h"
#include "ui_shoppingcart.h"
#include "root.h"
#include "itemincart.h"
#include "notification/create_notification.h"

ShoppingCart::ShoppingCart(QWidget *parent)
    : FunctionZone(parent)
    , ui(new Ui::ShoppingCart)
{
    ui->setupUi(this);

    // ObjectsManager::LoadOrderListExisting();
    // itemList = ObjectsManager::GetProductList();

    // 初始化显示
    ui->selectedValue->setText("0");
    ui->TotalValue->setText("¥0.00");

    totalValue = 0;
    selectedValue = 0;

    // 连接全选按钮的信号到槽函数
    connect(ui->checkAll, &QRadioButton::toggled, this, &ShoppingCart::onCheckAllStateChanged);
}

ShoppingCart::~ShoppingCart()
{
    delete ui;
}

// void ShoppingCart::Refresh()
// {
//     qDebug("clientping refresh");

//     ObjectsManager::LoadOrderListExisting();

//     // 获取购物车中所有商品的列表
//     QList<Order*>& cartList = ObjectsManager::GetOrderListExisting();
//     QList<std::shared_ptr<Product>>& productList = ObjectsManager::GetProductList();


//     // 创建一个容器 QWidget 用于承载所有商品的 ItemInCart
//     QWidget* contentWidget = new QWidget();
//     QVBoxLayout* layout = new QVBoxLayout(contentWidget);  // 使用垂直布局来排列商品行

//     // 遍历所有购物车中的商品，并为每个商品创建一个 ItemInCart
//     for (Order* order : cartList)
//     {
//         // 创建一个 ItemInCart 实例，并传递商品信息给它
//         ItemInCart* itemInCart = new ItemInCart(nullptr, order);

//         // 连接 ItemInCart 的信号到 ShoppingCart 的槽函数
//         connect(itemInCart, &ItemInCart::selectionChanged, this, &ShoppingCart::updateSelectedItems);

//         //传图片地址
//         int productId = order->getOrderProductId();
//         for (std::shared_ptr<Product> product:productList)
//         {
//             if (product->getProductId() == productId)
//                 itemInCart->setProductImage(product->getProductImage());
//         }

//         // 将该 ItemInCart 添加到当前行布局中
//         layout->addWidget(itemInCart);
//     }

//     // 将 contentWidget 设置为 scrollArea 的内容
//     QScrollArea* scrollArea = ui->scrollArea;
//     scrollArea->setWidget(contentWidget);  // 将整个容器放入 scrollArea
//     scrollArea->setWidgetResizable(true);  // 使 scrollArea 可调整大小

// }

void ShoppingCart::Refresh()
{
    //qDebug("clientping refresh");

    ObjectsManager::LoadOrderListExisting();

    // 获取购物车中所有商品的列表
    QList<Order*>& cartList = ObjectsManager::GetOrderListExisting();
    QList<std::shared_ptr<Product>>& productList = ObjectsManager::GetProductList();

    // 清空现有的 itemList
    itemList.clear();

    // 创建一个容器 QWidget 用于承载所有商品的 ItemInCart
    QWidget* contentWidget = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(contentWidget);  // 使用垂直布局来排列商品行

    // 遍历所有购物车中的商品，并为每个商品创建一个 ItemInCart
    for (Order* order : cartList)
    {
        // 创建一个 ItemInCart 实例，并传递商品信息给它
        ItemInCart* itemInCart = new ItemInCart(nullptr, order);

        // 将商品添加到 itemList
        itemList.append(itemInCart);

        // 连接 ItemInCart 的信号到 ShoppingCart 的槽函数
        connect(itemInCart, &ItemInCart::selectionChanged, this, &ShoppingCart::updateSelectedItems);

        // 设置商品图片
        int productId = order->getOrderProductId();
        for (std::shared_ptr<Product> product : productList)
        {
            if (product->getProductId() == productId)
                itemInCart->setProductImage(product->getProductImage());
        }

        // 将该 ItemInCart 添加到当前行布局中
        layout->addWidget(itemInCart);
    }

    // 将 contentWidget 设置为 scrollArea 的内容
    QScrollArea* scrollArea = ui->scrollArea;
    scrollArea->setWidget(contentWidget);  // 将整个容器放入 scrollArea
    scrollArea->setWidgetResizable(true);  // 使 scrollArea 可调整大小
}


// void ShoppingCart::updateSelectedItems(bool isSelected, double price)
// {
//     if (isSelected) {
//         selectedValue++;
//         totalValue += price;
//         qDebug()<<"updateSelectedItems中加price："<<price;
//     } else {
//         selectedValue--;
//         totalValue -= price;
//         qDebug()<<"updateSelectedItems中减price："<<price;
//     }

//     // 更新 UI
//     ui->selectedValue->setText(QString::number(selectedValue));
//     ui->TotalValue->setText(QString("¥%1").arg(totalValue, 0, 'f', 2));
// }

void ShoppingCart::updateSelectedItems(bool isSelected, double price)
{
    if (isSelected) {
        selectedValue++;
        totalValue += price;
    } else {
        selectedValue--;
        totalValue -= price;
    }

    // 防止溢出或负数
    if (selectedValue < 0) selectedValue = 0;
    if (totalValue < 0.0) totalValue = 0.0;

    // 更新 UI
    ui->selectedValue->setText(QString::number(selectedValue));
    ui->TotalValue->setText(QString("¥%1").arg(totalValue, 0, 'f', 2));

    // 如果有任何一个商品未被选中，取消全选状态
    if (!isSelected) {
        ui->checkAll->setChecked(false);
    } else {
        // 如果所有商品都被选中，设置全选状态
        bool allSelected = true;
        for (ItemInCart* item : itemList) {
            if (!item->getCheckBox()->isChecked()) {
                allSelected = false;
                break;
            }
        }
        ui->checkAll->setChecked(allSelected);
    }
}

void ShoppingCart::onCheckAllStateChanged(bool isChecked)
{
    // 遍历所有商品，设置其选择状态
    for (ItemInCart* item : itemList) {
        QCheckBox* checkBox = item->getCheckBox();
        if (checkBox) {
            checkBox->blockSignals(true); // 暂时阻止信号发射，避免触发多余的逻辑
            checkBox->setChecked(isChecked);
            checkBox->blockSignals(false); // 恢复信号发射
        }
    }

    // 更新已选商品数量和总价
    if (isChecked) {
        selectedValue = itemList.size();
        totalValue = 0.0;
        for (ItemInCart* item : itemList) {
            totalValue += item->getProductPrice();
        }
    } else {
        selectedValue = 0;
        totalValue = 0.0;
    }

    // 更新 UI
    ui->selectedValue->setText(QString::number(selectedValue));
    ui->TotalValue->setText(QString("¥%1").arg(totalValue, 0, 'f', 2));
}




void ShoppingCart::on_Settle_clicked()
{
    // Check if any items are selected
    QList<ItemInCart*> selectedItems;
    for (ItemInCart* item : itemList) {
        if (item->getCheckBox()->isChecked()) {
            selectedItems.append(item); // Add selected items to the list
        }
    }

    // If no items are selected, show a warning and return
    if (selectedItems.isEmpty()) {
        QMessageBox::warning(this, "结算失败", "请至少选择一个商品进行结算！");
        return;
    }

    // Process settlement for each selected item
    double totalSettledAmount = ui->TotalValue->text().remove("¥").toDouble(); // Track total settlement amount
    for (ItemInCart* item : selectedItems) {
        // Example: Mark the order as settled (update database or backend logic)
        Order* order = item->getOrder();
        if (order) {
            order->setOrderCheck(-1); // Update the order status
            ObjectsManager::updateHistory(order); // Update the order in the database
        }

        // Optionally, remove the item from the UI or mark it as processed
        item->close();
    }

    // Show a success message with the total settled amount
    CreateNotification* notification = new CreateNotification(QString("已成功结算 %1 件商品，总金额为 ¥%2").arg(selectedItems.size()).arg(totalSettledAmount, 0, 'f', 2), this);
    notification->showNotification();

    // 清空所有勾选状态
    for (ItemInCart* item : itemList) {
        item->getCheckBox()->setChecked(false); // 取消勾选状态
    }

    // 重置“已选商品”和“总价”
    ui->selectedValue->setText("0");        // 已选商品数量归零
    ui->TotalValue->setText("¥0.00");      // 总价归零
}

