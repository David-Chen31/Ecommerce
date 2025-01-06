#ifndef OBJECTS_H
#define OBJECTS_H
#include <QString>
#include <QDateTime>
//pojo
class Client
{
private:
    QString clientName;
    int clientId;
    QString clientPhone;
    QString clientEmail;
    QDateTime clientSignTime;
    QString clientPwd;
    int clientBought;
    QString clientImage;

public:
    Client();
    Client(QString clientName, int clientId, QString clientPhone, QString clientEmail, QDateTime clientSignTime, QString clientPwd, int clientBought, QString clientImage);

    void setClientName(QString clientName);
    void setClientId(int clientId);
    void setClientPhone(QString clientPhone);
    void setClientEmail(QString clientEmail);
    void setClientSignTime(QDateTime clientSignTime);
    void setClientPwd(QString clientPwd);
    void setClientBought(int clientBought);
    void setClientImage(QString clientImage);


    QString getClientImage() const;
    int getClientBought() const;
    QString getClientPwd() const;
    QDateTime getClientSignTime() const;
    QString getClientEmail() const;
    QString getClientPhone() const;
    int getClientId() const;
    QString getClientName() const;
};



// class Client
// {
// private:
//     QString clientName;
//     int clientId;
//     QString clientPhone;
//     QString clientEmail;
//     QDateTime clientSignTime;
//     QString clientPwd;
//     int clientBought;
//     QString clientImage;

// public:
//     Client();
//     Client(QString clientName, int clientId, QString clientPhone, QString clientEmail, QDateTime clientSignTime, QString clientPwd, int clientBought, QString clientImage);

//     void setClientName(QString clientName);
//     void setClientId(int clientId);
//     void setClientPhone(QString clientPhone);
//     void setClientEmail(QString clientEmail);
//     void setClientSignTime(QDateTime clientSignTime);
//     void setClientPwd(QString clientPwd);
//     void setClientBought(int clientBought);
//     void setClientImage(QString clientImage);


//     QString getClientImage() const;
//     int getClientBought() const;
//     QString getClientPwd() const;
//     QDateTime getClientSignTime() const;
//     QString getClientEmail() const;
//     QString getClientPhone() const;
//     int getClientId() const;
//     QString getClientName() const;
// };

class Order
{
public:
    Order();
    Order(int orderId, QString orderProductName, int orderProductNum, QString orderProductStyle, int orderProductId, QString orderCost, QDateTime orderTime,
          QString orderClient, int orderClientId, int orderCheck, int orderHide,int orderShopId, int orderShip, int orderRefund);


    int getOrderHide() const;
    void setOrderHide(int value);

    int getOrderCheck() const;
    void setOrderCheck(int value);

    int getOrderClientId() const;
    void setOrderClientId(int value);

    QString getOrderClient() const;
    void setOrderClient(const QString &value);

    QDateTime getOrderTime() const;
    void setOrderTime(const QDateTime &value);

    QString getOrderCost() const;
    void setOrderCost(const QString &value);

    int getOrderProductId() const;
    void setOrderProductId(int value);

    QString getOrderProductStyle() const;
    void setOrderProductStyle(const QString &value);

    int getOrderProductNum() const;
    void setOrderProductNum(int value);

    QString getOrderProductName() const;
    void setOrderProductName(const QString &value);

    int getOrderId() const;
    void setOrderId(int value);

    int getOrderShopId() const;
    void setOrderShopId(int value);

    int getOrderShip() const;
    void setOrderShip(int value);

    int getOrderRefund() const;
    void setOrderRefund(int value);

private:
    int orderId;
    QString orderProductName;
    int orderProductNum;
    QString orderProductStyle;
    int orderProductId;
    QString orderCost;
    QDateTime orderTime;
    QString orderClient;
    int orderClientId;
    int orderCheck;
    int orderHide;
    int orderShopId;
    int orderShip;
    int orderRefund;
};


class Product
{
public:
    Product();
    Product(int productId, QString productName, int productPrice, int productNum, int productBuyNum, QString productImage, float productDiscount,
            float productFlashSalePrice, QDateTime discountStartTime, QDateTime discountEndTime, QDateTime flashSaleStartTime, QDateTime flashSaleEndTime,
            int flashSalePurchaseLimit);
    float getProductDiscount() const;
    void setProductDiscount(float value);

