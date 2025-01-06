#include "root.h"
#include "ui_root.h"
#include "log_in.h"



Root::Root(QWidget *parent, Shop* shop)
    : QWidget(parent)
    , ui(new Ui::Root)
{
    ui->setupUi(this);

    ui->menuTree->setMouseTracking(true);

    // 为 QTreeWidget 安装事件过滤器
    ui->menuTree->installEventFilter(this);

    //Logo初始化

    //Shop初始化
    ObjectsManager::setShop(shop);

    //ContentWidget成员初始化
    home = new Home(ui->contentWidget);

    shop_communication = new ShopCommunication();
    shop_communication->Refresh();

    order_management = new OrderManagement();
    order_management->Refresh();

    product_edit = new ProductEdit();
    product_overview = new ProductOverview();
    product_overview->Refresh();

    add_product = new AddProduct();
    add_product->Refresh();

    discount_settings = new DiscountSettings();
    flash_sale_settings = new FlashSaleSettings();

    product_selection = new ProductSelection(nullptr,flash_sale_settings, discount_settings);
    product_selection->Refresh();

    content_widget = home;

}

Root::~Root()
{
    delete ui;
    delete home;
    delete shop_communication;
    delete order_management;
    delete product_overview;
    delete product_selection;
    delete product_edit;
    delete add_product;
    delete discount_settings;
    delete flash_sale_settings;

}

ProductEdit* Root::product_edit = nullptr;

// bool Root::eventFilter(QObject* obj, QEvent* event)
// {
//     if (obj == ui->menuTree) {
//         if (event->type() == QEvent::MouseMove) {
//             QMouseEvent* mouseEvent = static_cast<QMouseEvent*>(event);
//             QPoint mousePos = mouseEvent->pos();

//             // 检测鼠标位置
//             QTreeWidgetItem* item = ui->menuTree->itemAt(mousePos);
//             QRect widgetRect = ui->menuTree->rect();
//             if (!widgetRect.contains(mousePos)) {
//                 setCursor(Qt::ArrowCursor);
//                 return true;
//             }

//             if (item) {
//                 setCursor(Qt::PointingHandCursor);
//             } else {
//                 setCursor(Qt::ArrowCursor);
//             }
//             return true;
//         } else if (event->type() == QEvent::Leave) {
//             setCursor(Qt::ArrowCursor);
//             return true;
//         }
//     }
//     return QWidget::eventFilter(obj, event);
// }

void Root::SetContentWidget(ContentWidget *content_widget)
{
    if (product_edit != nullptr)
        product_edit->hide();
    if (content_widget == nullptr)
    {
        content_widget = this->content_widget;
        //qDebug("content_widget为nullptr的SetContentWidget调用");
    }
    this->content_widget->hide();
    content_widget->setParent(ui->contentWidget);
    content_widget->show();
    this->content_widget = content_widget;
}

void Root::SetProductEdit(ProductEdit* productEdit)
{
    if (productEdit == nullptr)
    {
        this->product_edit = productEdit;
        return;
    }
    this->content_widget->hide();
    productEdit->setParent(ui->contentWidget);
    productEdit->show();
    this->product_edit = productEdit;
}

