package com.linexus.service;

import com.linexus.dao.ClientMapper;
import com.linexus.dao.MessageMapper;
import com.linexus.pojo.Client;
import com.linexus.pojo.Message;
import com.linexus.pojo.Shop;
import org.mybatis.spring.support.SqlSessionDaoSupport;

import javax.jws.WebService;
import java.util.List;

/**
 * @author hhhhlkf
 * @date
 */

//实现类专注于处理具体的业务逻辑,可以在不影响 DAO 层的情况下修改业务逻辑


@WebService(serviceName = "MessageMapper")
public class MessageMapperImpl extends SqlSessionDaoSupport implements MessageMapper {
    /*
     * Web 服务的 实现类 实际上只是对 Web 服务接口方法的具体实现。因此，在实现类中，方法默认已经与接口方法对应，
     * 不需要再次在实现类的方法上加 @WebMethod 注解。
     *
     * Web 服务框架（如 JAX-WS）会通过 反射机制 查找接口中的方法，然后将它们与实现类中的方法绑定。只要实现类继承或实现了 Web 服务接口，
     * 框架就知道这些方法应该暴露为 Web 服务操作。无需在实现类中再次标注 @WebMethod，从而减少冗余和复杂性。
     *
     * */
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
