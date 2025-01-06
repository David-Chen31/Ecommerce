#ifndef FLASH_SALE_SETTINGS_H
#define FLASH_SALE_SETTINGS_H

#include <QWidget>
#include "ContentWidget/content_widget.h"

namespace Ui {
class FlashSaleSettings;
}

class Root;
class Product;
class CreateNotification;

class FlashSaleSettings : public ContentWidget
{
    Q_OBJECT

public:
    explicit FlashSaleSettings(QWidget *parent = nullptr, Product* product = nullptr);
    ~FlashSaleSettings();

    void Refresh();

    void SetProduct(Product* product);

private slots:
    void on_saveButton_clicked();

    void on_resetButton_clicked();

private:
    Ui::FlashSaleSettings *ui;
    Product* product;
};

#endif // FLASH_SALE_SETTINGS_H
