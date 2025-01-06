#include "product_card.h"
#include "ui_product_card.h"
#include "root/root.h"
#include "ContentWidget/ProductManagement/product_edit.h"

ProductCard::ProductCard(QWidget *parent, Product* product)
    : QWidget(parent), product(product)
    , ui(new Ui::ProductCard)
{
    ui->setupUi(this);

    productEdit = new ProductEdit(parent, product);
    productEdit->setAttribute(Qt::WA_DeleteOnClose);
}

ProductCard::~ProductCard()
{
    delete ui;
    delete productEdit;
}

void ProductCard::setProductData()
{
    ui->productNameLabel->setText(product->getProductName());

    QPixmap pixmap(product->getProductImage());
    QIcon icon(pixmap);
    ui->JumpToEditPage->setIcon(icon);  // 设置按钮的图标

    // 设置图标大小为按钮的大小
    QSize iconSize(400, 450);  // 设置为100x100的图标大小，可以根据需要调整
    ui->JumpToEditPage->setIconSize(iconSize);

    // 设置鼠标悬停时的光标为手型
    ui->JumpToEditPage->setCursor(Qt::PointingHandCursor);

    ui->productPriceLabel->setText(QString::number(product->getProductPrice()));
}

void ProductCard::on_JumpToEditPage_clicked()
{
    Root* rootWindow = Root::findRootWidget(this);
    rootWindow->SetProductEdit(productEdit);
}

