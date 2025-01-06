#ifndef PRODUCT_CARD_PROMOTION_H
#define PRODUCT_CARD_PROMOTION_H

#include <QWidget>
#include <QIcon>
#include <QDebug>

namespace Ui {
class ProductCardPromotion;
}

class Product;

class ProductCardPromotion : public QWidget
{
    Q_OBJECT

public:
    explicit ProductCardPromotion(QWidget *parent = nullptr, Product* product = nullptr);
    ~ProductCardPromotion();

    void setProductData();

    void setSelected(bool selected);

    Product* getProduct();

signals:
    void clicked(ProductCardPromotion* card);

protected:
    void mousePressEvent(QMouseEvent* event) override ;

private:
    Ui::ProductCardPromotion *ui;
    Product* product;
    bool isSelected;
};

#endif // PRODUCT_CARD_PROMOTION_H