void Root::SetProductEditNull()
{
    product_edit = nullptr;
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
QList<Product*> ObjectsManager::ProductList;
QList<ProductType*> ObjectsManager::ProductTypeList;
QList<Product*> ObjectsManager::ProductLikeList;
QList<Order*>ObjectsManager::ShippedOrderList;
QList<Order*>ObjectsManager::OrderList;
QList<Order*>ObjectsManager::UnshippedOrderList;
QList<Message*>ObjectsManager::MessageReadList;
QList<Message*>ObjectsManager::MessageUnreadList;
Shop* ObjectsManager::shop;


void ObjectsManager::setShop(Shop* shop)
{
    ObjectsManager::shop = shop;
}
QString ObjectsManager::getShopName()
{
    return shop->getShopName();
}
int ObjectsManager::getShopId()
{
    return shop->getShopId();
}

QList<Product*>& ObjectsManager::GetProductList()
{
    return ProductList;
}

QList<Product*>& ObjectsManager::GetProductLikeList()
{
    return ProductLikeList;
}

QList<Order*>& ObjectsManager::GetUnshippedOrderList()
{
    return UnshippedOrderList;
}

QList<Order*>& ObjectsManager::GetShippedOrderList()
{
    return ShippedOrderList;
}

QList<Order *> &ObjectsManager::GetOrderList()
{
    return OrderList;
}

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
    res.arg1 = ObjectsManager::shop->getShopId();
    int result = proxy.getProductList(&res, rep);
    //    qDebug()<<result;
    if(!result)
    {
        qDebug()<<"查询成功";
        std::vector<ns2__product*> productList = rep.return_;
        for(int i=0;i<(int)productList.size();i++)
        {
            Product* product = TransObjects::transProduct(productList[i]);
            ProductList.append(product);
        }
        //        qDebug()<<ProductList.size();
        // for(int i=0;i<ProductList.size();i++)
        // {
        //     qDebug()<<ProductList[i]->getProductId();
        // }
    }
    return;
}

void ObjectsManager::LoadProductsLikeList(QString searchTerm)
{
    ProductLikeList.clear();
    Product product;
    product.setProductShopId(ObjectsManager::shop->getShopId());
    struct soap select_soap;
    soap_init(&select_soap);
    soap_set_mode(&select_soap,SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&select_soap, "http://localhost:8090/WholeMapper");
    ns2__getProductLikeList res;
    ns2__getProductLikeListResponse rep;
    res.arg0 = (StringTrans::QString2string(searchTerm));
    res.arg1 = TransObjects::retransProduct(&product);
    qDebug()<< "LoadProductsLikeList參數調試" << res.arg1->productShopId;
    int result = proxy.getProductLikeList(&res, rep);
    //    qDebug()<<result;
    if(!result)
    {
        qDebug()<<"LoadProductsLikeList查询成功";
        std::vector<ns2__product*> productsLikeList = rep.return_;
        for(int i=0 ;i < (int)productsLikeList.size();i++ )
        {
            Product* product = TransObjects::transProduct(productsLikeList[i]);
            ProductLikeList.append(product);
            //qDebug()<<product->getProductId();
        }
    }
    return;
}

QList<Product*> ObjectsManager::LoadProductsListByInfo(Product* product)
{
    return QList<Product*>();
}

bool ObjectsManager::AddProduct(Product* product)
{
    struct soap add_soap;
    soap_init(&add_soap);
    soap_set_mode(&add_soap,SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&add_soap, "http://localhost:8090/WholeMapper");
    ns2__addProduct res;
    ns2__addProductResponse rep;
    res.arg0 = TransObjects::retransProduct(product);
    int result = proxy.addProduct(&res, rep);
    //    qDebug()<<result;
    if(!result)
    {
        qDebug()<<"AddProduct成功";
        return true;
    }
    return false;
}


bool ObjectsManager::UpdateProduct(Product* product)
{
    struct soap update_soap;
    soap_init(&update_soap);
    soap_set_mode(&update_soap,SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&update_soap, "http://localhost:8090/WholeMapper");
    ns2__updateProductByInfo res;
    ns2__updateProductByInfoResponse rep;
    res.arg0 = TransObjects::retransProduct(product);
    int result = proxy.updateProductByInfo(&res, rep);
    //    qDebug()<<result;
    if(!result)
    {
        qDebug()<<"UpdateProduct成功";
        return true;
    }
    return false;
}

//void LoadOrderList();        //获取购物车内订单
void ObjectsManager::LoadShippedOrderList() //获取已下单的历史订单
{
    ShippedOrderList.clear();
    QList<Order*>OrderList = LoadOrderListByInfo();
    for (Order* order : OrderList)
    {
        if (order->getOrderShip() == 1)
        {
            ShippedOrderList.append(order);
        }
    }
    return;
}

void ObjectsManager::LoadUnshippedOrderList()
{
    UnshippedOrderList.clear();
    QList<Order*>OrderList = LoadOrderListByInfo();
    for (Order* order : OrderList)
    {
        if (order->getOrderShip() == 0)
        {
            UnshippedOrderList.append(order);
        }
    }
}

