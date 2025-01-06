#ifndef TRANSOBJECTS_H
#define TRANSOBJECTS_H

#include "soap/soapH.h"
#include "objects.h"
#include "stringtrans.h"

class TransObjects
{
public:
    TransObjects();
    static Client * transClient(ns2__client * javaclient);
    static Order * transOrder(ns2__order* javaorder);
    static Product * transProduct(ns2__product* javaproduct);
    static ProductType * transProductType(ns2__productType* javaproductType);
    static Shop * transShop(ns2__shop * javashop);
    static Message * transMesssage(ns2__message* javamessage);

    static ns2__client * retransClient(Client *client);
    static ns2__order * retransOrder(Order *order);
    static ns2__product* retransProduct(Product * product);
    static ns2__productType* retransProductType(ProductType * productType);
    static ns2__shop* retransShop(Shop * shop);
    static ns2__message* retransMessage(Message* message);
};
#endif // TRANSOBJECTS_H
