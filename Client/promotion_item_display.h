#ifndef PROMOTION_ITEM_DISPLAY_H
#define PROMOTION_ITEM_DISPLAY_H

#include <QWidget>

namespace Ui {
class PromotionItemDisplay;
}

class Root;
class Commodity;
class Product;

class PromotionItemDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit PromotionItemDisplay(QWidget *parent = nullptr, std::shared_ptr<Product> product = nullptr);
    ~PromotionItemDisplay();

    void setProductData();

private slots:
    void on_JumpToDetailPage_clicked();

private:
    Ui::PromotionItemDisplay *ui;
    std::shared_ptr<Product> product;
    Commodity* commodity;
};

#endif // PROMOTION_ITEM_DISPLAY_H