    QString getProductImage() const;
    void setProductImage(const QString &value);

    int getProductBuyNum() const;
    void setProductBuyNum(int value);

    int getProductNum() const;
    void setProductNum(int value);

    int getProductPrice() const;
    void setProductPrice(int value);

    QString getProductName() const;
    void setProductName(const QString &value);

    int getProductId() const;
    void setProductId(int value);

    float getProductFlashSalePrice() const;
    void setProductFlashSalePrice(float value);

    QDateTime getDiscountStartTime() const;
    void setDiscountStartTime(const QDateTime &value);

    QDateTime getDiscountEndTime() const;
    void setDiscountEndTime(const QDateTime &value);

    QDateTime getFlashSaleStartTime() const;
    void setFlashSaleStartTime(const QDateTime &value);

    QDateTime getFlashSaleEndTime() const;
    void setFlashSaleEndTime(const QDateTime &value);

    int getFlashSalePurchaseLimit() const;
    void setFlashSalePurchaseLimit(int value);

    int getProductShopId() const;
    void setProductShopId(int value);

private:
    int productId;
    QString productName;
    int productPrice;
    int productNum;
    int productBuyNum;
    QString productImage;
    float productDiscount;
    int productShopId;
    float productFlashSalePrice;
    QDateTime discountStartTime;
    QDateTime discountEndTime;
    QDateTime flashSaleStartTime;
    QDateTime flashSaleEndTime;
    int flashSalePurchaseLimit;
};


class ProductType
{
public:
    ProductType();
    ProductType(QString typeName, int typeId, QString typeProduct, int typeProductId);

    QString getTypeName() const;
    void setTypeName(const QString &value);

    int getTypeId() const;
    void setTypeId(int value);

    QString getTypeProduct() const;
    void setTypeProduct(const QString &value);

    int getTypeProductId() const;
    void setTypeProductId(int value);

private:
    QString typeName;
    int typeId;
    QString typeProduct;
    int typeProductId;
};


class Shop
{
private:
    QString shopName;
    int shopId;
    QString shopPhone;
    QString shopEmail;
    QDateTime shopSignTime;
    QString shopPwd;
    QString shopImage;

public:
    Shop();
    Shop(QString shopName, int shopId, QString shopPhone, QString shopEmail, QDateTime shopSignTime, QString shopPwd, QString shopImage);

    void setShopName(QString shopName);
    void setShopId(int shopId);
    void setShopPhone(QString shopPhone);
    void setShopEmail(QString shopEmail);
    void setShopSignTime(QDateTime shopSignTime);
    void setShopPwd(QString shopPwd);
    void setShopImage(QString shopImage);


    QString getShopImage() const;
    QString getShopPwd() const;
    QDateTime getShopSignTime() const;
    QString getShopEmail() const;
    QString getShopPhone() const;
    int getShopId() const;
    QString getShopName() const;
};


class Message
{
private:
    int messageId;
    int messageShopId;
    QString messageContent;
    QDateTime messageTime;
    int readStatus;
    int messageClientId;
    QString messageClientName;
    QString messageShopName;
    int messageFrom;

public:
    Message();
    Message(int messageId, int messageShopId, QString messageContent, QDateTime messageTime, int readStatus, int messageClientId,
            QString messageClientName, QString messageShopName, int messageFrom);

    void setMessageId(int messageId);
    void setMessageShopId(int messageShopId);
    void setMessageContent(QString messageContent);
    void setMessageTime(QDateTime messageTime);
    void setReadStatus(int readStatus);
    void setMessageClientId(int messageClientId);
    void setMessageShopName(QString value);
    void setMessageClientName(QString value);
    void setMessageFrom(int value);


    int getMessageId() const;
    int getMessageShopId() const;
    QDateTime getMessageTime() const;
    QString getMessageContent() const;
    int getReadStatus() const;
    int getMessageClientId() const;
    QString getMessageShopName() const;
    QString getMessageClientName() const;
    int getMessageFrom() const;
};


#endif // OBJECTS_H
