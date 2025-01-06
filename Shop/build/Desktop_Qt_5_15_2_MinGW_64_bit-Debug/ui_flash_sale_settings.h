/********************************************************************************
** Form generated from reading UI file 'flash_sale_settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLASH_SALE_SETTINGS_H
#define UI_FLASH_SALE_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlashSaleSettings
{
public:
    QHBoxLayout *mainLayout;
    QVBoxLayout *leftLayout;
    QLabel *productImage;
    QSpacerItem *verticalSpacer;
    QLabel *flashSaleTime;
    QSpacerItem *verticalSpacer_2;
    QLabel *flashSalePrice;
    QSpacerItem *verticalSpacer_3;
    QLabel *originalPrice;
    QSpacerItem *verticalSpacer_4;
    QLabel *stock;
    QSpacerItem *verticalSpacer_5;
    QLabel *sold;
    QSpacerItem *verticalSpacer_6;
    QLabel *status;
    QVBoxLayout *rightLayout;
    QFormLayout *priceFormLayout;
    QLabel *setPriceLabel;
    QDoubleSpinBox *setPriceSpinBox;
    QSpacerItem *verticalSpacer_7;
    QFormLayout *stockFormLayout;
    QLabel *setStockLabel;
    QSpinBox *setStockSpinBox;
    QSpacerItem *verticalSpacer_8;
    QFormLayout *timeFormLayout;
    QLabel *setTimeLabel;
    QHBoxLayout *timeLayout;
    QDateTimeEdit *startTimeEdit;
    QLabel *toLabel;
    QDateTimeEdit *endTimeEdit;
    QSpacerItem *verticalSpacer_9;
    QFormLayout *limitFormLayout;
    QLabel *limitLabel;
    QSpinBox *limitSpinBox;
    QSpacerItem *verticalSpacer_10;
    QTextEdit *descriptionTextEdit;
    QHBoxLayout *actionButtonsLayout;
    QPushButton *saveButton;
    QPushButton *resetButton;

    void setupUi(QWidget *FlashSaleSettings)
    {
        if (FlashSaleSettings->objectName().isEmpty())
            FlashSaleSettings->setObjectName(QString::fromUtf8("FlashSaleSettings"));
        FlashSaleSettings->resize(1200, 800);
        mainLayout = new QHBoxLayout(FlashSaleSettings);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        leftLayout = new QVBoxLayout();
        leftLayout->setObjectName(QString::fromUtf8("leftLayout"));
        productImage = new QLabel(FlashSaleSettings);
        productImage->setObjectName(QString::fromUtf8("productImage"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(productImage->sizePolicy().hasHeightForWidth());
        productImage->setSizePolicy(sizePolicy);
        productImage->setMinimumSize(QSize(300, 300));
        productImage->setPixmap(QPixmap(QString::fromUtf8(":/Images/example_product.jpg")));
        productImage->setScaledContents(true);

        leftLayout->addWidget(productImage);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        leftLayout->addItem(verticalSpacer);

        flashSaleTime = new QLabel(FlashSaleSettings);
        flashSaleTime->setObjectName(QString::fromUtf8("flashSaleTime"));

        leftLayout->addWidget(flashSaleTime);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        leftLayout->addItem(verticalSpacer_2);

        flashSalePrice = new QLabel(FlashSaleSettings);
        flashSalePrice->setObjectName(QString::fromUtf8("flashSalePrice"));

        leftLayout->addWidget(flashSalePrice);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        leftLayout->addItem(verticalSpacer_3);

        originalPrice = new QLabel(FlashSaleSettings);
        originalPrice->setObjectName(QString::fromUtf8("originalPrice"));

        leftLayout->addWidget(originalPrice);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        leftLayout->addItem(verticalSpacer_4);

        stock = new QLabel(FlashSaleSettings);
        stock->setObjectName(QString::fromUtf8("stock"));

        leftLayout->addWidget(stock);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        leftLayout->addItem(verticalSpacer_5);

        sold = new QLabel(FlashSaleSettings);
        sold->setObjectName(QString::fromUtf8("sold"));

        leftLayout->addWidget(sold);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        leftLayout->addItem(verticalSpacer_6);

        status = new QLabel(FlashSaleSettings);
        status->setObjectName(QString::fromUtf8("status"));

        leftLayout->addWidget(status);


        mainLayout->addLayout(leftLayout);

        rightLayout = new QVBoxLayout();
        rightLayout->setObjectName(QString::fromUtf8("rightLayout"));
        priceFormLayout = new QFormLayout();
        priceFormLayout->setObjectName(QString::fromUtf8("priceFormLayout"));
        setPriceLabel = new QLabel(FlashSaleSettings);
        setPriceLabel->setObjectName(QString::fromUtf8("setPriceLabel"));

        priceFormLayout->setWidget(0, QFormLayout::LabelRole, setPriceLabel);

        setPriceSpinBox = new QDoubleSpinBox(FlashSaleSettings);
        setPriceSpinBox->setObjectName(QString::fromUtf8("setPriceSpinBox"));
        setPriceSpinBox->setMinimum(0.000000000000000);

        priceFormLayout->setWidget(0, QFormLayout::FieldRole, setPriceSpinBox);


        rightLayout->addLayout(priceFormLayout);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        rightLayout->addItem(verticalSpacer_7);

        stockFormLayout = new QFormLayout();
        stockFormLayout->setObjectName(QString::fromUtf8("stockFormLayout"));
        setStockLabel = new QLabel(FlashSaleSettings);
        setStockLabel->setObjectName(QString::fromUtf8("setStockLabel"));

        stockFormLayout->setWidget(0, QFormLayout::LabelRole, setStockLabel);

        setStockSpinBox = new QSpinBox(FlashSaleSettings);
        setStockSpinBox->setObjectName(QString::fromUtf8("setStockSpinBox"));
        setStockSpinBox->setMinimum(1);

        stockFormLayout->setWidget(0, QFormLayout::FieldRole, setStockSpinBox);


        rightLayout->addLayout(stockFormLayout);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        rightLayout->addItem(verticalSpacer_8);

        timeFormLayout = new QFormLayout();
        timeFormLayout->setObjectName(QString::fromUtf8("timeFormLayout"));
        setTimeLabel = new QLabel(FlashSaleSettings);
        setTimeLabel->setObjectName(QString::fromUtf8("setTimeLabel"));

        timeFormLayout->setWidget(0, QFormLayout::LabelRole, setTimeLabel);

        timeLayout = new QHBoxLayout();
        timeLayout->setObjectName(QString::fromUtf8("timeLayout"));
        startTimeEdit = new QDateTimeEdit(FlashSaleSettings);
        startTimeEdit->setObjectName(QString::fromUtf8("startTimeEdit"));

        timeLayout->addWidget(startTimeEdit);

        toLabel = new QLabel(FlashSaleSettings);
        toLabel->setObjectName(QString::fromUtf8("toLabel"));

        timeLayout->addWidget(toLabel);

        endTimeEdit = new QDateTimeEdit(FlashSaleSettings);
        endTimeEdit->setObjectName(QString::fromUtf8("endTimeEdit"));

        timeLayout->addWidget(endTimeEdit);


        timeFormLayout->setLayout(0, QFormLayout::FieldRole, timeLayout);


        rightLayout->addLayout(timeFormLayout);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        rightLayout->addItem(verticalSpacer_9);

        limitFormLayout = new QFormLayout();
        limitFormLayout->setObjectName(QString::fromUtf8("limitFormLayout"));
        limitLabel = new QLabel(FlashSaleSettings);
        limitLabel->setObjectName(QString::fromUtf8("limitLabel"));

        limitFormLayout->setWidget(0, QFormLayout::LabelRole, limitLabel);

        limitSpinBox = new QSpinBox(FlashSaleSettings);
        limitSpinBox->setObjectName(QString::fromUtf8("limitSpinBox"));
        limitSpinBox->setMinimum(1);

        limitFormLayout->setWidget(0, QFormLayout::FieldRole, limitSpinBox);


        rightLayout->addLayout(limitFormLayout);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        rightLayout->addItem(verticalSpacer_10);

        descriptionTextEdit = new QTextEdit(FlashSaleSettings);
        descriptionTextEdit->setObjectName(QString::fromUtf8("descriptionTextEdit"));

        rightLayout->addWidget(descriptionTextEdit);

        actionButtonsLayout = new QHBoxLayout();
        actionButtonsLayout->setObjectName(QString::fromUtf8("actionButtonsLayout"));
        saveButton = new QPushButton(FlashSaleSettings);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        actionButtonsLayout->addWidget(saveButton);

        resetButton = new QPushButton(FlashSaleSettings);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(resetButton->sizePolicy().hasHeightForWidth());
        resetButton->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(13);
        resetButton->setFont(font);

        actionButtonsLayout->addWidget(resetButton);


        rightLayout->addLayout(actionButtonsLayout);


        mainLayout->addLayout(rightLayout);


        retranslateUi(FlashSaleSettings);

        QMetaObject::connectSlotsByName(FlashSaleSettings);
    } // setupUi

    void retranslateUi(QWidget *FlashSaleSettings)
    {
        FlashSaleSettings->setWindowTitle(QCoreApplication::translate("FlashSaleSettings", "\351\231\220\346\227\266\347\247\222\346\235\200\350\256\276\347\275\256", nullptr));
        productImage->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"          QLabel {\n"
"              border: 1px solid #DDDDDD;\n"
"              border-radius: 5px;\n"
"              margin: 10px;\n"
"          }\n"
"         ", nullptr));
        flashSaleTime->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"          QLabel {\n"
"              font-size: 20px;\n"
"              color: #333333;\n"
"          }\n"
"         ", nullptr));
        flashSaleTime->setText(QCoreApplication::translate("FlashSaleSettings", "\347\247\222\346\235\200\346\227\266\351\227\264\357\274\2322023-12-01 12:00 \350\207\263 2023-12-01 14:00", nullptr));
        flashSalePrice->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"          QLabel {\n"
"              font-size: 20px;\n"
"              font-weight: bold;\n"
"              color: #FF6A00;\n"
"          }\n"
"         ", nullptr));
        flashSalePrice->setText(QCoreApplication::translate("FlashSaleSettings", "\347\247\222\346\235\200\344\273\267\346\240\274\357\274\232\302\24550.00", nullptr));
        originalPrice->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"          QLabel {\n"
"              font-size: 20px;\n"
"              color: #666666;\n"
"              text-decoration: line-through;\n"
"          }\n"
"         ", nullptr));
        originalPrice->setText(QCoreApplication::translate("FlashSaleSettings", "\345\225\206\345\223\201\345\216\237\344\273\267\357\274\232\302\245100.00", nullptr));
        stock->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"          QLabel {\n"
"              font-size: 20px;\n"
"              color: #333333;\n"
"          }\n"
"         ", nullptr));
        stock->setText(QCoreApplication::translate("FlashSaleSettings", "\345\211\251\344\275\231\345\272\223\345\255\230\357\274\23250", nullptr));
        sold->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"          QLabel {\n"
"              font-size: 20px;\n"
"              color: #333333;\n"
"          }\n"
"         ", nullptr));
        sold->setText(QCoreApplication::translate("FlashSaleSettings", "\345\267\262\345\224\256\345\207\272\357\274\23220", nullptr));
        status->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"          QLabel {\n"
"              font-size: 20px;\n"
"              color: #333333;\n"
"          }\n"
"         ", nullptr));
        status->setText(QCoreApplication::translate("FlashSaleSettings", "\347\212\266\346\200\201\357\274\232\346\234\252\345\274\200\345\247\213", nullptr));
        setPriceLabel->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"            QLabel {\n"
"                font-size: 20px;\n"
"            }\n"
"           ", nullptr));
        setPriceLabel->setText(QCoreApplication::translate("FlashSaleSettings", "\350\256\276\347\275\256\347\247\222\346\235\200\344\273\267\346\240\274\357\274\232", nullptr));
        setPriceSpinBox->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"            QDoubleSpinBox {\n"
"                font-size: 20px;\n"
"            }\n"
"           ", nullptr));
        setPriceSpinBox->setPrefix(QCoreApplication::translate("FlashSaleSettings", "\302\245", nullptr));
        setStockLabel->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"            QLabel {\n"
"                font-size: 20px;\n"
"            }\n"
"           ", nullptr));
        setStockLabel->setText(QCoreApplication::translate("FlashSaleSettings", "\350\256\276\347\275\256\347\247\222\346\235\200\345\272\223\345\255\230\357\274\232", nullptr));
        setStockSpinBox->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"            QSpinBox {\n"
"                font-size: 20px;\n"
"            }\n"
"           ", nullptr));
        setTimeLabel->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"            QLabel {\n"
"                font-size: 20px;\n"
"            }\n"
"           ", nullptr));
        setTimeLabel->setText(QCoreApplication::translate("FlashSaleSettings", "\350\256\276\347\275\256\347\247\222\346\235\200\346\227\266\351\227\264\357\274\232", nullptr));
        startTimeEdit->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"              QDateTimeEdit {\n"
"                  font-size: 20px;\n"
"              }\n"
"             ", nullptr));
        startTimeEdit->setDisplayFormat(QCoreApplication::translate("FlashSaleSettings", "yyyy-MM-dd HH:mm", nullptr));
        toLabel->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"              QLabel {\n"
"                  font-size: 20px;\n"
"              }\n"
"             ", nullptr));
        toLabel->setText(QCoreApplication::translate("FlashSaleSettings", "\350\207\263", nullptr));
        endTimeEdit->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"              QDateTimeEdit {\n"
"                  font-size: 20px;\n"
"              }\n"
"             ", nullptr));
        endTimeEdit->setDisplayFormat(QCoreApplication::translate("FlashSaleSettings", "yyyy-MM-dd HH:mm", nullptr));
        limitLabel->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"            QLabel {\n"
"                font-size: 20px;\n"
"            }\n"
"           ", nullptr));
        limitLabel->setText(QCoreApplication::translate("FlashSaleSettings", "\346\257\217\344\272\272\351\231\220\350\264\255\357\274\232", nullptr));
        limitSpinBox->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"            QSpinBox {\n"
"                font-size: 20px;\n"
"            }\n"
"           ", nullptr));
        descriptionTextEdit->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"          QTextEdit {\n"
"              font-size: 20px;\n"
"          }\n"
"         ", nullptr));
        descriptionTextEdit->setPlaceholderText(QCoreApplication::translate("FlashSaleSettings", "\345\241\253\345\206\231\346\264\273\345\212\250\346\217\217\350\277\260...", nullptr));
        saveButton->setStyleSheet(QCoreApplication::translate("FlashSaleSettings", "\n"
"            QPushButton {\n"
"                background-color: #FF6A00;\n"
"                color: white;\n"
"                border-radius: 5px;\n"
"                font-size: 20px;\n"
"                padding: 5px 10px;\n"
"            }\n"
"            QPushButton:hover {\n"
"                background-color: #FF4500;\n"
"            }\n"
"           ", nullptr));
        saveButton->setText(QCoreApplication::translate("FlashSaleSettings", "\344\277\235\345\255\230", nullptr));
        resetButton->setText(QCoreApplication::translate("FlashSaleSettings", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FlashSaleSettings: public Ui_FlashSaleSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLASH_SALE_SETTINGS_H
