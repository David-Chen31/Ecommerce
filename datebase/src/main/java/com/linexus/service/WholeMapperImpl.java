package com.linexus.service;

import com.linexus.dao.*;
import com.linexus.pojo.*;
import org.mybatis.spring.support.SqlSessionDaoSupport;

import javax.jws.WebMethod;
import javax.jws.WebService;
import java.util.List;

/**
 * @author hhhhlkf
 * @date 2021-12-19 - 0:12
 */
@WebService(serviceName = "WholeMapper")
public class WholeMapperImpl extends SqlSessionDaoSupport implements WholeMapper {
    @Override
    public List<Client> getClientList() {
        return getSqlSession().getMapper(ClientMapper.class).getClientList();
    }

    @Override
    public Client getClientByNameAndPwd(String name, String pwd) {
        return getSqlSession().getMapper(ClientMapper.class).getClientByNameAndPwd(name,pwd);
    }

    @Override
    public void InsertClient(Client client) {
        getSqlSession().getMapper(ClientMapper.class).InsertClient(client);
    }

    @Override
    public void deleteClientByNameAndPwd(String name, String pwd) {
        getSqlSession().getMapper(ClientMapper.class).deleteClientByNameAndPwd(name,pwd);
    }

    @Override
    public void updateClient(Client client) {
        getSqlSession().getMapper(ClientMapper.class).updateClient(client);
    }

    @Override
    public List<Client> getClientLikeList(String mess) {
        return getSqlSession().getMapper(ClientMapper.class).getClientLikeList(mess);
    }

    @Override
    public List<Order> getOrderList(Order order) {
        return getSqlSession().getMapper(OrderMapper.class).getOrderList(order);
    }

    @Override
    public List<Order> getOrderListByInfo(Order order) {
        return getSqlSession().getMapper(OrderMapper.class).getOrderListByInfo(order);
    }

    @Override
    public void addOrder(Order order) {
        getSqlSession().getMapper(OrderMapper.class).addOrder(order);
    }

    @Override
    public List<Order> getOrderLikeList(String mess, Order order) {
        return getSqlSession().getMapper(OrderMapper.class).getOrderLikeList(mess, order);
    }

    @Override
    public List<Order> getOrderListHistory() {
        return getSqlSession().getMapper(OrderMapper.class).getOrderListHistory();
    }

    @Override
    public void updateHistory(Order order) {
        getSqlSession().getMapper(OrderMapper.class).updateHistory(order);
    }

    @Override
    public void deleteShoppingCart(Order order) {
        getSqlSession().getMapper(OrderMapper.class).deleteShoppingCart(order);
    }

    @Override
    public List<Product> getProductList(int choose, int productShopId) {
        return getSqlSession().getMapper(ProductMapper.class).getProductList(choose, productShopId);
    }


    @Override
    public List<Product> getProductListByInfo(Product product) {
        return getSqlSession().getMapper(ProductMapper.class).getProductListByInfo(product);
    }
    @Override
    public void addProduct(Product product) {
        getSqlSession().getMapper(ProductMapper.class).addProduct(product);
    }

    @Override
    public void deleteProductByInfo(Product product) {
        getSqlSession().getMapper(ProductMapper.class).deleteProductByInfo(product);
    }

    @Override
    public void updateProductByInfo(Product product) {
        getSqlSession().getMapper(ProductMapper.class).updateProductByInfo(product);
    }

    @Override
    public List<Product> getProductLikeList(String mess, Product product) {
        return getSqlSession().getMapper(ProductMapper.class).getProductLikeList(mess, product);
    }

    @Override
    public Product selectProductForUpdate(int productId) {
        return getSqlSession().getMapper(ProductMapper.class).selectProductForUpdate(productId);
    }

    @Override
    public String purchaseProduct(Order order) {
        try {
            // 调用业务逻辑来执行购买操作
            Product product = selectProductForUpdate(order.getOrderProductId());

            if (product.getProductNum() < order.getOrderProductNum()) {
                return "库存不足";
            }

            // 扣减库存
            product.setProductNum(product.getProductNum() - order.getOrderProductNum());
            updateProductByInfo(product);

            // 创建订单
            addOrder(order);

            return "购买成功";
        } catch (Exception e) {
            return "购买失败";
        }
    }

    @Override
    public List<ProductType> getProductTypeByProName(String name) {
        return getSqlSession().getMapper(ProductTypeMapper.class).getProductTypeByProName(name);
    }

    @Override
    public void addProductType(ProductType type) {
        getSqlSession().getMapper(ProductTypeMapper.class).addProductType(type);
    }

    @Override
    public void deleteProductTypeByName(String name) {
        getSqlSession().getMapper(ProductTypeMapper.class).deleteProductTypeByName(name);
    }


    @Override
    public List<Shop> getShopList() {
        return getSqlSession().getMapper(ShopMapper.class).getShopList();
    }

    @Override
    public Shop getShopByNameAndPwd(String name, String pwd) {
        return getSqlSession().getMapper(ShopMapper.class).getShopByNameAndPwd(name,pwd);
    }

    @Override
    public void InsertShop(Shop Shop) {
        getSqlSession().getMapper(ShopMapper.class).InsertShop(Shop);
    }

    @Override
    public void deleteShopByNameAndPwd(String name, String pwd) {
        getSqlSession().getMapper(ShopMapper.class).deleteShopByNameAndPwd(name,pwd);
    }

    @Override
    public void updateShop(Shop Shop) {
        getSqlSession().getMapper(ShopMapper.class).updateShop(Shop);
    }

    @Override
    public List<Shop> getShopLikeList(String mess) {
        return getSqlSession().getMapper(ShopMapper.class).getShopLikeList(mess);
    }





    @Override
    public List<Message> getMessageFromClient(Shop shop) {
        return getSqlSession().getMapper(MessageMapper.class).getMessageFromClient(shop);
    }

    @Override
    public List<Message> getReadMessageFromClient(Shop shop) {
        return getSqlSession().getMapper(MessageMapper.class).getReadMessageFromClient(shop);
    }

    @Override
    public List<Message> getUnreadMessageFromClient(Shop shop) {
        return getSqlSession().getMapper(MessageMapper.class).getUnreadMessageFromClient(shop);
    }

    @Override
    public List<Message> getMessageFromShop(Client client) {
        return getSqlSession().getMapper(MessageMapper.class).getMessageFromShop(client);
    }

    @Override
    public List<Message> getReadMessageFromShop(Client client) {
        return getSqlSession().getMapper(MessageMapper.class).getReadMessageFromShop(client);
    }

    @Override
    public List<Message> getUnreadMessageFromShop(Client client) {
        return getSqlSession().getMapper(MessageMapper.class).getUnreadMessageFromShop(client);
    }



    @Override
    public void InsertMessage(Message message) {
        getSqlSession().getMapper(MessageMapper.class).InsertMessage(message);
    }

    @Override
    public void updateMessageFromClient(Message message, int shopId) {
        getSqlSession().getMapper(MessageMapper.class).updateMessageFromClient(message, shopId);
    }

    @Override
    public void updateMessageFromShop(Message message, int clientId) {
        getSqlSession().getMapper(MessageMapper.class).updateMessageFromShop(message, clientId);
    }

    @Override
    public void deleteMessageFromClient(Message message, int shopId) {
        getSqlSession().getMapper(MessageMapper.class).deleteMessageFromClient(message, shopId);
    }

    @Override
    public void deleteMessageFromShop(Message message, int clientId) {
        getSqlSession().getMapper(MessageMapper.class).deleteMessageFromShop(message, clientId);
    }
}
