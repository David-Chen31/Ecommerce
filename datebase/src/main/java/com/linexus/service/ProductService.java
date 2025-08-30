package com.linexus.service;

import com.linexus.pojo.Order;
import com.linexus.pojo.Product;

import javax.jws.WebMethod;
import javax.jws.WebService;

@WebService
public interface ProductService {

    @WebMethod
    String purchaseProduct(Order order);
}