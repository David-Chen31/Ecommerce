#ifndef DISCOUNT_SETTINGS_H
#define DISCOUNT_SETTINGS_H

#include <QWidget>
#include "ContentWidget/content_widget.h"

namespace Ui {
class DiscountSettings;
}

class Root;
class Product;
class CreateNotification;

class DiscountSettings : public ContentWidget
{
    Q_OBJECT

public:
    explicit DiscountSettings(QWidget *parent = nullptr, Product* product = nullptr);
    ~DiscountSettings();

    void Refresh();

    void SetProduct(Product* product);

private slots:
    void on_saveButton_clicked();

    // 添加槽函数声明，处理折扣变动
    void onDiscountChanged(int value);

    void on_resetButton_clicked();

private:
    Ui::DiscountSettings *ui;
    Product* product;
};

#endif // DISCOUNT_SETTINGS_H
