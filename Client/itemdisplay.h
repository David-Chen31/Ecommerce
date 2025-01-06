#ifndef ITEMDISPLAY_H
#define ITEMDISPLAY_H

#include <QWidget>
#include "objects.h"


namespace Ui {
class ItemDisplay;
}

class Root;
class Commodity;

class ItemDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit ItemDisplay(QWidget *parent = nullptr, std::shared_ptr<Product> product = nullptr);
    ~ItemDisplay();

    void setProductData();

private slots:
    void on_JumpToDetailPage_clicked();

private:
    Ui::ItemDisplay *ui;
    std::shared_ptr<Product> product;
    Commodity* commodity;
};

#endif // ITEMDISPLAY_H
