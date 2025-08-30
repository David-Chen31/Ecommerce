package com.linexus.pojo;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

import javax.jws.WebService;
import java.util.Date;

/**
 * @author hhhhlkf
 * @date 2021-12-16 - 9:08
 */
//数据对象类（POJO）
//通常用作数据库表 cppdatabase.client 的对应数据模型。

@WebService
@AllArgsConstructor //全参数构造
@NoArgsConstructor  //无参构造
@Data  //所有的get、set函数
@ToString  //ToString函数
public class Shop {

    String shopName;
    int shopId;
    String shopPhone;
    String shopEmail;
    Date shopSignTime;
    String shopPwd;
    String shopImage;
}
