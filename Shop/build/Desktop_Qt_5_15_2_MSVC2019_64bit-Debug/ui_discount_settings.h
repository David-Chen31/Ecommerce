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
#include <QtWidgets/QDateEdit>
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
    QDateEdit *startTimeEdit;
    QLabel *toLabel;
    QDateEdit *endTimeEdit;
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
        DiscountSettings->resize(2010, 1060);
        DiscountSettings->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\346\240\267\345\274\217 */\n"
"QWidget {\n"
"    background-color: #FFFFFF;\n"
"    font-size: 20px;\n"
"    color: #333333;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"}\n"
"\n"
"/* QLabel \346\240\267\345\274\217 */\n"
"QLabel {\n"
"    font-size: 20px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLabel#discountedPriceLabel {\n"
"    color: #1E90FF; /* \345\244\251\350\223\235\350\211\262\346\212\230\346\211\243\344\273\267\346\240\274 */\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* QLineEdit \346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    background-color: #F5F5F5;\n"
"    border: 2px solid #1E90FF;\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"    font-size: 20px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #63B8FF;\n"
"}\n"
"\n"
"/* QSpinBox \345\222\214 QDoubleSpinBox \346\240\267\345\274\217 */\n"
"QSpinBox, QDoubleSpinBox {\n"
"    border: 2px solid #1E90FF;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-si"
                        "ze: 20px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QSpinBox:focus, QDoubleSpinBox:focus {\n"
"    border: 2px solid #63B8FF;\n"
"}\n"
"\n"
"/* QPushButton \346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    background-color: #1E90FF;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 20px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    transition: background-color 0.3s ease, transform 0.2s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #63B8FF;\n"
"    transform: scale(1.05);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #4682B4;\n"
"    transform: scale(0.95);\n"
"}\n"
"\n"
"/* QTextEdit \346\240\267\345\274\217 */\n"
"QTextEdit {\n"
"    border: 2px solid #1E90FF;\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"    font-size: 20px;\n"
"    color: #333333;\n"
"    background-color: #F5F5F5;\n"
"}\n"
"\n"
"/* QCheckBox \346\240\267\345\274\217 */\n"
"QCheckBox {\n"
"    font-size: 20px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"/* QDateT"
                        "imeEdit \346\240\267\345\274\217 */\n"
"QDateTimeEdit {\n"
"    border: 2px solid #1E90FF;\n"
"    border-radius: 8px;\n"
"    padding: 5px;\n"
"    font-size: 20px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QDateTimeEdit:focus {\n"
"    border: 2px solid #63B8FF;\n"
"}\n"
""));
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

        verticalSpacer = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        productInfoLayout->addItem(verticalSpacer);

        currentPriceLabel = new QLabel(DiscountSettings);
        currentPriceLabel->setObjectName(QString::fromUtf8("currentPriceLabel"));

        productInfoLayout->addWidget(currentPriceLabel);

        verticalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        productInfoLayout->addItem(verticalSpacer_2);

        currentDiscountLabel = new QLabel(DiscountSettings);
        currentDiscountLabel->setObjectName(QString::fromUtf8("currentDiscountLabel"));

        productInfoLayout->addWidget(currentDiscountLabel);

        verticalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

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

        verticalSpacer_5 = new QSpacerItem(0, 80, QSizePolicy::Minimum, QSizePolicy::Minimum);

        discountEditLayout->addItem(verticalSpacer_5);

        timeFormLayout = new QFormLayout();
        timeFormLayout->setObjectName(QString::fromUtf8("timeFormLayout"));
        timeLabel = new QLabel(DiscountSettings);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));

        timeFormLayout->setWidget(0, QFormLayout::LabelRole, timeLabel);

        timeLayout = new QHBoxLayout();
        timeLayout->setObjectName(QString::fromUtf8("timeLayout"));
        startTimeEdit = new QDateEdit(DiscountSettings);
        startTimeEdit->setObjectName(QString::fromUtf8("startTimeEdit"));

        timeLayout->addWidget(startTimeEdit);

        toLabel = new QLabel(DiscountSettings);
        toLabel->setObjectName(QString::fromUtf8("toLabel"));

        timeLayout->addWidget(toLabel);

        endTimeEdit = new QDateEdit(DiscountSettings);
        endTimeEdit->setObjectName(QString::fromUtf8("endTimeEdit"));

        timeLayout->addWidget(endTimeEdit);


        timeFormLayout->setLayout(0, QFormLayout::FieldRole, timeLayout);


        discountEditLayout->addLayout(timeFormLayout);

        verticalSpacer_4 = new QSpacerItem(0, 60, QSizePolicy::Minimum, QSizePolicy::Minimum);

        discountEditLayout->addItem(verticalSpacer_4);

        limitedTimeCheckbox = new QCheckBox(DiscountSettings);
        limitedTimeCheckbox->setObjectName(QString::fromUtf8("limitedTimeCheckbox"));

        discountEditLayout->addWidget(limitedTimeCheckbox);

        verticalSpacer_6 = new QSpacerItem(0, 60, QSizePolicy::Minimum, QSizePolicy::Minimum);

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
        currentPriceLabel->setText(QCoreApplication::translate("DiscountSettings", "\345\275\223\345\211\215\344\273\267\346\240\274\357\274\232\302\245100.00", nullptr));
        currentDiscountLabel->setText(QCoreApplication::translate("DiscountSettings", "\345\275\223\345\211\215\346\212\230\346\211\243\357\274\23220%", nullptr));
        discountedPriceLabel->setText(QCoreApplication::translate("DiscountSettings", "\346\212\230\346\211\243\345\220\216\344\273\267\346\240\274\357\274\232\302\24580.00", nullptr));
        newDiscountLabel->setText(QCoreApplication::translate("DiscountSettings", "\350\256\276\347\275\256\346\212\230\346\211\243\346\257\224\344\276\213 (%):", nullptr));
        newDiscountSpinBox->setSuffix(QCoreApplication::translate("DiscountSettings", "%", nullptr));
        updatedPriceLabel->setText(QCoreApplication::translate("DiscountSettings", "\346\212\230\346\211\243\345\220\216\344\273\267\346\240\274\357\274\232", nullptr));
        updatedPriceValue->setText(QCoreApplication::translate("DiscountSettings", "\302\24580.00", nullptr));
        timeLabel->setText(QCoreApplication::translate("DiscountSettings", "\350\256\276\347\275\256\347\224\237\346\225\210\346\227\266\351\227\264\357\274\232", nullptr));
        startTimeEdit->setDisplayFormat(QCoreApplication::translate("DiscountSettings", "yyyy-MM-dd HH:mm", nullptr));
        toLabel->setText(QCoreApplication::translate("DiscountSettings", "\350\207\263", nullptr));
        endTimeEdit->setDisplayFormat(QCoreApplication::translate("DiscountSettings", "yyyy-MM-dd HH:mm", nullptr));
        limitedTimeCheckbox->setText(QCoreApplication::translate("DiscountSettings", "\346\230\257\345\220\246\351\231\220\346\227\266\346\212\230\346\211\243", nullptr));
        promotionDescription->setPlaceholderText(QCoreApplication::translate("DiscountSettings", "\345\241\253\345\206\231\344\277\203\351\224\200\346\217\217\350\277\260...", nullptr));
        saveButton->setText(QCoreApplication::translate("DiscountSettings", "\344\277\235\345\255\230", nullptr));
        resetButton->setText(QCoreApplication::translate("DiscountSettings", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiscountSettings: public Ui_DiscountSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISCOUNT_SETTINGS_H
