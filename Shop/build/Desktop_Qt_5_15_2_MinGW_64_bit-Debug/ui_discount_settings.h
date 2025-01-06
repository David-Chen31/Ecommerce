/********************************************************************************
** Form generated from reading UI file 'discount_settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISCOUNT_SETTINGS_H
#define UI_DISCOUNT_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
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

class Ui_DiscountSettings
{
public:
    QHBoxLayout *mainLayout;
    QVBoxLayout *productInfoLayout;
    QLabel *productImage;
    QSpacerItem *verticalSpacer;
    QLabel *currentPriceLabel;
    QSpacerItem *verticalSpacer_2;
    QLabel *currentDiscountLabel;
    QSpacerItem *verticalSpacer_3;
    QLabel *discountedPriceLabel;
    QVBoxLayout *discountEditLayout;
    QFormLayout *discountFormLayout;
    QLabel *newDiscountLabel;
    QSpinBox *newDiscountSpinBox;
    QLabel *updatedPriceLabel;
    QLabel *updatedPriceValue;
    QSpacerItem *verticalSpacer_5;
    QFormLayout *timeFormLayout;
    QLabel *timeLabel;
    QHBoxLayout *timeLayout;
    QDateTimeEdit *startTimeEdit;
    QLabel *toLabel;
    QDateTimeEdit *endTimeEdit;
    QSpacerItem *verticalSpacer_4;
    QCheckBox *limitedTimeCheckbox;
    QSpacerItem *verticalSpacer_6;
    QTextEdit *promotionDescription;
    QHBoxLayout *actionButtonsLayout;
    QPushButton *saveButton;
    QPushButton *resetButton;

    void setupUi(QWidget *DiscountSettings)
    {
        if (DiscountSettings->objectName().isEmpty())
            DiscountSettings->setObjectName(QString::fromUtf8("DiscountSettings"));
        DiscountSettings->resize(1200, 800);
        mainLayout = new QHBoxLayout(DiscountSettings);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        productInfoLayout = new QVBoxLayout();
        productInfoLayout->setObjectName(QString::fromUtf8("productInfoLayout"));
        productImage = new QLabel(DiscountSettings);
        productImage->setObjectName(QString::fromUtf8("productImage"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(productImage->sizePolicy().hasHeightForWidth());
        productImage->setSizePolicy(sizePolicy);
        productImage->setMinimumSize(QSize(300, 300));
        productImage->setPixmap(QPixmap(QString::fromUtf8(":/Images/example_product.jpg")));
        productImage->setScaledContents(true);

        productInfoLayout->addWidget(productImage);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        productInfoLayout->addItem(verticalSpacer);

        currentPriceLabel = new QLabel(DiscountSettings);
        currentPriceLabel->setObjectName(QString::fromUtf8("currentPriceLabel"));

        productInfoLayout->addWidget(currentPriceLabel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        productInfoLayout->addItem(verticalSpacer_2);

        currentDiscountLabel = new QLabel(DiscountSettings);
        currentDiscountLabel->setObjectName(QString::fromUtf8("currentDiscountLabel"));

        productInfoLayout->addWidget(currentDiscountLabel);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        productInfoLayout->addItem(verticalSpacer_3);

        discountedPriceLabel = new QLabel(DiscountSettings);
        discountedPriceLabel->setObjectName(QString::fromUtf8("discountedPriceLabel"));

        productInfoLayout->addWidget(discountedPriceLabel);


        mainLayout->addLayout(productInfoLayout);

        discountEditLayout = new QVBoxLayout();
        discountEditLayout->setObjectName(QString::fromUtf8("discountEditLayout"));
        discountFormLayout = new QFormLayout();
        discountFormLayout->setObjectName(QString::fromUtf8("discountFormLayout"));
        newDiscountLabel = new QLabel(DiscountSettings);
        newDiscountLabel->setObjectName(QString::fromUtf8("newDiscountLabel"));

        discountFormLayout->setWidget(0, QFormLayout::LabelRole, newDiscountLabel);

        newDiscountSpinBox = new QSpinBox(DiscountSettings);
        newDiscountSpinBox->setObjectName(QString::fromUtf8("newDiscountSpinBox"));
        newDiscountSpinBox->setMinimum(0);
        newDiscountSpinBox->setMaximum(100);

        discountFormLayout->setWidget(0, QFormLayout::FieldRole, newDiscountSpinBox);

        updatedPriceLabel = new QLabel(DiscountSettings);
        updatedPriceLabel->setObjectName(QString::fromUtf8("updatedPriceLabel"));

        discountFormLayout->setWidget(1, QFormLayout::LabelRole, updatedPriceLabel);

        updatedPriceValue = new QLabel(DiscountSettings);
        updatedPriceValue->setObjectName(QString::fromUtf8("updatedPriceValue"));

        discountFormLayout->setWidget(1, QFormLayout::FieldRole, updatedPriceValue);


        discountEditLayout->addLayout(discountFormLayout);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        discountEditLayout->addItem(verticalSpacer_5);

        timeFormLayout = new QFormLayout();
        timeFormLayout->setObjectName(QString::fromUtf8("timeFormLayout"));
        timeLabel = new QLabel(DiscountSettings);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        timeFormLayout->setWidget(0, QFormLayout::LabelRole, timeLabel);

        timeLayout = new QHBoxLayout();
        timeLayout->setObjectName(QString::fromUtf8("timeLayout"));
        startTimeEdit = new QDateTimeEdit(DiscountSettings);
        startTimeEdit->setObjectName(QString::fromUtf8("startTimeEdit"));

        timeLayout->addWidget(startTimeEdit);

        toLabel = new QLabel(DiscountSettings);
        toLabel->setObjectName(QString::fromUtf8("toLabel"));

        timeLayout->addWidget(toLabel);

        endTimeEdit = new QDateTimeEdit(DiscountSettings);
        endTimeEdit->setObjectName(QString::fromUtf8("endTimeEdit"));

        timeLayout->addWidget(endTimeEdit);


        timeFormLayout->setLayout(0, QFormLayout::FieldRole, timeLayout);


        discountEditLayout->addLayout(timeFormLayout);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        discountEditLayout->addItem(verticalSpacer_4);

        limitedTimeCheckbox = new QCheckBox(DiscountSettings);
        limitedTimeCheckbox->setObjectName(QString::fromUtf8("limitedTimeCheckbox"));

        discountEditLayout->addWidget(limitedTimeCheckbox);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        discountEditLayout->addItem(verticalSpacer_6);

        promotionDescription = new QTextEdit(DiscountSettings);
        promotionDescription->setObjectName(QString::fromUtf8("promotionDescription"));

        discountEditLayout->addWidget(promotionDescription);

        actionButtonsLayout = new QHBoxLayout();
        actionButtonsLayout->setObjectName(QString::fromUtf8("actionButtonsLayout"));
        saveButton = new QPushButton(DiscountSettings);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        actionButtonsLayout->addWidget(saveButton);

        resetButton = new QPushButton(DiscountSettings);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        actionButtonsLayout->addWidget(resetButton);


        discountEditLayout->addLayout(actionButtonsLayout);


        mainLayout->addLayout(discountEditLayout);


        retranslateUi(DiscountSettings);

        QMetaObject::connectSlotsByName(DiscountSettings);
    } // setupUi

    void retranslateUi(QWidget *DiscountSettings)
    {
        DiscountSettings->setWindowTitle(QCoreApplication::translate("DiscountSettings", "\346\212\230\346\211\243\350\256\276\347\275\256", nullptr));
        productImage->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"          QLabel {\n"
"              border: 1px solid #DDDDDD;\n"
"              border-radius: 5px;\n"
"              margin: 10px;\n"
"          }\n"
"         ", nullptr));
        currentPriceLabel->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"          QLabel {\n"
"              font-size: 20px;\n"
"              font-weight: bold;\n"
"              color: #333333;\n"
"          }\n"
"         ", nullptr));
        currentPriceLabel->setText(QCoreApplication::translate("DiscountSettings", "\345\275\223\345\211\215\344\273\267\346\240\274\357\274\232\302\245100.00", nullptr));
        currentDiscountLabel->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"          QLabel {\n"
"              font-size: 20px;\n"
"              color: #666666;\n"
"          }\n"
"         ", nullptr));
        currentDiscountLabel->setText(QCoreApplication::translate("DiscountSettings", "\345\275\223\345\211\215\346\212\230\346\211\243\357\274\23220%", nullptr));
        discountedPriceLabel->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"          QLabel {\n"
"              font-size: 20px;\n"
"              color: #FF6A00;\n"
"              font-weight: bold;\n"
"          }\n"
"         ", nullptr));
        discountedPriceLabel->setText(QCoreApplication::translate("DiscountSettings", "\346\212\230\346\211\243\345\220\216\344\273\267\346\240\274\357\274\232\302\24580.00", nullptr));
        newDiscountLabel->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"            QLabel {\n"
"                font-size: 20px;\n"
"            }\n"
"           ", nullptr));
        newDiscountLabel->setText(QCoreApplication::translate("DiscountSettings", "\350\256\276\347\275\256\346\212\230\346\211\243\346\257\224\344\276\213 (%):", nullptr));
        newDiscountSpinBox->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"            QSpinBox {\n"
"                font-size: 20px;\n"
"            }\n"
"           ", nullptr));
        newDiscountSpinBox->setSuffix(QCoreApplication::translate("DiscountSettings", "%", nullptr));
        updatedPriceLabel->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"            QLabel {\n"
"                font-size: 20px;\n"
"            }\n"
"           ", nullptr));
        updatedPriceLabel->setText(QCoreApplication::translate("DiscountSettings", "\346\212\230\346\211\243\345\220\216\344\273\267\346\240\274\357\274\232", nullptr));
        updatedPriceValue->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"            QLabel {\n"
"                font-size: 20px;\n"
"            }\n"
"           ", nullptr));
        updatedPriceValue->setText(QCoreApplication::translate("DiscountSettings", "\302\24580.00", nullptr));
        timeLabel->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"            QLabel {\n"
"                font-size: 20px;\n"
"            }\n"
"           ", nullptr));
        timeLabel->setText(QCoreApplication::translate("DiscountSettings", "\350\256\276\347\275\256\347\224\237\346\225\210\346\227\266\351\227\264\357\274\232", nullptr));
        startTimeEdit->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"              QDateTimeEdit {\n"
"                  font-size: 20px;\n"
"              }\n"
"             ", nullptr));
        startTimeEdit->setDisplayFormat(QCoreApplication::translate("DiscountSettings", "yyyy-MM-dd HH:mm", nullptr));
        toLabel->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"              QLabel {\n"
"                  font-size: 20px;\n"
"              }\n"
"             ", nullptr));
        toLabel->setText(QCoreApplication::translate("DiscountSettings", "\350\207\263", nullptr));
        endTimeEdit->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"              QDateTimeEdit {\n"
"                  font-size: 20px;\n"
"              }\n"
"             ", nullptr));
        endTimeEdit->setDisplayFormat(QCoreApplication::translate("DiscountSettings", "yyyy-MM-dd HH:mm", nullptr));
        limitedTimeCheckbox->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"          QCheckBox {\n"
"              font-size: 20px;\n"
"          }\n"
"         ", nullptr));
        limitedTimeCheckbox->setText(QCoreApplication::translate("DiscountSettings", "\346\230\257\345\220\246\351\231\220\346\227\266\346\212\230\346\211\243", nullptr));
        promotionDescription->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"          QTextEdit {\n"
"              font-size: 20px;\n"
"          }\n"
"         ", nullptr));
        promotionDescription->setPlaceholderText(QCoreApplication::translate("DiscountSettings", "\345\241\253\345\206\231\344\277\203\351\224\200\346\217\217\350\277\260...", nullptr));
        saveButton->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"            QPushButton {\n"
"                background-color: #FF6A00;\n"
"                color: white;\n"
"                border-radius: 5px;\n"
"                padding: 5px 10px;\n"
"                font-size: 20px;\n"
"            }\n"
"            QPushButton:hover {\n"
"                background-color: #FF4500;\n"
"            }\n"
"           ", nullptr));
        saveButton->setText(QCoreApplication::translate("DiscountSettings", "\344\277\235\345\255\230", nullptr));
        resetButton->setStyleSheet(QCoreApplication::translate("DiscountSettings", "\n"
"            QPushButton {\n"
"                font-size: 20px;\n"
"            }\n"
"           ", nullptr));
        resetButton->setText(QCoreApplication::translate("DiscountSettings", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiscountSettings: public Ui_DiscountSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISCOUNT_SETTINGS_H
