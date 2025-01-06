#ifndef PROMOTION_H
#define PROMOTION_H

#include <QWidget>
#include "function_zone.h"

namespace Ui {
class Promotion;
}

class Product;

class Promotion : public FunctionZone
{
    Q_OBJECT

public:
    explicit Promotion(QWidget *parent = nullptr);
    ~Promotion();

    void Refresh();

    void ShowCommodity(QList<std::shared_ptr<Product>> ProductList = QList<std::shared_ptr<Product>>());

private slots:
    void on_SelectAll_clicked();

    void on_SelectFlashSale_clicked();

    void on_SelectDiscount_clicked();

private:
    Ui::Promotion *ui;
    QList<std::shared_ptr<Product>> productList;
};

#endif // PROMOTION_H
