/********************************************************************************
** Form generated from reading UI file 'product_edit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCT_EDIT_H
#define UI_PRODUCT_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductEdit
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *headerLayout;
    QPushButton *backButton;
    QSpacerItem *headerSpacer;
    QVBoxLayout *styleLayout;
    QHBoxLayout *styleHeaderLayout;
    QLabel *styleLabel;
    QSpinBox *styleCountSpinBox;
    QVBoxLayout *styleEditLayout;
    QHBoxLayout *imageInfoLayout;
    QVBoxLayout *imageLayout;
    QLabel *productImageLabel;
    QPushButton *selectImageButton;
    QFormLayout *infoLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *priceLabel;
    QLineEdit *priceEdit;
    QLabel *stockLabel;
    QSpinBox *stockSpinBox;
    QLabel *descriptionLabel;
    QTextEdit *descriptionEdit;

    void setupUi(QWidget *ProductEdit)
    {
        if (ProductEdit->objectName().isEmpty())
            ProductEdit->setObjectName(QString::fromUtf8("ProductEdit"));
        ProductEdit->resize(1718, 891);
        gridLayout = new QGridLayout(ProductEdit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QWidget(ProductEdit);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        saveButton = new QPushButton(widget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        sizePolicy.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(saveButton, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout->addWidget(widget, 3, 0, 1, 1);

        headerLayout = new QHBoxLayout();
        headerLayout->setObjectName(QString::fromUtf8("headerLayout"));
        backButton = new QPushButton(ProductEdit);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy1);

        headerLayout->addWidget(backButton);

        headerSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        headerLayout->addItem(headerSpacer);


        gridLayout->addLayout(headerLayout, 0, 0, 1, 1);

        styleLayout = new QVBoxLayout();
        styleLayout->setObjectName(QString::fromUtf8("styleLayout"));
        styleHeaderLayout = new QHBoxLayout();
        styleHeaderLayout->setObjectName(QString::fromUtf8("styleHeaderLayout"));
        styleLabel = new QLabel(ProductEdit);
        styleLabel->setObjectName(QString::fromUtf8("styleLabel"));

        styleHeaderLayout->addWidget(styleLabel);

        styleCountSpinBox = new QSpinBox(ProductEdit);
        styleCountSpinBox->setObjectName(QString::fromUtf8("styleCountSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(styleCountSpinBox->sizePolicy().hasHeightForWidth());
        styleCountSpinBox->setSizePolicy(sizePolicy2);
        styleCountSpinBox->setMinimum(0);
        styleCountSpinBox->setMaximum(10);
        styleCountSpinBox->setValue(1);

        styleHeaderLayout->addWidget(styleCountSpinBox);


        styleLayout->addLayout(styleHeaderLayout);

        styleEditLayout = new QVBoxLayout();
        styleEditLayout->setObjectName(QString::fromUtf8("styleEditLayout"));

        styleLayout->addLayout(styleEditLayout);


        gridLayout->addLayout(styleLayout, 2, 0, 1, 1);

        imageInfoLayout = new QHBoxLayout();
        imageInfoLayout->setObjectName(QString::fromUtf8("imageInfoLayout"));
        imageLayout = new QVBoxLayout();
        imageLayout->setObjectName(QString::fromUtf8("imageLayout"));
        productImageLabel = new QLabel(ProductEdit);
        productImageLabel->setObjectName(QString::fromUtf8("productImageLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(productImageLabel->sizePolicy().hasHeightForWidth());
        productImageLabel->setSizePolicy(sizePolicy3);
        productImageLabel->setMinimumSize(QSize(200, 200));
        productImageLabel->setAlignment(Qt::AlignCenter);

        imageLayout->addWidget(productImageLabel);

        selectImageButton = new QPushButton(ProductEdit);
        selectImageButton->setObjectName(QString::fromUtf8("selectImageButton"));

        imageLayout->addWidget(selectImageButton);


        imageInfoLayout->addLayout(imageLayout);

        infoLayout = new QFormLayout();
        infoLayout->setObjectName(QString::fromUtf8("infoLayout"));
        nameLabel = new QLabel(ProductEdit);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        infoLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameEdit = new QLineEdit(ProductEdit);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy4);

        infoLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        priceLabel = new QLabel(ProductEdit);
        priceLabel->setObjectName(QString::fromUtf8("priceLabel"));

        infoLayout->setWidget(1, QFormLayout::LabelRole, priceLabel);

        priceEdit = new QLineEdit(ProductEdit);
        priceEdit->setObjectName(QString::fromUtf8("priceEdit"));
        sizePolicy4.setHeightForWidth(priceEdit->sizePolicy().hasHeightForWidth());
        priceEdit->setSizePolicy(sizePolicy4);

        infoLayout->setWidget(1, QFormLayout::FieldRole, priceEdit);

        stockLabel = new QLabel(ProductEdit);
        stockLabel->setObjectName(QString::fromUtf8("stockLabel"));

        infoLayout->setWidget(2, QFormLayout::LabelRole, stockLabel);

        stockSpinBox = new QSpinBox(ProductEdit);
        stockSpinBox->setObjectName(QString::fromUtf8("stockSpinBox"));

        infoLayout->setWidget(2, QFormLayout::FieldRole, stockSpinBox);

        descriptionLabel = new QLabel(ProductEdit);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));

        infoLayout->setWidget(3, QFormLayout::LabelRole, descriptionLabel);

        descriptionEdit = new QTextEdit(ProductEdit);
        descriptionEdit->setObjectName(QString::fromUtf8("descriptionEdit"));
        sizePolicy3.setHeightForWidth(descriptionEdit->sizePolicy().hasHeightForWidth());
        descriptionEdit->setSizePolicy(sizePolicy3);

        infoLayout->setWidget(3, QFormLayout::FieldRole, descriptionEdit);


        imageInfoLayout->addLayout(infoLayout);


        gridLayout->addLayout(imageInfoLayout, 1, 0, 1, 1);


        retranslateUi(ProductEdit);

        QMetaObject::connectSlotsByName(ProductEdit);
    } // setupUi

    void retranslateUi(QWidget *ProductEdit)
    {
        ProductEdit->setWindowTitle(QCoreApplication::translate("ProductEdit", "\345\225\206\345\223\201\347\274\226\350\276\221", nullptr));
        saveButton->setStyleSheet(QCoreApplication::translate("ProductEdit", "\n"
"       QPushButton {\n"
"           background-color: #FF6A00;\n"
"           color: white;\n"
"           border-radius: 5px;\n"
"           padding: 5px 10px;\n"
"       }\n"
"       QPushButton:hover {\n"
"           background-color: #FF4500;\n"
"       }\n"
"      ", nullptr));
        saveButton->setText(QCoreApplication::translate("ProductEdit", "\344\277\235\345\255\230", nullptr));
        backButton->setStyleSheet(QCoreApplication::translate("ProductEdit", "\n"
"         QPushButton {\n"
"             background-color: transparent;\n"
"             color: #FF6A00;\n"
"             border: none;\n"
"             font-size: 14px;\n"
"         }\n"
"         QPushButton:hover {\n"
"             color: #FF4500;\n"
"             text-decoration: underline;\n"
"         }\n"
"        ", nullptr));
        backButton->setText(QCoreApplication::translate("ProductEdit", "\342\206\220 \350\277\224\345\233\236", nullptr));
        styleLabel->setText(QCoreApplication::translate("ProductEdit", "\346\254\276\345\274\217\346\225\260\351\207\217\357\274\232", nullptr));
        productImageLabel->setStyleSheet(QCoreApplication::translate("ProductEdit", "\n"
"           QLabel {\n"
"               border: 1px solid #DDDDDD;\n"
"               background-color: #F5F5F5;\n"
"           }\n"
"          ", nullptr));
        productImageLabel->setText(QCoreApplication::translate("ProductEdit", "\345\225\206\345\223\201\345\233\276\347\211\207", nullptr));
        selectImageButton->setStyleSheet(QCoreApplication::translate("ProductEdit", "\n"
"           QPushButton {\n"
"               background-color: #FF6A00;\n"
"               color: white;\n"
"               border-radius: 5px;\n"
"               padding: 5px 10px;\n"
"           }\n"
"           QPushButton:hover {\n"
"               background-color: #FF4500;\n"
"           }\n"
"          ", nullptr));
        selectImageButton->setText(QCoreApplication::translate("ProductEdit", "\351\200\211\346\213\251\345\233\276\347\211\207", nullptr));
        nameLabel->setText(QCoreApplication::translate("ProductEdit", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        priceLabel->setText(QCoreApplication::translate("ProductEdit", "\344\273\267\346\240\274\357\274\232", nullptr));
        stockLabel->setText(QCoreApplication::translate("ProductEdit", "\345\272\223\345\255\230\357\274\232", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("ProductEdit", "\346\217\217\350\277\260\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductEdit: public Ui_ProductEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCT_EDIT_H
