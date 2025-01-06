#include "discount_settings.h"
#include "ui_discount_settings.h"
#include "objects.h"
#include "root/root.h"
#include "notification/create_notification.h"

DiscountSettings::DiscountSettings(QWidget *parent, Product* product)
    : ContentWidget(parent)
    , ui(new Ui::DiscountSettings)
    , product(product)
{
    ui->setupUi(this);

    // 设置折扣比例的变化监听
    connect(ui->newDiscountSpinBox, QOverload<int>::of(&QSpinBox::valueChanged),
            this, &DiscountSettings::onDiscountChanged);
}

DiscountSettings::~DiscountSettings()
{
    delete ui;
}

void DiscountSettings::Refresh()
{
    if (product==nullptr)
        return;
    ui->productImage->setPixmap(product->getProductImage());
    ui->currentPriceLabel->setText("当前价格：¥" + QString::number(product->getProductPrice()));
    ui->currentDiscountLabel->setText("当前折扣：" + QString::number(product->getProductDiscount()*100)+"%");
    ui->discountedPriceLabel->setText("折扣后价格：¥" + QString::number(product->getProductPrice() * product->getProductDiscount()));
}

void DiscountSettings::SetProduct(Product *product)
{
    this->product = product;
}

void DiscountSettings::on_saveButton_clicked()
{
    //待写生效时间
    QDateTime startTime = ui->startTimeEdit->dateTime();
    QDateTime endTime = ui->endTimeEdit->dateTime();
    float discount = ui->newDiscountSpinBox->value();
    product->setProductDiscount(discount / 100);
    product->setDiscountStartTime(startTime);
    product->setDiscountEndTime(endTime);
    if (ObjectsManager::UpdateProduct(product))
    {
        CreateNotification* notification = new CreateNotification("保存成功", this);
        notification->showNotification();
    }

    Refresh();
}


void DiscountSettings::onDiscountChanged(int value)
{
    // 假设当前价格是100元
    double currentPrice = product->getProductPrice();

    // 计算折扣后的价格
    double discountedPrice = currentPrice * (value / 100.0);

    // 更新显示的折扣后价格
    ui->updatedPriceValue->setText(QString("¥%1").arg(discountedPrice, 0, 'f', 2));
}

void DiscountSettings::on_resetButton_clicked()
{
    // 重置折扣比例
    ui->newDiscountSpinBox->setValue(0);  // 默认值为 0%

    // 重置折扣后价格
    ui->updatedPriceLabel->setText("¥0.00");

    // 重置时间选择框
    ui->startTimeEdit->setDateTime(QDateTime::currentDateTime());  // 默认当前时间
    ui->endTimeEdit->setDateTime(QDateTime::currentDateTime().addDays(1));  // 默认结束时间为明天

    // 取消限时折扣勾选
    ui->limitedTimeCheckbox->setChecked(false);

    // 清空促销描述框
    ui->promotionDescription->clear();
}

