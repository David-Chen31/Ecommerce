#ifndef FINDGOODCOMMODITIES_H
#define FINDGOODCOMMODITIES_H

#include <QWidget>
#include "itemdisplay.h"
#include "function_zone.h"

namespace Ui {
class FindGoodCommodities;
}

class Root;
class ObjectsManager;

class FindGoodCommodities : public FunctionZone
{
    Q_OBJECT

public:
    explicit FindGoodCommodities(QWidget *parent = nullptr);
    ~FindGoodCommodities();
    void Refresh();
    void updateProductsLikeList();

private slots:
    void on_searchButton_clicked();

private:
    Ui::FindGoodCommodities *ui;
    QList<ItemDisplay*> Items;
    QList<std::shared_ptr<Product>> ProductsLikeList; // 用引用报错，待优化
};

#endif // FINDGOODCOMMODITIES_H
