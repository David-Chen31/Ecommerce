#include "promotion.h"
#include "ui_promotion.h"
#include "promotion_item_display.h"
#include "root.h"
#include "objects.h"

Promotion::Promotion(QWidget *parent)
    : FunctionZone(parent)
    , ui(new Ui::Promotion)
{
    ui->setupUi(this);


}

Promotion::~Promotion()
{
    delete ui;
}

void Promotion::Refresh()
{
    qDebug("promotion refresh");

    // 商品重新排布
    ObjectsManager::LoadProductsList();
    productList = ObjectsManager::GetProductList();

    ShowCommodity(productList);

}

void Promotion::ShowCommodity(QList<std::shared_ptr<Product>> ProductList)
{
    // 获取 scrollArea 的当前内容
    QWidget* contentwidget = ui->goodsScrollArea->widget();

    // 删除旧的内容，避免内存泄漏
    if (contentwidget != nullptr) {
        delete contentwidget;  // 删除旧内容的 widget
    }

    // 创建一个容器 QWidget 用于承载所有商品的 ItemDisplay
    QWidget* contentWidget = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(contentWidget);  // 使用垂直布局来排列商品行

    // 设置每行显示的商品数量
    const int itemsPerRow = 3;
    QWidget* rowWidget = nullptr;
    QHBoxLayout* rowLayout = nullptr;

    // 遍历所有产品，并为每个产品创建一个 ItemDisplay
    int counter = 0;
    QDateTime currentTime = QDateTime::currentDateTime();
    for (std::shared_ptr<Product> product : ProductList)
    {
        if (product->getProductDiscount() == 1 || currentTime < product->getDiscountStartTime() || currentTime > product->getDiscountEndTime())
            continue;

        // 每行显示多个商品，创建新的行容器
        if (counter % itemsPerRow == 0) {
            rowWidget = new QWidget();            // 创建新的行容器
            rowLayout = new QHBoxLayout(rowWidget);  // 为该行容器创建水平布局
            rowWidget->setMinimumHeight(450);      // 设置每行最小高度为450
            layout->addWidget(rowWidget);            // 将这一行添加到主布局中
        }

        // 创建一个 ItemDisplay 实例，并传递产品信息给它
        PromotionItemDisplay* promotionItemDisplay = new PromotionItemDisplay(nullptr, product);

        // 将该 ItemDisplay 添加到当前行布局中
        rowLayout->addWidget(promotionItemDisplay);
        promotionItemDisplay->setProductData();  // 设置产品数据

        // 更新计数器
        counter++;
    }

    // 处理最后一行的布局，确保右边留空
    if (counter % itemsPerRow != 0) {
        int missingItems = itemsPerRow - (counter % itemsPerRow);
        for (int i = 0; i < missingItems; ++i) {
            // 创建占位控件
            QWidget* emptyWidget = new QWidget();
            emptyWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);  // 占位控件的大小策略
            emptyWidget->setMinimumHeight(450);  // 与商品高度保持一致
            rowLayout->addWidget(emptyWidget);   // 添加到当前行布局
        }
    }

    // 将 contentWidget 设置为 scrollArea 的内容
    QScrollArea* scrollArea = ui->goodsScrollArea;
    scrollArea->setWidget(contentWidget);  // 将整个容器放入 scrollArea
    scrollArea->setWidgetResizable(true);  // 使 scrollArea 可调整大小
}

void Promotion::on_SelectAll_clicked()
{
    ShowCommodity(productList);
}


void Promotion::on_SelectFlashSale_clicked()
{
    QList<std::shared_ptr<Product>> ProductList;
    QDateTime currentTime = QDateTime::currentDateTime();
    for (std::shared_ptr<Product> product : productList)
    {
        if (product->getProductFlashSalePrice() != 0 && product->getFlashSalePurchaseLimit() != 0 &&
            currentTime < product->getFlashSaleEndTime() && currentTime > product->getFlashSaleStartTime())
            ProductList.append(product);
    }
    ShowCommodity(ProductList);
}


void Promotion::on_SelectDiscount_clicked()
{
    QList<std::shared_ptr<Product>> ProductList;
    QDateTime currentTime = QDateTime::currentDateTime();
    for (std::shared_ptr<Product> product : productList)
    {
        if (product->getProductFlashSalePrice() != 0 && product->getFlashSalePurchaseLimit() != 0 &&
            currentTime < product->getFlashSaleEndTime() && currentTime > product->getFlashSaleStartTime())
            continue;

        if  (product->getProductDiscount() != 1 && currentTime < product->getDiscountEndTime() && currentTime > product->getDiscountStartTime())
            ProductList.append(product);
    }
    ShowCommodity(ProductList);
}

