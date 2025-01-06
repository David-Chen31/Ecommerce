#ifndef ROOT_H
#define ROOT_H

#include <QWidget>
#include <QTreeWidget>
#include <QEvent>
#include <QCursor>
#include <QMouseEvent> // 必须包含此头文件
#include "soap/soapH.h"
#include "soap/soapWholeMapperSoapBindingProxy.h"
#include"ContentWidget/content_widget.h"
#include "objects.h"
#include "stringtrans.h"
#include "transobjects.h"
#include "../ContentWidget/Home/home.h"
#include "../ContentWidget/Communication/shop_communication.h"
#include "../ContentWidget/OrderManagement/order_management.h"
#include "../ContentWidget/ProductManagement/product_edit.h"
#include "../ContentWidget/ProductManagement/product_overview.h"
#include "../ContentWidget/ProductManagement/add_product.h"
#include "../ContentWidget/Promotion/product_selection.h"
#include "../ContentWidget/Promotion/discount_settings.h"
#include "../ContentWidget/Promotion/flash_sale_settings.h"

namespace Ui {
class Root;
}

class Root : public QWidget
{
    Q_OBJECT

public:
    explicit Root(QWidget *parent = nullptr, Shop* shop = nullptr);
    ~Root();

    void SetContentWidget(ContentWidget* content_widget);

    void SetProductEdit(ProductEdit* productEdit);
    static void SetProductEditNull();

    static Root* findRootWidget(QWidget* widget);

protected:
    //bool eventFilter(QObject* obj, QEvent* event) override; // 重写事件过滤器

private slots:
    void on_menuTree_itemClicked(QTreeWidgetItem *item, int column);

    void on_refreshButton_clicked();

    void on_logoutButton_clicked();

private:
    Ui::Root *ui;

    //ContentWidget窗口
    ContentWidget* content_widget;
    Home* home;

    ShopCommunication* shop_communication;

    OrderManagement* order_management;

    static ProductEdit* product_edit;
    ProductOverview* product_overview;
    AddProduct* add_product;

    ProductSelection* product_selection;
    DiscountSettings* discount_settings;
    FlashSaleSettings* flash_sale_settings;


};

class ObjectsManager
{

public:
    static void setShop(Shop* shop);
    static QString getShopName();
    static int getShopId();

    static QList<Product*>& GetProductList();
    static QList<Product*>& GetProductLikeList();
    static QList<Order*>& GetUnshippedOrderList();
    static QList<Order*>& GetShippedOrderList();
    static QList<Order*>& GetOrderList();

    static void LoadProductsList();
    static void LoadProductsLikeList(QString searchTerm);
    static QList<Product*> LoadProductsListByInfo(Product* product);

    static bool AddProduct(Product* product);
    static bool UpdateProduct(Product* product);

    //static void LoadOrderList();        //获取购物车内订单
    static void LoadShippedOrderList(); //获取已下单的历史订单
    static void LoadUnshippedOrderList();
    static void LoadRefundOrderList();
    static void LoadUnrefundOrderList();
    static QList<Order*> LoadOrderListByInfo(Order* order = nullptr);

    //Message
    static void LoadReadMessageFromClient();
    static void LoadUnreadMessageFromClient();

    static QList<Message*>& GetReadMessageFromClient();
    static QList<Message*>& GetUnreadMessageFromClient();

    static bool InsertMessage(Message* message);
    static bool updateMessageFromClient(Message* message);
    static bool deleteMessageFromClient(Message* message);

    static bool addOrder(Order* order);
    static void updateHistory(Order* order);

    static Shop* getShopByNameAndPwd(QString name, QString pwd);
    static void InsertShop(Shop *shop);

private:
    //object信息
    static QList<Product*>ProductList;
    static QList<ProductType*>ProductTypeList;
    static QList<Product*>ProductLikeList;

    static QList<Order*>OrderList;
    static QList<Order*>UnshippedOrderList;
    static QList<Order*>ShippedOrderList;

    static QList<Message*>MessageReadList;
    static QList<Message*>MessageUnreadList;

    static Shop* shop;
};

#endif // ROOT_H
