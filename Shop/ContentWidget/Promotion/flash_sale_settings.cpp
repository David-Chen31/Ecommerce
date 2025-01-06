#include "flash_sale_settings.h"
#include "ui_flash_sale_settings.h"
#include "root/root.h"
#include "objects.h"
#include "notification/create_notification.h"

FlashSaleSettings::FlashSaleSettings(QWidget *parent, Product* product)
    : ContentWidget(parent)
    , ui(new Ui::FlashSaleSettings)
    , product(product)
{
    ui->setupUi(this);
}

FlashSaleSettings::~FlashSaleSettings()
{
    delete ui;
}

void FlashSaleSettings::Refresh()
{
    if (product==nullptr)
        return;
    ui->flashSalePrice->setText("秒杀价格：¥" + QString::number(product->getProductFlashSalePrice()));
    ui->originalPrice->setText("商品原价：¥" + QString::number(product->getProductPrice()));
    ui->stock->setText("剩余库存：" + QString::number(product->getProductNum()));
    ui->sold->setText("已售出：" + QString::number(product->getProductBuyNum()));
    ui->productImage->setPixmap(product->getProductImage());
    ui->flashSaleTime->setText("秒杀时间：" + product->getFlashSaleStartTime().toString("yyyy-MM-dd") + " 12:00 至 " + product->getFlashSaleEndTime().toString("yyyy-MM-dd") +" 14:00");

}

void FlashSaleSettings::SetProduct(Product *product)
{
    this->product = product;
}

void FlashSaleSettings::on_saveButton_clicked()
{
    //待写生效时间
    QDateTime startTime = ui->startTimeEdit->dateTime();
    QDateTime endTime = ui->endTimeEdit->dateTime();
    float flashPrice = ui->setPriceSpinBox->value();
    int stock = ui->setStockSpinBox->value();
    int limit = ui->limitSpinBox->value();

    product->setProductFlashSalePrice(flashPrice);
    product->setFlashSaleStartTime(startTime);
    product->setFlashSaleEndTime(endTime);
    product->setProductNum(stock);
    product->setFlashSalePurchaseLimit(limit);
    if (ObjectsManager::UpdateProduct(product))
    {
        CreateNotification createNotification("保存成功");
        createNotification.showNotification();
    }

    Refresh();
}


void FlashSaleSettings::on_resetButton_clicked()
{
    // 重置秒杀价格
    ui->setPriceSpinBox->setValue(0);  // 默认值为 0

    // 重置秒杀库存
    ui->setStockSpinBox->setValue(1);  // 默认值为 1

    // 重置秒杀时间
    ui->startTimeEdit->setDateTime(QDateTime::currentDateTime());  // 默认当前时间
    ui->endTimeEdit->setDateTime(QDateTime::currentDateTime().addDays(1));  // 默认结束时间为明天

    // 重置每人限购数量
    ui->limitSpinBox->setValue(1);  // 默认每人限购 1

    // 清空活动描述
    ui->descriptionTextEdit->clear();
}

