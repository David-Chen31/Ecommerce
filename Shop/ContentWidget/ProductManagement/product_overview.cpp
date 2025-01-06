#include "product_overview.h"
#include "ui_product_overview.h"
#include "root/root.h"
#include "objects.h"

ProductOverview::ProductOverview(QWidget *parent)
    : ContentWidget(parent)
    , ui(new Ui::ProductOverview)
{
    ui->setupUi(this);
}

ProductOverview::~ProductOverview()
{
    delete ui;
}

void ProductOverview::Refresh()
{
    //qDebug("ProductOverview refresh");

    Root::SetProductEditNull();

    // 删除原来的
    for (ProductCard* productCard: productCards)
    {
        delete(productCard);
    }

    // 商品重新排布
    ObjectsManager::LoadProductsList();
    updateProductsLikeList();

    // 创建一个容器 QWidget 用于承载所有商品的 ItemDisplay
    QWidget* contentWidget = new QWidget();
    QVBoxLayout* layout = new QVBoxLayout(contentWidget);  // 使用垂直布局来排列商品行

    // 设置每行显示的商品数量
    const int itemsPerRow = 3;
    QWidget* rowWidget = nullptr;
    QHBoxLayout* rowLayout = nullptr;

    // 遍历所有产品，并为每个产品创建一个 ItemDisplay
    int counter = 0;
    for (Product* product : ProductsLikeList)
    {
        // 每行显示多个商品，创建新的行容器
        if (counter % itemsPerRow == 0) {
            rowWidget = new QWidget();            // 创建新的行容器
            rowLayout = new QHBoxLayout(rowWidget);  // 为该行容器创建水平布局
            rowWidget->setMinimumHeight(450);      // 设置每行最小高度为250
            layout->addWidget(rowWidget);            // 将这一行添加到主布局中
        }

        // 创建一个 ItemDisplay 实例，并传递产品信息给它
        ProductCard* productCard = new ProductCard(nullptr, product);


        // 将该 ItemDisplay 添加到当前行布局中
        rowLayout->addWidget(productCard);
        productCard->setProductData();  // 设置产品数据


        // 更新计数器
        counter++;
    }

    // 处理最后一行的布局，确保右边留空
    // 如果最后一行少于itemsPerRow个商品，QHBoxLayout自动留空
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

void ProductOverview::updateProductsLikeList()
{
    ObjectsManager::LoadProductsLikeList(ui->searchBox->text());
    //qDebug() << "正在搜索商品" << ui->searchBox->text();
    ProductsLikeList = ObjectsManager::GetProductLikeList();
}

void ProductOverview::on_filterButton_clicked()
{
    Refresh();
}

