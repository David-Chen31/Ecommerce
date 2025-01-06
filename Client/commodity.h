#ifndef COMMODITY_H
#define COMMODITY_H

#include <QWidget>
#include "function_zone.h"

namespace Ui {
class Commodity;
}

class Product;
class Root;
class CreateNotification;

class Commodity : public FunctionZone
{
    Q_OBJECT

public:
    explicit Commodity(QWidget *parent = nullptr, std::shared_ptr<Product> product = nullptr);
    ~Commodity();
    void Refresh();

private slots:
    void on_Return_clicked();

    void on_purchase_clicked();

    void on_addToShoppingCart_clicked();

    void on_ContactBusiness_clicked();

private:
    Ui::Commodity *ui;
    std::shared_ptr<Product> product;
    int status; //0是
};

#endif // COMMODITY_H
