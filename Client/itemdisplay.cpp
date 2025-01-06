#include "itemdisplay.h"
#include "ui_itemdisplay.h"
#include "root.h"
#include "commodity.h"

ItemDisplay::ItemDisplay(QWidget *parent, std::shared_ptr<Product> product)
    : QWidget(parent), product(product)
    , ui(new Ui::ItemDisplay)
{
    ui->setupUi(this);

    commodity = new Commodity(parent, product);
    commodity->setAttribute(Qt::WA_DeleteOnClose);
}

ItemDisplay::~ItemDisplay()
{
    delete ui;
    delete commodity;
}

//补充itemdisplay的ui
void ItemDisplay::setProductData()
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
}

void ItemDisplay::on_JumpToDetailPage_clicked()
{
    Root* rootWindow = Root::findRootWidget(this);
    rootWindow->SetCommodity(commodity);
}

