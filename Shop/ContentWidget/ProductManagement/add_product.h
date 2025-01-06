#ifndef ADD_PRODUCT_H
#define ADD_PRODUCT_H

#include <QWidget>
#include <QFileDialog>
#include "ContentWidget/content_widget.h"

namespace Ui {
class AddProduct;
}

class Product;
class Root;
class CreateNotification;

class AddProduct : public ContentWidget
{
    Q_OBJECT

public:
    explicit AddProduct(QWidget *parent = nullptr);
    ~AddProduct();

    void Refresh();

private slots:
    void on_selectImageButton_clicked();

    void on_submitButton_clicked();

private:
    Ui::AddProduct *ui;
    Product* product;
};

#endif // ADD_PRODUCT_H
