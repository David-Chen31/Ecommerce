#ifndef PURCHASEHISTORY_H
#define PURCHASEHISTORY_H

#include <QWidget>
#include "function_zone.h"

namespace Ui {
class PurchaseHistory;
}

class Product;
class ItemDisplay;
class ObjectsManager;
class ItemInPurchaseHistory;

class PurchaseHistory : public FunctionZone
{
    Q_OBJECT

public:
    explicit PurchaseHistory(QWidget *parent = nullptr);
    ~PurchaseHistory();

    void Refresh();

private:
    Ui::PurchaseHistory *ui;
};

#endif // PURCHASEHISTORY_H
