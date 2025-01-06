#include "product_edit.h"
#include "ui_product_edit.h"
#include "objects.h"
#include "root/root.h"
#include "notification/create_notification.h"

ProductEdit::ProductEdit(QWidget *parent, Product* product)
    : ContentWidget(parent)
    , ui(new Ui::ProductEdit)
, product(product)
{
    ui->setupUi(this);

    if (product != nullptr) {
        // 获取 QLabel 的大小
        QSize labelSize = ui->productImageLabel->size();

        // 获取原始图片并调整大小
        QPixmap pixmap = product->getProductImage();
        pixmap = pixmap.scaled(labelSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);

        // 设置调整后的图片到 QLabel
        ui->productImageLabel->setPixmap(pixmap);

        // 设置其他商品信息
        ui->nameEdit->setText(product->getProductName());
        ui->priceEdit->setText(QString::number(product->getProductPrice()));
        // ui->guarantee->setText("保障   " + QString("退货险"));
        // ui->delivery->setText("配送    " + QString("五日内必送达"));
    }
}

ProductEdit::~ProductEdit()
{
    delete ui;
}

void ProductEdit::Refresh()
{
    //qDebug("ProductEdit refresh");
}
void ProductEdit::on_backButton_clicked()
{
    Root* rootWindow = Root::findRootWidget(this);
    this->hide();
    rootWindow->SetContentWidget(nullptr);
}


void ProductEdit::on_saveButton_clicked()
{
    product->setProductName(ui->nameEdit->text());
    product->setProductNum(ui->stockSpinBox->value());
    product->setProductPrice(ui->priceEdit->text().toFloat());
    product->setProductShopId(ObjectsManager::getShopId());
    if (ObjectsManager::UpdateProduct(product))
    {
        CreateNotification* createNotification = new CreateNotification("保存成功",this);
        createNotification->showNotification();
    }
    else
    {
        CreateNotification* createNotification = new CreateNotification("保存失败",this);
        createNotification->showNotification();
    }
}


void ProductEdit::on_selectImageButton_clicked()
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

