#include "promotion_item_display.h"
#include "commodity.h"
#include "ui_promotion_item_display.h"
#include "objects.h"
#include "root.h"
PromotionItemDisplay::PromotionItemDisplay(QWidget *parent, std::shared_ptr<Product> product)
    : QWidget(parent), product(product)
    , ui(new Ui::PromotionItemDisplay)
{
    ui->setupUi(this);

    commodity = new Commodity(parent, product);
    commodity->setAttribute(Qt::WA_DeleteOnClose);
}

PromotionItemDisplay::~PromotionItemDisplay()
{
    delete ui;
    delete commodity;
}

//补充PromotionItemDisplay的ui
void PromotionItemDisplay::setProductData()
{
    ui->productName->setText(product->getProductName());

    QPixmap pixmap(product->getProductImage());
    QIcon icon(pixmap);
    ui->JumpToDetailPage->setIcon(icon);  // 设置按钮的图标

    // 设置图标大小为按钮的大小
    QSize iconSize(400, 450);  // 设置为100x100的图标大小，可以根据需要调整
    ui->JumpToDetailPage->setIconSize(iconSize);

    // 设置鼠标悬停时的光标为手型
    ui->JumpToDetailPage->setCursor(Qt::PointingHandCursor);

    //设置折扣和限时秒杀
    QDateTime currentTime = QDateTime::currentDateTime();
    if (product->getProductFlashSalePrice() != 0 && product->getFlashSalePurchaseLimit() != 0 &&
        currentTime < product->getFlashSaleEndTime() && currentTime > product->getFlashSaleStartTime())
    {
        float money = product->getProductFlashSalePrice();
        ui->productDiscount->setText("限时秒杀: "+QString::number(money)+"￥");
    }
    else if (product->getProductDiscount() != 1 && currentTime < product->getDiscountEndTime() && currentTime > product->getDiscountStartTime())
    {
        float discount = product->getProductDiscount();
        ui->productDiscount->setText("限时折扣: "+QString::number(discount*100)+"%");
    }

}
void PromotionItemDisplay::on_JumpToDetailPage_clicked()
{
    Root* rootWindow = Root::findRootWidget(this);
    rootWindow->SetCommodity(commodity);
}

