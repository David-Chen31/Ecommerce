#include "add_product.h"
#include "ui_add_product.h"
#include "objects.h"
#include "root/root.h"
#include "notification/create_notification.h"

AddProduct::AddProduct(QWidget *parent)
    : ContentWidget(parent)
    , ui(new Ui::AddProduct)
{
    ui->setupUi(this);

    product = new Product();
}

AddProduct::~AddProduct()
{
    delete ui;
}


void AddProduct::Refresh()
{
    //qDebug("AddProduct Refresh");
}

void AddProduct::on_selectImageButton_clicked()
{
    // 打开文件对话框，过滤只显示图片文件
    QString imagePath = QFileDialog::getOpenFileName(this, "选择图片", (QString)"D:\\QT\\Documents\\Ecommerce\\Images", "图片文件 (*.png *.jpg *.bmp)");

    if (!imagePath.isEmpty()) {
        // 显示选择的图片路径在标签中
        ui->productImageLabel->setText(imagePath);

        // 将图片加载到 QLabel 中显示
        QPixmap pixmap(imagePath);
        if (!pixmap.isNull()) {
            ui->productImageLabel->setPixmap(pixmap.scaled(200, 200, Qt::KeepAspectRatio));
        }

        product->setProductImage(imagePath);
    }
}


void AddProduct::on_submitButton_clicked()
{
    product->setProductName(ui->nameEdit->text());
    product->setProductNum(ui->stockSpinBox->value());
    product->setProductPrice(ui->priceEdit->text().toFloat());
    product->setProductShopId(ObjectsManager::getShopId());
    product->setProductFlashSalePrice(0);
    product->setFlashSalePurchaseLimit(0);

    if (ObjectsManager::AddProduct(product))
    {
        CreateNotification* createNotification = new CreateNotification("添加成功",this);
        createNotification->showNotification();
    }
    else
    {
        CreateNotification* createNotification = new CreateNotification("添加失败",this);
        createNotification->showNotification();
    }
}

