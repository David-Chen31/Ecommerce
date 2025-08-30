package com.linexus.pojo;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;
import lombok.ToString;

import javax.jws.WebService;
import java.util.Date;

/**
 * @author hhhhlkf
 * @date
 */
//数据对象类（POJO）
//通常用作数据库表 cppdatabase.Message 的对应数据模型。

@WebService
@AllArgsConstructor //全参数构造
@NoArgsConstructor  //无参构造
@Data  //所有的get、set函数
@ToString  //ToString函数
public class Message {

    int msgId;
    int msgShopId;
    String msgContent;
    Date msgTime;
    int readStatus;
    int msgClientId;
    String msgClientName;
    String msgShopName;
    int msgFrom;
}
