#ifndef PRODUCT_CARD_H
#define PRODUCT_CARD_H

#include <QWidget>
#include "objects.h"

namespace Ui {
class ProductCard;
}

class Root;
class ProductEdit;

class ProductCard : public QWidget
{
    Q_OBJECT

public:
    explicit ProductCard(QWidget *parent = nullptr, Product* product = nullptr);
    ~ProductCard();

    void setProductData();

private slots:
    void on_JumpToEditPage_clicked();

private:
    Ui::ProductCard *ui;
    Product* product;
    ProductEdit* productEdit;
};

#endif // PRODUCT_CARD_H
