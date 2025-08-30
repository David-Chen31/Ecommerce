package com.linexus.pojo;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

import javax.jws.WebService;
import java.util.Date;


/**
 * @author hhhhlkf
 * @date 2021-12-16 - 9:09
 */
@WebService
@Data
@AllArgsConstructor
@NoArgsConstructor
public class Product {
    int productId;
    int productShopId;
    String productName;
    int productPrice;
    int productNum;
    int productBuyNum;
    String productImage;
    float productDiscount;
    float productFlashSalePrice;
    Date discountStartTime;
    Date discountEndTime;
    Date flashSaleStartTime;
    Date flashSaleEndTime;
    int flashSalePurchaseLimit;
}
