#include "TransObjects.h"

TransObjects::TransObjects() {}
Client *TransObjects::transClient(ns2__client * javaclient)
{
    Client* client = new Client();
    client->setClientId(javaclient->clientId);
    client->setClientName(StringTrans::string2QString(javaclient->clientName));
    client->setClientPwd(StringTrans::string2QString(javaclient->clientPwd));
    client->setClientPhone(StringTrans::string2QString(javaclient->clientPhone));
    client->setClientEmail(StringTrans::string2QString(javaclient->clientEmail));
    client->setClientSignTime(StringTrans::tTime2QDateTime(javaclient->clientSignTime));
    client->setClientPwd(StringTrans::string2QString(javaclient->clientPwd));
    client->setClientBought(javaclient->clientBought);
    client->setClientImage(StringTrans::string2QString(javaclient->clientImage));
    return client;
}

Order *TransObjects::transOrder(ns2__order *javaorder)
{
    Order*order = new Order();
    order->setOrderId(javaorder->orderId);
    order->setOrderCost(StringTrans::string2QString(javaorder->orderCost));
    order->setOrderHide(javaorder->orderHide);
    order->setOrderTime(StringTrans::tTime2QDateTime(javaorder->orderTime));
    order->setOrderCheck(javaorder->orderCheck);
    order->setOrderClient(StringTrans::string2QString(javaorder->orderClient));
    order->setOrderClientId(javaorder->orderClientId);
    order->setOrderProductId(javaorder->orderProductId);
    order->setOrderProductNum(javaorder->orderProductNum);
    order->setOrderProductName(StringTrans::string2QString(javaorder->orderProductName));
    order->setOrderProductStyle(StringTrans::string2QString(javaorder->orderProductStyle));
    order->setOrderShopId(javaorder->orderProductId);
    order->setOrderShip(javaorder->orderShip);
    order->setOrderRefund(javaorder->orderRefund);
    return order;
}

Product *TransObjects::transProduct(ns2__product *javaproduct)
{
    Product * product = new Product();
    product->setProductDiscount(javaproduct->productDiscount);
    product->setProductImage(StringTrans::string2QString(javaproduct->productImage));
    product->setProductBuyNum(javaproduct->productBuyNum);
    product->setProductNum(javaproduct->productNum);
    product->setProductPrice(javaproduct->productPrice);
    product->setProductName(StringTrans::string2QString(javaproduct->productName));
    product->setProductId(javaproduct->productId);
    product->setProductShopId(javaproduct->productShopId);
    product->setProductFlashSalePrice(javaproduct->productFlashSalePrice);
    product->setFlashSaleStartTime(StringTrans::tTime2QDateTime(javaproduct->flashSaleStartTime));
    product->setFlashSaleEndTime(StringTrans::tTime2QDateTime(javaproduct->flashSaleEndTime));
    product->setDiscountStartTime(StringTrans::tTime2QDateTime(javaproduct->discountStartTime));
    product->setDiscountEndTime(StringTrans::tTime2QDateTime(javaproduct->discountEndTime));
    product->setFlashSalePurchaseLimit(javaproduct->flashSalePurchaseLimit);
    return product;
}

ProductType* TransObjects::transProductType(ns2__productType *javaproductType)
{
    ProductType * productType = new ProductType();
    productType->setTypeName(StringTrans::string2QString(javaproductType->typeName));

    productType->setTypeId(javaproductType->typeId);

    productType->setTypeProduct(StringTrans::string2QString(javaproductType->typeProduct));

    productType->setTypeProductId(javaproductType->typeProductId);

    return productType;
}

Shop * TransObjects::transShop(ns2__shop * javashop)
{
    Shop* shop = new Shop();
    shop->setShopId(javashop->shopId);
    shop->setShopName(StringTrans::string2QString(javashop->shopName));
    shop->setShopPwd(StringTrans::string2QString(javashop->shopPwd));
    shop->setShopPhone(StringTrans::string2QString(javashop->shopPhone));
    shop->setShopEmail(StringTrans::string2QString(javashop->shopEmail));
    shop->setShopSignTime(StringTrans::tTime2QDateTime(javashop->shopSignTime));
    shop->setShopPwd(StringTrans::string2QString(javashop->shopPwd));
    shop->setShopImage(StringTrans::string2QString(javashop->shopImage));
    return shop;
}

Message *TransObjects::transMesssage(ns2__message *javamessage)
{
    Message* message = new Message();
    message->setMessageId(javamessage->msgId);
    message->setMessageContent(StringTrans::string2QString(javamessage->msgContent));
    message->setMessageClientId(javamessage->msgClientId);
    message->setMessageShopId(javamessage->msgShopId);
    message->setMessageTime(StringTrans::tTime2QDateTime(javamessage->msgTime));
    message->setReadStatus(javamessage->readStatus);
    message->setMessageClientName(StringTrans::string2QString(javamessage->msgClientName));
    message->setMessageShopName(StringTrans::string2QString(javamessage->msgShopName));
    message->setMessageFrom(javamessage->msgFrom);
    return message;
}