void ObjectsManager::LoadRefundOrderList()
{
    // RefundOrderList.clear();
    // QList<Order*>OrderList = LoadOrderListByInfo();
    // for (Order* order : OrderList)
    // {
    //     if (order->getOrderRefund() == 1)
    //     {
    //         RefundOrderList.append(order);
    //     }
    // }
}

void ObjectsManager::LoadUnrefundOrderList()
{

}

QList<Order*> ObjectsManager::LoadOrderListByInfo(Order* order)
{
    Order ordertmp;
    ordertmp.setOrderShopId(shop->getShopId());
    ordertmp.setOrderProductName(NULL);
    ordertmp.setOrderHide(1);

    //调试
    qDebug() << "订单读取：……";
    qDebug() << shop->getShopId();

    struct soap select_soap;
    soap_init(&select_soap);
    soap_set_mode(&select_soap,SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&select_soap, "http://localhost:8090/WholeMapper");
    ns2__getOrderListByInfo res;
    ns2__getOrderListByInfoResponse rep;
    res.arg0  = TransObjects::retransOrder(&ordertmp);
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
        // qDebug() << OrderList.size();
        // for(int i=0;i<OrderList.size();i++)
        // {
        //     qDebug() << OrderList[i]->getOrderProductName();
        // }
    }
    return OrderList;
}

