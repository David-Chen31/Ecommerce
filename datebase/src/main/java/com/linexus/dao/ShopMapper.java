package com.linexus.dao;

import com.linexus.pojo.Shop;
import com.linexus.pojo.Shop;
import org.apache.ibatis.annotations.Param;

import javax.jws.WebMethod;
import javax.jws.WebService;
import java.util.List;
import java.util.Map;

/**
 * @author hhhhlkf
 * @date 2021-12-16 - 9:13
 */
//ShopMapper 接口定义了Web服务的“契约”，即客户端可以通过这些方法来与数据库进行交互。

//@WebService 注解使得这些方法可以通过Web服务进行调用，客户端可以通过Web服务远程调用这些方法。
@WebService
public interface ShopMapper {
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
}
