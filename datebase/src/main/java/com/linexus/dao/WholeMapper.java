package com.linexus.dao;

import com.linexus.pojo.*;
import org.apache.ibatis.annotations.Param;

import javax.jws.WebMethod;
import javax.jws.WebService;
import java.util.List;

/**
 * @author hhhhlkf
 * @date 2021-12-19 - 0:06
 */
/*
* WholeMapper 作为一个整合服务实现类的方式，能够让你简化 Web 服务的配置。
* 通过一个 WholeMapper 整合所有服务实现类后，暴露 WholeMapper 就能一次性把所有接口暴露出去，
* 避免了单独为每个接口暴露配置的繁琐。如果你有多个接口，并且希望它们都通过一个统一的服务接口来暴露，
* 那么 WholeMapper 是一种方便的方式。
*
* */

@WebService
public interface WholeMapper {
    @WebMethod
    public List<Client> getClientList();
    @WebMethod
    public Client getClientByNameAndPwd(@Param("name") String name, @Param("pwd") String pwd);
    @WebMethod
    public void InsertClient(Client client);
    @WebMethod
    public void deleteClientByNameAndPwd(@Param("name") String name,@Param("pwd") String pwd);
    @WebMethod
    public void updateClient(Client client);
    @WebMethod
    List<Client> getClientLikeList(@Param("mess") String mess);

    //Order
    @WebMethod
    List<Order> getOrderList(Order order);

    @WebMethod
    List<Order> getOrderListByInfo(Order order);

    @WebMethod
    void addOrder(Order order);

    @WebMethod
    List<Order> getOrderLikeList(@Param("mess") String mess, Order order);

    @WebMethod
    List<Order> getOrderListHistory();
    @WebMethod
    void updateHistory(Order order);

    @WebMethod
    void deleteShoppingCart(Order order);

    //Product
    @WebMethod
    List<Product>  getProductList(@Param("choose") int choose, @Param("productShopId") int productShopId);
    @WebMethod
    List<Product>  getProductListByInfo(Product product);
    @WebMethod
    void addProduct(Product product);
    @WebMethod
    void deleteProductByInfo(Product product);
    @WebMethod
    void updateProductByInfo(Product product);
    @WebMethod
    List<Product> getProductLikeList(@Param("mess") String mess, @Param("product") Product product);

    Product selectProductForUpdate(int productId);

    @WebMethod
    String purchaseProduct(Order order);

    //ProductType
    @WebMethod
    List<ProductType> getProductTypeByProName(@Param("proName") String name);

    @WebMethod
    void addProductType(ProductType type);

    @WebMethod
    void deleteProductTypeByName(@Param("name") String name);


    //  每个方法通过 @WebMethod 注解暴露为Web服务的方法。
    @WebMethod
    public List<Shop> getShopList();

    @WebMethod
    public Shop getShopByNameAndPwd(@Param("name") String name, @Param("pwd") String pwd);

    @WebMethod
    public void InsertShop(Shop Shop);

    @WebMethod
    public void deleteShopByNameAndPwd(@Param("name") String name,@Param("pwd") String pwd);

    @WebMethod
    public void updateShop(Shop Shop);

    @WebMethod
    List<Shop> getShopLikeList(@Param("mess") String mess);



    //  每个方法通过 @WebMethod 注解暴露为Web服务的方法。
    @WebMethod
    public List<Message> getMessageFromClient(Shop shop);

    @WebMethod
    public List<Message> getReadMessageFromClient(Shop shop);

    @WebMethod
    public List<Message> getUnreadMessageFromClient(Shop shop);

    @WebMethod
    public List<Message> getMessageFromShop(Client client);

    @WebMethod
    public List<Message> getReadMessageFromShop(Client client);

    @WebMethod
    public List<Message> getUnreadMessageFromShop(Client client);

    @WebMethod
    public void InsertMessage(Message message);

    @WebMethod
    public void updateMessageFromClient(@Param("message") Message message, @Param("shopId") int shopId);

    @WebMethod
    public void updateMessageFromShop(@Param("message") Message message, @Param("clientId") int clientId);

    @WebMethod
    public void deleteMessageFromClient(@Param("message") Message message, @Param("shopId") int shopId);

    @WebMethod
    public void deleteMessageFromShop(@Param("message") Message message, @Param("clientId") int clientId);


}
