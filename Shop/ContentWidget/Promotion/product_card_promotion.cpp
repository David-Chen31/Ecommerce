#include "product_card_promotion.h"
#include "ui_product_card_promotion.h"
#include "objects.h"

ProductCardPromotion::ProductCardPromotion(QWidget* parent, Product* product)
    : QWidget(parent), product(product)
    , ui(new Ui::ProductCardPromotion)
{
    ui->setupUi(this);

    if (product == nullptr) {
        qDebug() << "Error: Product is null in ProductCardPromotion constructor!";
    }
}


ProductCardPromotion::~ProductCardPromotion()
{
    qDebug() << "Destroying ProductCardPromotion:" << this;
    disconnect(this, nullptr, nullptr, nullptr);  // 断开所有信号槽
    delete ui;
}



void ProductCardPromotion::setProductData()
{
    if (product == nullptr) {
        qDebug() << "Product pointer is null!";
        return;  // 防止访问空指针
    }

    ui->productNameLabel->setText(product->getProductName());

    QPixmap pixmap(product->getProductImage());
    if (!pixmap.isNull()) {
        QPixmap scaledPixmap = pixmap.scaled(400, 450, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        ui->productImageLabel->setPixmap(scaledPixmap);
    } else {
        qDebug() << "Failed to load product image:" << product->getProductImage();
    }

    ui->originalPriceLabel->setText(QString("¥%1").arg(static_cast<double>(product->getProductPrice()), 0, 'f', 2));
    ui->currentPriceLabel->setText(QString("¥%1").arg(product->getProductPrice() * product->getProductDiscount(), 0, 'f', 2));
    ui->discountLabel->setText(QString("%1%").arg(product->getProductDiscount() * 100, 0, 'f', 0));
}


void ProductCardPromotion::setSelected(bool selected)
{
    qDebug() << "setSelected called for card:" << this << "with selected:" << selected;

    if (!this->isWidgetType()) {
        qDebug() << "Error: this pointer is invalid!";
        return;  // 确保 this 是有效的 QWidget
    }

    isSelected = selected;

    if (selected) {
        this->setStyleSheet("background-color: #ADD8E6; border: 1px solid #4682B4; border-radius: 10px;");
    } else {
        this->setStyleSheet("background-color: #FFFFFF; border: 1px solid #87CEFA; border-radius: 10px;");
    }
}


Product* ProductCardPromotion::getProduct()
{
    return product;
}


void ProductCardPromotion::mousePressEvent(QMouseEvent* event)
{
    qDebug() << "ProductCardPromotion clicked, emitting signal for card:" << this;
    emit clicked(this); // 发送点击信号
    QWidget::mousePressEvent(event);
}
