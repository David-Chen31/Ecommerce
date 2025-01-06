#include "root.h"
#include "ui_root.h"
#include "home.h"

Root::Root(QWidget *parent, Client* client)
    : QWidget(parent)
    , ui(new Ui::Root)
{
    ui->setupUi(this);

    //Logo初始化
    QWidget* LogoWidget = ui->LogoWidget;
    Logo* logo = new Logo(LogoWidget);
    QHBoxLayout *layout = new QHBoxLayout(this);
    LogoWidget->setLayout(layout);
    LogoWidget->layout()->addWidget(logo);
    //ui->LogoWidget->setPixmap(QPixmap(":/image/logo.jpg"));


    //Client初始化
    ObjectsManager::setClient(client);

    //FunctionZone成员初始化
    home = new Home(ui->FunctionZone);
    home->Refresh();

    findgoodcommodities = new FindGoodCommodities(ui->FunctionZone);
    findgoodcommodities->hide();
    findgoodcommodities->Refresh();

    promotion = new Promotion(ui->FunctionZone);
    promotion->hide();
    promotion->Refresh();

    shopping_cart = new ShoppingCart(ui->FunctionZone);
    shopping_cart->hide();
    shopping_cart->Refresh();

    purchase_history = new PurchaseHistory(ui->FunctionZone);
    purchase_history->hide();
    purchase_history->Refresh();

    communication = new Communication(ui->FunctionZone);
    communication->hide();
    communication->Refresh();

    function_zone = home;
    commodity = nullptr;


}

Root::~Root()
{
    delete ui;
    delete home;
    delete findgoodcommodities;
    delete promotion;
    delete shopping_cart;
    delete purchase_history;
    delete communication;
}

void Root::SetFunctionZone(FunctionZone* function_zone)
{
    if (commodity != nullptr)
        commodity->hide();
    if (function_zone == nullptr)
        function_zone = this->function_zone;
    this->function_zone->hide();
    function_zone->setParent(ui->FunctionZone);
    function_zone->show();
    this->function_zone = function_zone;
}

void Root::SetCommodity(Commodity* commodity)
{
    this->function_zone->hide();
    commodity->setParent(ui->FunctionZone);
    commodity->show();
    this->commodity = commodity;
}

void Root::on_homeButton_clicked()
{
    SetFunctionZone(home);
}


void Root::on_SkipToPromotion_clicked()
{
    SetFunctionZone(promotion);
}


void Root::on_SkipToFindGoodCommodities_clicked()
{
    SetFunctionZone(findgoodcommodities);
}


void Root::on_SkipToShoppingCart_clicked()
{
    SetFunctionZone(shopping_cart);
}


void Root::on_SkipToPurchaseHistory_clicked()
{
    SetFunctionZone(purchase_history);
}

void Root::on_SkipToMessage_clicked()
{
    SetFunctionZone(communication);
}


void Root::on_RefreshButton_clicked()
{
    function_zone->Refresh();
}




Root* Root::findRootWidget(QWidget* widget)
{
    if (!widget)  // 确保 widget 不为空
        return nullptr;

    // 尝试将当前父窗口转换为 Root 类型
    Root* rootWindow = qobject_cast<Root*>(widget);
    if (rootWindow) {
        return rootWindow;  // 找到 Root 类型的父窗口，返回它
    }

    // 向上递归查找父窗口
    return findRootWidget(widget->parentWidget());
}

// 定义静态成员变量
QList<std::shared_ptr<Product>> ObjectsManager::ProductList;
QList<ProductType*> ObjectsManager::ProductTypeList;
QList<std::shared_ptr<Product>> ObjectsManager::ProductLikeList;
QList<Order*>ObjectsManager::OrderListExisting;
QList<Order*>ObjectsManager::OrderListHistory;
QList<Message*>ObjectsManager::MessageReadList;
QList<Message*>ObjectsManager::MessageUnreadList;
Client* ObjectsManager::client;

void ObjectsManager::LoadProductsList()
{
    ProductList.clear();
    int choose = 0;
    struct soap select_soap;
    soap_init(&select_soap);
    soap_set_mode(&select_soap,SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&select_soap, "http://localhost:8090/WholeMapper");
    ns2__getProductList res;
    ns2__getProductListResponse rep;
    res.arg0 = choose;
    res.arg1 = 0;
    int result = proxy.getProductList(&res, rep);
    //    qDebug()<<result;
    if(!result)
    {
        //qDebug()<<"查询成功";
        std::vector<ns2__product*> productList = rep.return_;
        for(int i=0;i<(int)productList.size();i++)
        {
            std::shared_ptr<Product> product = std::shared_ptr<Product>(TransObjects::transProduct(productList[i]));
            ProductList.append(product);
        }
        //        qDebug()<<ProductList.size();
        for(int i=0;i<ProductList.size();i++)
        {
            // qDebug()<<ProductList[i]->getProductId();
        }
    }
    return;
}

