package com.linexus.service;

import com.linexus.dao.ShopMapper;
import com.linexus.pojo.Shop;
import org.mybatis.spring.support.SqlSessionDaoSupport;

import javax.jws.WebService;
import java.util.List;

/**
 * @author hhhhlkf
 * @date 2021-12-16 - 10:28
 */

//实现类专注于处理具体的业务逻辑,可以在不影响 DAO 层的情况下修改业务逻辑


@WebService(serviceName = "ShopMapper")
public class ShopMapperImpl extends SqlSessionDaoSupport implements ShopMapper {
    /*
     * Web 服务的 实现类 实际上只是对 Web 服务接口方法的具体实现。因此，在实现类中，方法默认已经与接口方法对应，
     * 不需要再次在实现类的方法上加 @WebMethod 注解。
     *
     * Web 服务框架（如 JAX-WS）会通过 反射机制 查找接口中的方法，然后将它们与实现类中的方法绑定。只要实现类继承或实现了 Web 服务接口，
     * 框架就知道这些方法应该暴露为 Web 服务操作。无需在实现类中再次标注 @WebMethod，从而减少冗余和复杂性。
     *
     * */
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
}
