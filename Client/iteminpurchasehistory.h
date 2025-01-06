#ifndef ITEMINPURCHASEHISTORY_H
#define ITEMINPURCHASEHISTORY_H

#include <QWidget>

namespace Ui {
class ItemInPurchaseHistory;
}

class Order;
class ObjectsManager;

class ItemInPurchaseHistory : public QWidget
{
    Q_OBJECT

public:
    explicit ItemInPurchaseHistory(QWidget *parent = nullptr, Order* order = nullptr);
    ~ItemInPurchaseHistory();

    void setProductName(QString name);
    void setProductPrice(QString price);
    void setProductQuantity(QString quantity);
    void setProductStyle(QString style);
    void setProductImage(QString address);

private slots:
    void on_refund_clicked();

    void on_deleteButton_clicked();

private:
    Ui::ItemInPurchaseHistory *ui;
    Order* order;
};

#endif // ITEMINPURCHASEHISTORY_H
