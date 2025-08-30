package com.linexus.dao;

import com.linexus.pojo.Client;
import com.linexus.pojo.Message;
import com.linexus.pojo.Shop;
import org.apache.ibatis.annotations.Param;

import javax.jws.WebMethod;
import javax.jws.WebService;
import java.util.List;
import java.util.Map;

/**
 * @author hhhhlkf
 * @date
 */
//ClientMapper 接口定义了Web服务的“契约”，即客户端可以通过这些方法来与数据库进行交互。

//@WebService 注解使得这些方法可以通过Web服务进行调用，客户端可以通过Web服务远程调用这些方法。
@WebService
public interface MessageMapper {
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