void ObjectsManager::LoadProductsLikeList(QString searchTerm)
{
    ProductLikeList.clear();
    Product product;
    product.setProductShopId(1);
    struct soap select_soap;
    soap_init(&select_soap);
    soap_set_mode(&select_soap,SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&select_soap, "http://localhost:8090/WholeMapper");
    ns2__getProductLikeList res;
    ns2__getProductLikeListResponse rep;
    res.arg0 = (StringTrans::QString2string(searchTerm));
    res.arg1 = TransObjects::retransProduct(&product);
    //qDebug()<< "LoadProductsLikeList參數調試" << res.arg1->productShopId;
    int result = proxy.getProductLikeList(&res, rep);
    //    qDebug()<<result;
    if(!result)
    {
        qDebug()<<"LoadProductsLikeList查询成功";
        std::vector<ns2__product*> productsLikeList = rep.return_;
        for(int i=0 ;i < (int)productsLikeList.size();i++ )
        {
            std::shared_ptr<Product> product = std::shared_ptr<Product>(TransObjects::transProduct(productsLikeList[i]));
            ProductLikeList.append(product);
                        qDebug()<<product->getProductId();
        }
    }
    return;
}

QList<std::shared_ptr<Product>> ObjectsManager::LoadProductsListByInfo(std::shared_ptr<Product> product)
{
    QList<std::shared_ptr<Product>> ProductList;
    struct soap select_soap;
    soap_init(&select_soap);
    soap_set_mode(&select_soap,SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&select_soap, "http://localhost:8090/WholeMapper");
    ns2__getProductListByInfo res;
    ns2__getProductListByInfoResponse rep;
    res.arg0  = TransObjects::retransProduct(product.get());
    int result = proxy.getProductListByInfo(&res,rep);
    //    qDebug()<<result;
    if(!result)
    {
        std::vector<ns2__product*> productList = rep.return_;
        //        qDebug()<<productList.size();
        for(int i=0;i<(int)productList.size();i++)
        {
            std::shared_ptr<Product> product = std::shared_ptr<Product>(TransObjects::transProduct(productList[i]));
            ProductList.append(product);
        }
        //qDebug() << ProductList.size();
        for(int i=0;i<ProductList.size();i++)
        {
            //            qDebug() << ProductList[i]->getProductName();
        }
    }
    return ProductList;
}

std::string ObjectsManager::PurchaseProduct(Order *order)
{
    struct soap purchase_soap;
    soap_init(&purchase_soap);
    soap_set_mode(&purchase_soap,SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&purchase_soap, "http://localhost:8090/WholeMapper");
    ns2__purchaseProduct res;
    ns2__purchaseProductResponse rep;
    res.arg0  = TransObjects::retransOrder(order);
    int result = proxy.purchaseProduct(&res,rep);
    if(!result)
    {
        return *rep.return_;
    }
    return "";
}

void ObjectsManager::LoadOrderListHistory()
{
    for (Order* order:OrderListHistory)
    {
        delete order;
    }

    OrderListHistory.clear();

    Order ordertmp;
    ordertmp.setOrderClientId(client->getClientId());
    ordertmp.setOrderProductName(NULL);
    ordertmp.setOrderHide(1);
    ordertmp.setOrderCheck(-1);

    QList<Order*>OrderList = LoadOrderListByInfo(&ordertmp);
    for (Order* order : OrderList)
    {
        if (order->getOrderCheck() == -1 && order->getOrderHide() != -1)
        {
            OrderListHistory.append(order);
        }
    }
    return;
}

void ObjectsManager::LoadOrderListExisting()
{
    for (Order* order:OrderListExisting)
    {
        delete order;
    }
    OrderListExisting.clear();
    Order ordertmp;
    ordertmp.setOrderClientId(client->getClientId());
    ordertmp.setOrderProductName(NULL);
    ordertmp.setOrderHide(1);
    ordertmp.setOrderCheck(1);
    QList<Order*>OrderList = LoadOrderListByInfo(&ordertmp);
    for (Order* order : OrderList)
    {
        if (order->getOrderCheck() == 1 && order->getOrderHide() != -1)
        {
            OrderListExisting.append(order);
        }
    }
    return;
}

