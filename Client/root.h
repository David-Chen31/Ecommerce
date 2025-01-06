#ifndef ROOT_H
#define ROOT_H

#include <QWidget>
#include "soap/soapH.h"
#include "soap/soapWholeMapperSoapBindingProxy.h"
#include "findgoodcommodities.h"
#include "promotion.h"
#include "shoppingcart.h"
#include "purchasehistory.h"
#include "objects.h"
#include "function_zone.h"
#include "stringtrans.h"
#include "transobjects.h"
#include "commodity.h"
#include "Communication/communication.h"

namespace Ui {
class Root;
}

class Home;                 // 前向声明
class FindGoodCommodities;  // 前向声明
class Promotion;            // 前向声明
class ShoppingCart;
class PurchaseHistory;
class FunctionZone;
class ObjectsManager;

class Root : public QWidget
{
    Q_OBJECT

public:
    explicit Root(QWidget *parent = nullptr, Client* client = nullptr);
    ~Root();

    void SetFunctionZone(FunctionZone* function_zone);

    void SetCommodity(Commodity* commodity);

    void RefreshProducts();

    static Root* findRootWidget(QWidget* widget);


private slots:
    void on_homeButton_clicked();

    void on_SkipToPromotion_clicked();

    void on_SkipToFindGoodCommodities_clicked();

    void on_SkipToShoppingCart_clicked();

    void on_SkipToPurchaseHistory_clicked();

    void on_RefreshButton_clicked();

    void on_SkipToMessage_clicked();

private:
    Ui::Root *ui;

    //FunctionZone窗口
    Commodity* commodity;
    FunctionZone* function_zone;
    Home* home;
    FindGoodCommodities* findgoodcommodities;
    Promotion* promotion;
    ShoppingCart* shopping_cart;
    PurchaseHistory* purchase_history;
    Communication* communication;
};

class ObjectsManager
{

public:
    static void setClient(Client* client);
    static QString getClientName();
    static int getClientId();
    static QString getShopNameById(int ShopId);

    static QList<std::shared_ptr<Product>>& GetProductList();
    static QList<std::shared_ptr<Product>>& GetProductLikeList();
    static QList<Order*>& GetOrderListExisting();
    static QList<Order*>& GetOrderListHistory();

    static void LoadProductsList();
    static void LoadProductsLikeList(QString searchTerm);
    static QList<std::shared_ptr<Product>> LoadProductsListByInfo(std::shared_ptr<Product> product);
    static std::string PurchaseProduct(Order* order);

    //static void LoadOrderList();        //获取购物车内订单
    static void LoadOrderListHistory(); //获取已下单的历史订单
    static void LoadOrderListExisting();
    static QList<Order*> LoadOrderListByInfo(Order* order = nullptr);

    //Message
    static void LoadReadMessageFromShop();
    static void LoadUnreadMessageFromShop();

    static QList<Message*>& GetReadMessageFromShop();
    static QList<Message*>& GetUnreadMessageFromShop();

    static bool InsertMessage(Message* message);
    static bool updateMessageFromShop(Message* message);
    static bool deleteMessageFromShop(Message* message);


    static bool addOrder(Order* order);
    static void updateHistory(Order* order);

    static Client* getClientByNameAndPwd(QString name, QString pwd);
    static void InsertClient(Client *client);

private:
    //object信息
    static QList<std::shared_ptr<Product>>ProductList;
    static QList<ProductType*>ProductTypeList;
    static QList<std::shared_ptr<Product>>ProductLikeList;

    static QList<Order*>OrderListExisting;
    static QList<Order*>OrderListHistory;

    static QList<Message*>MessageReadList;
    static QList<Message*>MessageUnreadList;

    static Client* client;
};

#endif // ROOT_H
