#ifndef PRODUCT_OVERVIEW_H
#define PRODUCT_OVERVIEW_H

#include <QWidget>
#include "ContentWidget/content_widget.h"
#include "product_card.h"

namespace Ui {
class ProductOverview;
}

class Root;
class ObjectsManager;
class Product;

class ProductOverview : public ContentWidget
{
    Q_OBJECT

public:
    explicit ProductOverview(QWidget *parent = nullptr);
    ~ProductOverview();

    void Refresh();
    void updateProductsLikeList();

private slots:
    void on_filterButton_clicked();

private:
    Ui::ProductOverview *ui;
    QList<ProductCard*> productCards;
    QList<Product*> ProductsLikeList; // 用引用报错，待优化
};

#endif // PRODUCT_OVERVIEW_H