QList<Order*> ObjectsManager::LoadOrderListByInfo(Order* order)
{
    //调试
    // qDebug() << "订单读取：……";
    // qDebug() << client->getClientId();

    QList<Order*> OrderList;
    struct soap select_soap;
    soap_init(&select_soap);
    soap_set_mode(&select_soap,SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&select_soap, "http://localhost:8090/WholeMapper");
    ns2__getOrderListByInfo res;
    ns2__getOrderListByInfoResponse rep;
    res.arg0  = TransObjects::retransOrder(order);
    int result = proxy.getOrderListByInfo(&res,rep);
    //    qDebug()<<result;
    if(!result)
    {
        std::vector<ns2__order*> orderList = rep.return_;
        //        qDebug()<<orderList.size();
        for(int i=0;i<(int)orderList.size();i++)
        {
            Order* order = TransObjects::transOrder(orderList[i]);
            OrderList.append(order);
        }

        //qDebug() << OrderList.size();
        // for(int i=0;i<OrderList.size();i++)
        // {
        //     qDebug() << OrderList[i]->getOrderProductName();
        // }
    }
    return OrderList;
}

void ObjectsManager::LoadReadMessageFromShop()
{
    for (Message* message : MessageReadList)
        delete message;
    MessageReadList.clear();
    struct soap select_soap;
    soap_init(&select_soap);
    soap_set_mode(&select_soap, SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&select_soap, "http://localhost:8090/WholeMapper");
    ns2__getReadMessageFromShop res;
    ns2__getReadMessageFromShopResponse rep;
    res.arg0 = TransObjects::retransClient(client);
    int result = proxy.getReadMessageFromShop(&res, rep);
    if (!result)
    {
        std::vector<ns2__message*> messageList = rep.return_;
        for(int i=0;i<(int)messageList.size();i++)
        {
            Message* message = TransObjects::transMesssage(messageList[i]);
            MessageReadList.append(message);
        }
    }
}

void ObjectsManager::LoadUnreadMessageFromShop()
{
    for (Message* message : MessageUnreadList)
        delete message;
    MessageUnreadList.clear();
    struct soap select_soap;
    soap_init(&select_soap);
    soap_set_mode(&select_soap, SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&select_soap, "http://localhost:8090/WholeMapper");
    ns2__getUnreadMessageFromShop res;
    ns2__getUnreadMessageFromShopResponse rep;
    res.arg0 = TransObjects::retransClient(client);
    int result = proxy.getUnreadMessageFromShop(&res, rep);
    if (!result)
    {
        std::vector<ns2__message*> messageList = rep.return_;
        for(int i=0;i<(int)messageList.size();i++)
        {
            Message* message = TransObjects::transMesssage(messageList[i]);
            MessageUnreadList.append(message);
        }
    }
}

QList<Message *> &ObjectsManager::GetReadMessageFromShop()
{
    return MessageReadList;
}

QList<Message *> &ObjectsManager::GetUnreadMessageFromShop()
{
    return MessageUnreadList;
}

bool ObjectsManager::InsertMessage(Message *message)
{
    struct soap insert_soap;
    soap_init(&insert_soap);
    soap_set_mode(&insert_soap, SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&insert_soap, "http://localhost:8090/WholeMapper");
    ns2__InsertMessage res;
    ns2__InsertMessageResponse rep;
    res.arg0 = TransObjects::retransMessage(message);
    int result = proxy.InsertMessage(&res, rep);
    if (!result)
    {
        //qDebug("发送成功");
        return true;
    }
    return false;
}

bool ObjectsManager::updateMessageFromShop(Message *message)
{
    struct soap update_soap;
    soap_init(&update_soap);
    soap_set_mode(&update_soap, SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&update_soap, "http://localhost:8090/WholeMapper");
    ns2__updateMessageFromShop res;
    ns2__updateMessageFromShopResponse rep;
    res.arg0 = TransObjects::retransMessage(message);
    int result = proxy.updateMessageFromShop(&res, rep);
    if (!result)
    {
        //qDebug("更新成功");
        return true;
    }
    return false;
}

