package com.linexus.dao;

import com.linexus.pojo.Order;
import com.linexus.pojo.Product;
import org.apache.ibatis.annotations.Mapper;
import org.apache.ibatis.annotations.Param;

import javax.jws.WebMethod;
import javax.jws.WebService;
import java.util.List;

/**
 * @author hhhhlkf
 * @date 2021-12-16 - 9:14
 */
//@Mapper
@WebService
public interface ProductMapper {
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
}
