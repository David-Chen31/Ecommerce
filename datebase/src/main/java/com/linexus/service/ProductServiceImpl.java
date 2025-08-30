package com.linexus.service;

import com.linexus.dao.OrderMapper;
import com.linexus.dao.ProductMapper;
import com.linexus.dao.WholeMapper;
import com.linexus.pojo.Order;
import com.linexus.pojo.Product;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import javax.jws.WebMethod;
import javax.jws.WebService;

@Service  // 确保这个类被 Spring 托管为 Bean
@WebService(endpointInterface = "com.linexus.service.ProductService", serviceName = "ProductService") // 标注为 Spring 的 Service 类
public class ProductServiceImpl implements ProductService {

    private final ProductMapper productMapper;
    private final OrderMapper orderMapper;

    // Public 无参构造函数，这个构造函数符合 JAX-WS 的要求
    public ProductServiceImpl() {
        // 可以选择通过其他方式初始化依赖，例如通过构造器注入，或者 Spring 自动注入
        this.productMapper = null;
        this.orderMapper = null;
    }

    // 使用构造函数注入
    @Autowired
    public ProductServiceImpl(ProductMapper productMapper, OrderMapper orderMapper) {
        this.productMapper = productMapper;
        this.orderMapper = orderMapper;
    }

    @Override
    @WebMethod
    public String purchaseProduct(Order order) {
        try {
            // 调用业务逻辑来执行购买操作
            Product product = productMapper.selectProductForUpdate(order.getOrderProductId());

            if (product.getProductNum() < order.getOrderProductNum()) {
                return "库存不足";
            }

            // 扣减库存
            product.setProductNum(product.getProductNum() - order.getOrderProductNum());
            productMapper.updateProductByInfo(product);

            // 创建订单
            orderMapper.addOrder(order);

            return "购买成功";
        } catch (Exception e) {
            return "购买失败";
        }
    }
}