void ObjectsManager::LoadReadMessageFromClient()
{
    for (Message* message : MessageReadList)
        delete message;
    MessageReadList.clear();
    struct soap select_soap;
    soap_init(&select_soap);
    soap_set_mode(&select_soap, SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&select_soap, "http://localhost:8090/WholeMapper");
    ns2__getReadMessageFromClient res;
    ns2__getReadMessageFromClientResponse rep;
    res.arg0 = TransObjects::retransShop(shop);
    int result = proxy.getReadMessageFromClient(&res, rep);
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


void ObjectsManager::LoadUnreadMessageFromClient()
{
    for (Message* message : MessageUnreadList)
        delete message;
    MessageUnreadList.clear();
    struct soap select_soap;
    soap_init(&select_soap);
    soap_set_mode(&select_soap, SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&select_soap, "http://localhost:8090/WholeMapper");
    ns2__getUnreadMessageFromClient res;
    ns2__getUnreadMessageFromClientResponse rep;
    res.arg0 = TransObjects::retransShop(shop);
    int result = proxy.getUnreadMessageFromClient(&res, rep);
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

QList<Message *> &ObjectsManager::GetReadMessageFromClient()
{
    return MessageReadList;
}

QList<Message *> &ObjectsManager::GetUnreadMessageFromClient()
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

bool ObjectsManager::updateMessageFromClient(Message *message)
{
    struct soap update_soap;
    soap_init(&update_soap);
    soap_set_mode(&update_soap, SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&update_soap, "http://localhost:8090/WholeMapper");
    ns2__updateMessageFromClient res;
    ns2__updateMessageFromClientResponse rep;
    res.arg0 = TransObjects::retransMessage(message);
    int result = proxy.updateMessageFromClient(&res, rep);
    if (!result)
    {
        //qDebug("更新成功");
        return true;
    }
    return false;
}

bool ObjectsManager::deleteMessageFromClient(Message *message)
{
    struct soap delete_soap;
    soap_init(&delete_soap);
    soap_set_mode(&delete_soap, SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&delete_soap, "http://localhost:8090/WholeMapper");
    ns2__deleteMessageFromClient res;
    ns2__deleteMessageFromClientResponse rep;
    res.arg0 = TransObjects::retransMessage(message);
    int result = proxy.deleteMessageFromClient(&res, rep);
    if (!result)
    {
        //qDebug("删除成功");
        return true;
    }
    return false;
}

bool ObjectsManager::addOrder(Order* order)
{
    return true;
}

void ObjectsManager::updateHistory(Order* order)
{

}

Shop* ObjectsManager::getShopByNameAndPwd(QString name, QString pwd)
{
    struct soap select_soap;
    soap_init(&select_soap);
    soap_set_mode(&select_soap,SOAP_C_UTFSTRING);
    WholeMapperSoapBindingProxy proxy(&select_soap, "http://localhost:8090/WholeMapper");
    ns2__getShopByNameAndPwd res;
    ns2__getShopByNameAndPwdResponse rep;
    res.arg0 = StringTrans::QString2string(name);
    res.arg1 = StringTrans::QString2string(pwd);
    int result = proxy.getShopByNameAndPwd(&res, rep);
    if(!result&&rep.return_!=NULL)
    {
        //qDebug("查询店铺成功");
        ns2__shop* javashop = rep.return_;
        Shop* shop = TransObjects::transShop(javashop);
        return shop;
    }
    else
    {
        //qDebug("查询店铺失败");
        return nullptr;
    }
}

void ObjectsManager::InsertShop(Shop *shop)
{
    struct soap add_soap;
    soap_init(&add_soap);
    soap_set_mode(&add_soap,SOAP_C_UTFSTRING);

    ns2__InsertShop res;
    ns2__InsertShopResponse rep;
    WholeMapperSoapBindingProxy proxy(&add_soap, "http://localhost:8090/WholeMapper");
    res.arg0 = TransObjects::retransShop(shop);
    int result  = proxy.InsertShop(&res,rep);
    if(!result)
    {
        //qDebug()<<"插入店铺成功";
    }
}

void Root::on_menuTree_itemClicked(QTreeWidgetItem *item, int column)
{
    // 获取双击项的文本
    QString itemText = item->text(0);

    // 判断是否为子选项
    if (item->parent()) {
        // 子选项逻辑
        QString parentText = item->parent()->text(0); // 获取父级文本
        //qDebug() << "子选项被点击：" << itemText << "，父级：" << parentText;

        // 根据子选项的具体逻辑处理
        if (parentText == "商品管理" && itemText == "商品总览") {
            SetContentWidget(product_overview); // 跳转到商品总览
        } else if (parentText == "商品管理" && itemText == "增加商品") {
            SetContentWidget(add_product); // 跳转到商品编辑
        }

        if (parentText == "促销管理" && itemText == "商品选择") {
            SetContentWidget(product_selection); // 跳转到商品选择
        } else if (parentText == "促销管理" && itemText == "折扣设置") {
            SetContentWidget(discount_settings); // 跳转到折扣设置
        } else if (parentText == "促销管理" && itemText == "限时秒杀") {
            SetContentWidget(flash_sale_settings); // 跳转到限时秒杀
        }

    } else {
        // 父选项逻辑
        //qDebug() << "父选项被点击：" << itemText;

        if (itemText == "首页") {
            SetContentWidget(home); // 跳转到首页
        }

        // 判断是否是 "商品管理"
        if (itemText == "商品管理") {
            // 获取第一个子项
            QTreeWidgetItem* firstChild = item->child(0);
            if (firstChild) {
                QString firstChildText = firstChild->text(0); // 获取第一个子项文本
                //qDebug() << "双击商品管理，跳转到：" << firstChildText;

                // 调用跳转逻辑，例如 SetContentWidget
                if (firstChildText == "商品总览") {
                    SetContentWidget(product_overview); // 跳转到商品总览
                }
            }
        }

        if (itemText == "促销管理") {
            // 获取第一个子项
            QTreeWidgetItem* firstChild = item->child(0);
            if (firstChild) {
                QString firstChildText = firstChild->text(0); // 获取第一个子项文本
                //qDebug() << "双击促销管理，跳转到：" << firstChildText;

                // 调用跳转逻辑，例如 SetContentWidget
                if (firstChildText == "商品选择") {
                    SetContentWidget(product_selection); // 跳转到商品总览
                }
            }
        }

        if (itemText == "订单管理") {
            SetContentWidget(order_management); // 跳转到订单管理
        }


        if (itemText == "客户消息") {
            SetContentWidget(shop_communication); // 跳转到客戶消息
        }

        else
        {
            //qDebug("跳转失败");
        }
    }
}


void Root::on_refreshButton_clicked()
{
    content_widget->Refresh();
}


void Root::on_logoutButton_clicked()
{
    LogIn* log_in = new LogIn();
    log_in->show();
    log_in->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
}

