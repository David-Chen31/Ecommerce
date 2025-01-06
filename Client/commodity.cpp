#include "commodity.h"
#include "ui_commodity.h"
#include "objects.h"
#include "root.h"
#include "notification/create_notification.h"
#include "Communication/contact.h"

Commodity::Commodity(QWidget *parent, std::shared_ptr<Product> product)
    : FunctionZone(parent)
    , ui(new Ui::Commodity)
    , product(product)
{
    ui->setupUi(this);

    if (product != nullptr) {
        ui->ShopName->setText("店铺名称："+ObjectsManager::getShopNameById(product->getProductShopId()));

        // 获取 QLabel 的大小
        QSize labelSize = ui->productImage->size();

        // 获取原始图片并调整大小
        QPixmap pixmap = product->getProductImage();
        pixmap = pixmap.scaled(labelSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);

        // 设置调整后的图片到 QLabel
        ui->productImage->setPixmap(pixmap);

        // 设置其他商品信息
        QDateTime currentTime = QDateTime::currentDateTime();
        ui->productName->setText("商品名称     " + product->getProductName());
        if (product->getProductFlashSalePrice() != 0 && product->getFlashSalePurchaseLimit() != 0 &&
                 currentTime < product->getFlashSaleEndTime() && currentTime > product->getFlashSaleStartTime())
            ui->productPrice->setText("限时秒杀价格    " + QString::number(product->getProductFlashSalePrice()) + "               限购  " +
                                      QString::number(product->getFlashSalePurchaseLimit()));
        else if (product->getProductDiscount() != 1 && currentTime < product->getDiscountEndTime() && currentTime > product->getDiscountStartTime())
            ui->productPrice->setText("限时折扣价格    " + QString::number(product->getProductPrice()*product->getProductDiscount()) + "              折扣  " +
                                      QString::number(product->getProductDiscount()*100) + "%");
        else ui->productPrice->setText("价格    " + QString::number(product->getProductPrice()));
        ui->guarantee->setText("保障   " + QString("退货险"));
        ui->delivery->setText("配送    " + QString("五日内必送达"));
    }
}


Commodity::~Commodity()
{
    delete ui;
}

void Commodity::Refresh()
{
    //qDebug("commodity refresh");
}


void Commodity::on_Return_clicked()
{
    Root* rootWindow = Root::findRootWidget(this);
    this->hide();
    rootWindow->SetFunctionZone(nullptr);
}


void Commodity::on_purchase_clicked()
{
    Root* rootWindow = Root::findRootWidget(this);
    int buynum = ui->productQuantity->text().toInt();
    int price = product->getProductPrice();
    Order order;
    QDateTime currentTime = QDateTime::currentDateTime();
    if (product->getProductFlashSalePrice() != 0 && product->getFlashSalePurchaseLimit() != 0 &&
        currentTime < product->getFlashSaleEndTime() && currentTime > product->getFlashSaleStartTime())
        if (buynum > product->getFlashSalePurchaseLimit())
        {
            auto *notification = new CreateNotification("购买数量超过限制", rootWindow);
            notification->showNotification();
            return;
        }
        else
        {
            price = product->getProductFlashSalePrice();
            order = Order(0,product->getProductName(), ui->productQuantity->value(),ui->styleComboBox->currentText(),
                        product->getProductId(),QString::number(buynum * price,'f',2),QDateTime::currentDateTime(),ObjectsManager::getClientName(),
                        ObjectsManager::getClientId(),-1,1, product->getProductShopId(), 0,0);
        }
    else if (product->getProductDiscount() != 1 && currentTime < product->getDiscountEndTime() && currentTime > product->getDiscountStartTime())
    {
        price = price*product->getProductDiscount();
        order = Order(0,product->getProductName(), ui->productQuantity->value(),ui->styleComboBox->currentText(),
                    product->getProductId(),QString::number(buynum * price,'f',2),QDateTime::currentDateTime(),ObjectsManager::getClientName(),
                    ObjectsManager::getClientId(),-1,1, product->getProductShopId(), 0,0);
    }
    //qDebug() << "buynum:" << buynum << "  price:" <<price;
    else
        order = Order(0,product->getProductName(), ui->productQuantity->value(),ui->styleComboBox->currentText(),
                product->getProductId(),QString::number(buynum * price,'f',2),QDateTime::currentDateTime(),ObjectsManager::getClientName(),
                ObjectsManager::getClientId(),-1,1, product->getProductShopId(), 0,0);

    //qDebug()<< "买下花" <<QString::number(buynum * price,'f',2);

    QString ans = QString::fromStdString(ObjectsManager::PurchaseProduct(&order));
    auto *notification = new CreateNotification(ans, rootWindow);
    notification->showNotification();

}


void Commodity::on_addToShoppingCart_clicked()
{
    int buynum = ui->productQuantity->text().toInt();
    int price = product->getProductPrice();
    //qDebug() << "buynum:" << buynum << "  price:" <<price;
    Order order(0,product->getProductName(), ui->productQuantity->value(),ui->styleComboBox->currentText(),
                product->getProductId(),QString::number(buynum * price,'f',2),QDateTime::currentDateTime(),ObjectsManager::getClientName(),
                ObjectsManager::getClientId(),1,1, product->getProductShopId(), 0, 0);

    //qDebug()<< "加入购物车花" <<QString::number(buynum * price,'f',2);

    Root* rootWindow = Root::findRootWidget(this);
    if (ObjectsManager::addOrder(&order))
    {
        auto *notification = new CreateNotification("加入购物车成功", rootWindow);
        notification->showNotification();
    }
    else
    {
        auto *notification = new CreateNotification("加入购物车失败", rootWindow);
        notification->showNotification();
    }
}


void Commodity::on_ContactBusiness_clicked()
{
    QString shopName = ui->merchantWidget->findChild<QLabel*>("ShopName")->text().remove("店铺名称：");
    QString avatarPath = "D:\QT\Documents\Ecommerce\Images\O1CN01CEAqor1T5Bm2U3Ccm_--6000000002330-2-tps-48-44.png";  // 示例头像路径
    int shopId = product->getProductShopId();

    Root* rootWindow = Root::findRootWidget(this);
    this->hide();
    Communication* communicationPage = rootWindow->findChild<Communication*>();
    rootWindow->SetFunctionZone(communicationPage);

    if (communicationPage) {

        // 将新联系人传递给 Communication 页面，进行联系人列表更新
        communicationPage->addContactToList(shopName, shopId, avatarPath);
    }
}

