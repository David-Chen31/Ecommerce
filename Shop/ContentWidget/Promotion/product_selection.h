#ifndef PRODUCT_SELECTION_H
#define PRODUCT_SELECTION_H

#include <QWidget>
#include "ContentWidget/content_widget.h"


namespace Ui {
class ProductSelection;
}

class ProductCardPromotion;
class Product;
class DiscountSettings;
class FlashSaleSettings;

class ProductSelection : public ContentWidget
{
    Q_OBJECT

public:
    explicit ProductSelection(QWidget *parent = nullptr,
                              FlashSaleSettings* flashSaleSettings = nullptr,
                              DiscountSettings* discountSettings = nullptr);
    ~ProductSelection();

    void Refresh();
    void updateProductsLikeList();
    ProductCardPromotion* getProductCardPromotion();

private slots:
    void on_searchButton_clicked();
    void onProductSelected(ProductCardPromotion* card);

    void on_confirmSelectionButton_clicked();

private:
    Ui::ProductSelection *ui;
    QList<ProductCardPromotion*> productCardPromotions;
    QList<Product*> ProductsLikeList; // 用引用报错，待优化
    ProductCardPromotion* selectedCard; // 用于记录当前选中的卡片

    DiscountSettings* discountSettings;       // 折扣设置界面
    FlashSaleSettings* flashSaleSettings;     // 闪购设置界面
};

#endif // PRODUCT_SELECTION_H