bool ObjectsManager::deleteMessageFromShop(Message *message)
{
    struct soap delete_soap;
    soap_init(&delete_soap);
    soap_set_mode(&delete_soap, SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&delete_soap, "http://localhost:8090/WholeMapper");
    ns2__deleteMessageFromShop res;
    ns2__deleteMessageFromShopResponse rep;
    res.arg0 = TransObjects::retransMessage(message);
    int result = proxy.deleteMessageFromShop(&res, rep);
    if (!result)
    {
        //qDebug("删除成功");
        return true;
    }
    return false;
}

QList<std::shared_ptr<Product>>& ObjectsManager::GetProductList()
{
    return ProductList;
}

QList<std::shared_ptr<Product>>& ObjectsManager::GetProductLikeList()
{
    return ProductLikeList;
}


QList<Order*>& ObjectsManager::GetOrderListExisting()
{
    return OrderListExisting;
}

QList<Order*>& ObjectsManager::GetOrderListHistory()
{
    return OrderListHistory;
}

void ObjectsManager::setClient(Client* client)
{
    ObjectsManager::client = client;
}

QString ObjectsManager::getClientName()
{
    return client->getClientName();
}

int ObjectsManager::getClientId()
{
    return client->getClientId();
}

QString ObjectsManager::getShopNameById(int ShopId)
{
    struct soap select_soap;
    soap_init(&select_soap);
    soap_set_mode(&select_soap,SOAP_C_UTFSTRING);

    ns2__getShopList res;
    ns2__getShopListResponse rep;
    WholeMapperSoapBindingProxy proxy(&select_soap, "http://localhost:8090/WholeMapper");
    int result  = proxy.getShopList(&res,rep);
    if(!result)
    {
        //qDebug()<<"查找成功";
        std::vector<ns2__shop *> shopList = rep.return_;
        for (int i = 0; i < shopList.size(); i++)
        {
            if (shopList[i]->shopId == ShopId)
                return QString::fromStdString(*shopList[i]->shopName);
        }
    }
}


bool ObjectsManager::addOrder(Order* order)
{
    struct soap add_soap;
    soap_init(&add_soap);
    soap_set_mode(&add_soap,SOAP_C_UTFSTRING);

    ns2__addOrder res;
    ns2__addOrderResponse rep;
    WholeMapperSoapBindingProxy proxy(&add_soap, "http://localhost:8090/WholeMapper");
    res.arg0 = TransObjects::retransOrder(order);
    int result  = proxy.addOrder(&res,rep);
    if(!result)
    {
                qDebug()<<"插入成功";
        return true;
    }

    return false;
}

void ObjectsManager::updateHistory(Order* order)
{
    struct soap update_soap;
    soap_init(&update_soap);
    soap_set_mode(&update_soap,SOAP_C_UTFSTRING);
    ns2__updateHistory res;
    ns2__updateHistoryResponse rep;
    ns2__order * javaorder = TransObjects::retransOrder(order);
    WholeMapperSoapBindingProxy proxy(&update_soap, "http://localhost:8090/WholeMapper");
    res.arg0 = javaorder;
    int  result = proxy.updateHistory(&res,rep);
    //    qDebug()<<result;
    if(!result){
        //qDebug()<<"更新成功";
    }
}


Client *ObjectsManager::getClientByNameAndPwd(QString name, QString pwd)
{
    struct soap select_soap;
    soap_init(&select_soap);
    soap_set_mode(&select_soap,SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&select_soap, "http://localhost:8090/WholeMapper");
    ns2__getClientByNameAndPwd res;
    ns2__getClientByNameAndPwdResponse rep;
    res.arg0 = StringTrans::QString2string(name);
    res.arg1 = StringTrans::QString2string(pwd);
    int result = proxy.getClientByNameAndPwd(&res, rep);
    if(!result&&rep.return_!=NULL)
    {
        //qDebug("查询客户成功");
        ns2__client* javaclient = rep.return_;
        Client* client = TransObjects::transClient(javaclient);
        return client;
    }
    else
    {
        //qDebug("查询客户失败");
        return nullptr;
    }
}


void ObjectsManager::InsertClient(Client *client)
{
    struct soap add_soap;
    soap_init(&add_soap);
    soap_set_mode(&add_soap,SOAP_C_UTFSTRING);

    ns2__InsertClient res;
    ns2__InsertClientResponse rep;
    WholeMapperSoapBindingProxy proxy(&add_soap, "http://localhost:8090/WholeMapper");
    res.arg0 = TransObjects::retransClient(client);
    int result  = proxy.InsertClient(&res,rep);
    if(!result)
    {
        //qDebug()<<"插入客户成功";
    }
}


