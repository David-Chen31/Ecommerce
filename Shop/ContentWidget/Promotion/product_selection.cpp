#include "product_selection.h"
#include "ui_product_selection.h"
#include "product_card_promotion.h"
#include "root/root.h"
#include "ContentWidget/Promotion/discount_settings.h"
#include "ContentWidget/Promotion/flash_sale_settings.h"

ProductSelection::ProductSelection(QWidget *parent, FlashSaleSettings* flashSaleSettings,
                                   DiscountSettings* discountSettings)
    : ContentWidget(parent)
    , ui(new Ui::ProductSelection)
    , discountSettings(discountSettings)
    , flashSaleSettings(flashSaleSettings)
{
    ui->setupUi(this);
}

ProductSelection::~ProductSelection()
{
    delete ui;
}

void ProductSelection::Refresh()
{
    //qDebug("ProductSelection refresh");

    // 删除原来的
    for (ProductCardPromotion* productCardPromotion : productCardPromotions) {
        // 断开信号槽连接
        disconnect(productCardPromotion, &ProductCardPromotion::clicked, this, nullptr);
        delete productCardPromotion;
    }
    productCardPromotions.clear();  // 清空列表，避免悬空指针
    selectedCard = nullptr;        // 重置选中卡片指针
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
        ProductCardPromotion* productCardPromotion = new ProductCardPromotion(nullptr, product);


        // 将该 ItemDisplay 添加到当前行布局中
        rowLayout->addWidget(productCardPromotion);
        productCardPromotion->setProductData();  // 设置产品数据
        connect(productCardPromotion, &ProductCardPromotion::clicked, this, [this, productCardPromotion]() {
            this->onProductSelected(productCardPromotion);
        });


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

void ProductSelection::onProductSelected(ProductCardPromotion* card)
{
    //qDebug() << "onProductSelected called for card:" << card;

    if (card == nullptr || !card->isWidgetType()) {
        //qDebug() << "Error: Selected card is null or invalid!";
        return;  // 确保指针有效
    }

    Product* product = card->getProduct();
    if (product == nullptr) {
        //qDebug() << "Error: Product is null!";
        return;  // 如果商品为空，直接返回
    }

    // 如果已有选中卡片且与当前选中的不同，则取消选中
    if (selectedCard != nullptr && selectedCard != card) {
        selectedCard->setSelected(false);
    }

    selectedCard = card;
    selectedCard->setSelected(true);
}





void ProductSelection::updateProductsLikeList()
{
    ObjectsManager::LoadProductsLikeList(ui->searchBox->text());
    //qDebug() << "正在搜索商品" << ui->searchBox->text();
    ProductsLikeList = ObjectsManager::GetProductLikeList();
}

ProductCardPromotion *ProductSelection::getProductCardPromotion()
{
    return selectedCard;
}

void ProductSelection::on_searchButton_clicked()
{
    Refresh();
}


void ProductSelection::on_confirmSelectionButton_clicked()
{
    //qDebug() << "Confirm selection clicked";

    if (selectedCard == nullptr) {
        //qDebug() << "No product selected!";
        return;  // 如果没有选中商品，直接返回
    }

    discountSettings->SetProduct(selectedCard->getProduct());
    discountSettings->Refresh();
    flashSaleSettings->SetProduct(selectedCard->getProduct());
    flashSaleSettings->Refresh();
    // 找到 Root 实例并跳转到 DiscountSettings 界面
    Root* root = Root::findRootWidget(this);
    if (root) {
        root->SetContentWidget(discountSettings);  // 跳转到折扣设置界面
    }
}

