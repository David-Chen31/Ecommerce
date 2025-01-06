#ifndef PRODUCT_EDIT_H
#define PRODUCT_EDIT_H

#include <QWidget>
#include "ContentWidget/content_widget.h"

namespace Ui {
class ProductEdit;
}

class Product;
class Root;
class CreateNotification;

class ProductEdit : public ContentWidget
{
    Q_OBJECT

public:
    explicit ProductEdit(QWidget *parent = nullptr, Product* product = nullptr);
    ~ProductEdit();

    void Refresh();

private slots:
    void on_backButton_clicked();

    void on_saveButton_clicked();

    void on_selectImageButton_clicked();

private:
    Ui::ProductEdit *ui;
    Product* product;
};

#endif // PRODUCT_EDIT_H