ns2__client *TransObjects::retransClient(Client *client)
{

    int bought =client->getClientBought();
    std::string *email = StringTrans::QString2string(client->getClientEmail());
    int id = client->getClientId();
    std::string *image = StringTrans::QString2string(client->getClientImage());
    std::string * name = StringTrans::QString2string(client->getClientName());
    std::string * phone  =StringTrans::QString2string(client->getClientPhone());
    //     if(!phone)qDebug()<<"weikong";

    std::string * pwd = StringTrans::QString2string(client->getClientPwd());
        //qDebug()<<client->getClientPhone()<<client->getClientPwd()<<client->getClientName();
    time_t *time = StringTrans::QDateTime2tTime(client->getClientSignTime());
    ns2__client * javaclient = new ns2__client(bought,email,id,image,name,phone,pwd,time);
    return javaclient;
}

ns2__order *TransObjects::retransOrder(Order *order)
{

    int check = order->getOrderCheck();
    std::string * client = StringTrans::QString2string(order->getOrderClient());
    int cid = order->getOrderClientId();
    std::string * cost = StringTrans::QString2string(order->getOrderCost());
    //    if(!cost)qDebug()<<"cost是空的";
    int hide = order->getOrderHide();
    int id = order->getOrderId();
    int pid = order->getOrderProductId();
    std::string * Pname = StringTrans::QString2string(order->getOrderProductName());
    int Pnum = order->getOrderProductNum();
    std::string * Pstyle = StringTrans::QString2string(order->getOrderProductStyle());
    //    if(!Pstyle)qDebug()<<"Pstyle是空的";
    time_t* time = StringTrans::QDateTime2tTime(order->getOrderTime());
    //    if(!time)qDebug()<<"time是空的";
    int shopId = order->getOrderShopId();
    int ship = order->getOrderShip();
    int refund = order->getOrderRefund();
    return new ns2__order(shopId, check,client,cid,cost,
                          hide,id,pid,Pname,Pnum,Pstyle,time, ship, refund);
}

ns2__product *TransObjects::retransProduct(Product *product)
{
    //    ns2__product(int buynum,int discount,int pId,std::string *pImage,std::string *pName,
    //int pNum,int pPrice)
    int buynum = product->getProductBuyNum();
    float discount = product->getProductDiscount();
    int pId = product->getProductId();
    int shopId = product->getProductShopId();
    std::string * pImage = StringTrans::QString2string(product->getProductImage());
    std::string * pName = StringTrans::QString2string(product->getProductName());
    int pNum = product->getProductNum();
    int pPrice = product->getProductPrice();
    int limit = product->getFlashSalePurchaseLimit();
    time_t* flashStart = StringTrans::QDateTime2tTime(product->getFlashSaleStartTime());
    time_t* flashEnd = StringTrans::QDateTime2tTime(product->getFlashSaleEndTime());
    time_t* discountStart = StringTrans::QDateTime2tTime(product->getDiscountStartTime());
    time_t* discountEnd = StringTrans::QDateTime2tTime(product->getDiscountEndTime());
    float flashPrice = product->getProductFlashSalePrice();
    return new ns2__product(discountEnd, discountStart, flashEnd, limit, flashStart,shopId, buynum, discount, flashPrice,pId, pImage,pName,pNum,pPrice);
}


ns2__productType *TransObjects::retransProductType(ProductType *productType)
{
    ns2__productType * javaProductType = new ns2__productType();
    javaProductType->typeId = productType->getTypeId();
    javaProductType->typeName = StringTrans::QString2string(productType->getTypeName());
    javaProductType->typeProduct =StringTrans::QString2string(productType->getTypeProduct());
    javaProductType->typeProductId = productType->getTypeProductId();
    return javaProductType;
}

ns2__shop* TransObjects::retransShop(Shop * shop)
{
    std::string *email = StringTrans::QString2string(shop->getShopEmail());
    int id = shop->getShopId();
    std::string *image = StringTrans::QString2string(shop->getShopImage());
    std::string * name = StringTrans::QString2string(shop->getShopName());
    std::string * phone  =StringTrans::QString2string(shop->getShopPhone());
    //     if(!phone)qDebug()<<"weikong";

    std::string * pwd = StringTrans::QString2string(shop->getShopPwd());
    time_t *time = StringTrans::QDateTime2tTime(shop->getShopSignTime());
    ns2__shop * javashop = new ns2__shop(email,id,image,name,phone,pwd,time);
    return javashop;
}

ns2__message *TransObjects::retransMessage(Message *message)
{
    std::string *content = StringTrans::QString2string(message->getMessageContent());
    int msgId = message->getMessageId();
    int shopId = message->getMessageShopId();
    int clientId = message->getMessageClientId();
    int readStatus = message->getReadStatus();
    int from = message->getMessageFrom();
    time_t *Time = StringTrans::QDateTime2tTime(message->getMessageTime());
    std::string* clientName = StringTrans::QString2string(message->getMessageClientName());
    std::string* shopName = StringTrans::QString2string(message->getMessageShopName());
    ns2__message * javamessage = new ns2__message(clientId, content, msgId, shopId, Time, readStatus, clientName, shopName, from);
    return javamessage;
}
