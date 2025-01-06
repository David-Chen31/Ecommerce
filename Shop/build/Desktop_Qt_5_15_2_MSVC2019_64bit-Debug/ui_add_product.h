/********************************************************************************
** Form generated from reading UI file 'add_product.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_PRODUCT_H
#define UI_ADD_PRODUCT_H

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

class Ui_AddProduct
{
public:
    QGridLayout *gridLayout;
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
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *submitButton;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *styleLayout;
    QHBoxLayout *styleHeaderLayout;
    QLabel *styleLabel;
    QSpinBox *styleCountSpinBox;
    QVBoxLayout *styleEditLayout;

    void setupUi(QWidget *AddProduct)
    {
        if (AddProduct->objectName().isEmpty())
            AddProduct->setObjectName(QString::fromUtf8("AddProduct"));
        AddProduct->resize(2010, 1060);
        AddProduct->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\346\240\267\345\274\217\357\274\232\347\231\275\350\211\262\350\203\214\346\231\257\357\274\214\346\267\261\347\201\260\350\211\262\345\255\227\344\275\223 */\n"
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
"    padding: 5px;\n"
"}\n"
"\n"
"/* QLineEdit \346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    background-color: #F5F5F5;\n"
"    border: 1px solid #1E90FF; /* \345\244\251\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #63B8FF; /* \350\201\232\347\204\246\346\227\266\346\233\264\344\272\256\347\232\204\345\244\251\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* QTextEdit \346\240\267\345\274\217 */\n"
"QTextEdit {\n"
"    background-color: #F5F5F5;\n"
"   "
                        " border: 1px solid #1E90FF; /* \345\244\251\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QTextEdit:focus {\n"
"    border: 2px solid #63B8FF; /* \350\201\232\347\204\246\346\227\266\346\233\264\344\272\256\347\232\204\345\244\251\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* QSpinBox \346\240\267\345\274\217 */\n"
"QSpinBox {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #1E90FF; /* \345\244\251\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px;\n"
"    padding: 2px 5px;\n"
"}\n"
"\n"
"QSpinBox::up-button, QSpinBox::down-button {\n"
"    background-color: #1E90FF; /* \345\244\251\350\223\235\350\211\262\346\214\211\351\222\256 */\n"
"    border: none;\n"
"    border-radius: 3px;\n"
"    margin: 1px;\n"
"}\n"
"\n"
"QSpinBox::up-button:hover, QSpinBox::down-button:hover {\n"
"    background-color: #63B8FF; /* \346\202\254\346\265\256\346\227\266\346\233\264\344\272\256\347\232\204\345\244\251\350\223\235"
                        "\350\211\262 */\n"
"}\n"
"\n"
"QSpinBox::up-arrow, QSpinBox::down-arrow {\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    image: url(:/Icons/up-arrow.png); /* \346\233\277\346\215\242\344\270\272\344\275\240\345\256\236\351\231\205\347\232\204\345\233\276\346\240\207\350\267\257\345\276\204 */\n"
"}\n"
"\n"
"/* QPushButton \346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    background-color: #1E90FF; /* \345\244\251\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 10px 15px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #63B8FF; /* \346\202\254\346\265\256\346\227\266\346\233\264\344\272\256\347\232\204\345\244\251\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #4682B4; /* \346\214\211\344\270\213\346\227\266\346\233\264\346\267\261\347\232\204\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* \350\277\224\345\233\236\346\214\211\351\222"
                        "\256\346\240\267\345\274\217\357\274\210\345\260\217\346\214\211\351\222\256\357\274\211 */\n"
"QPushButton#backButton {\n"
"    background-color: transparent;\n"
"    color: #1E90FF; /* \345\244\251\350\223\235\350\211\262\345\255\227\344\275\223 */\n"
"    font-size: 18px;\n"
"    border: none;\n"
"    text-align: left;\n"
"}\n"
"\n"
"QPushButton#backButton:hover {\n"
"    color: #63B8FF; /* \346\202\254\346\265\256\346\227\266\346\233\264\344\272\256\347\232\204\345\244\251\350\223\235\350\211\262 */\n"
"    text-decoration: underline;\n"
"}\n"
"\n"
"/* QLabel \347\232\204\345\233\276\347\211\207\345\256\271\345\231\250\346\240\267\345\274\217 */\n"
"QLabel#productImageLabel {\n"
"    border: 1px solid #DDDDDD; /* \347\201\260\350\211\262\350\276\271\346\241\206 */\n"
"    background-color: #F5F5F5; /* \346\265\205\347\201\260\350\211\262\350\203\214\346\231\257 */\n"
"    border-radius: 5px;\n"
"    font-size: 20px;\n"
"    color: #999999; /* \347\201\260\350\211\262\345\255\227\344\275\223 */\n"
"    text"
                        "-align: center;\n"
"}\n"
"\n"
"/* QFormLayout \350\241\250\345\215\225\346\240\207\347\255\276\346\240\267\345\274\217 */\n"
"QFormLayout > QLabel {\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* QVBoxLayout \346\210\226 QHBoxLayout \347\232\204\345\255\220\346\216\247\344\273\266\351\227\264\350\267\235 */\n"
"QVBoxLayout > QWidget, QHBoxLayout > QWidget {\n"
"    margin: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/* QSpacerItem \351\227\264\351\232\224\351\200\217\346\230\216 */\n"
"QSpacerItem {\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"/* QSpinBox \346\240\267\345\274\217 */\n"
"QSpinBox {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #1E90FF; /* \345\244\251\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/* \345\233\276\347\211\207\351\200\211\346\213\251\346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton#selectImageButton {\n"
"    background-color: #1E90FF;\n"
"    color: white;\n"
"    border-ra"
                        "dius: 5px;\n"
"    padding: 8px 15px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton#selectImageButton:hover {\n"
"    background-color: #63B8FF;\n"
"}\n"
"\n"
"/* \344\277\235\345\255\230\346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton#saveButton {\n"
"    background-color: #1E90FF;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 8px 15px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton#saveButton:hover {\n"
"    background-color: #63B8FF;\n"
"}\n"
"\n"
"/* \346\273\232\345\212\250\346\235\241\346\240\267\345\274\217 */\n"
"QScrollBar:vertical {\n"
"    background: #F5F5F5;\n"
"    width: 12px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #1E90FF;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover {\n"
"    background: #63B8FF;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    background: transparent;\n"
"   "
                        " border: none;\n"
"    height: 0px;\n"
"}\n"
""));
        gridLayout = new QGridLayout(AddProduct);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        imageInfoLayout = new QHBoxLayout();
        imageInfoLayout->setObjectName(QString::fromUtf8("imageInfoLayout"));
        imageLayout = new QVBoxLayout();
        imageLayout->setObjectName(QString::fromUtf8("imageLayout"));
        productImageLabel = new QLabel(AddProduct);
        productImageLabel->setObjectName(QString::fromUtf8("productImageLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(productImageLabel->sizePolicy().hasHeightForWidth());
        productImageLabel->setSizePolicy(sizePolicy);
        productImageLabel->setMinimumSize(QSize(200, 200));
        productImageLabel->setScaledContents(true);
        productImageLabel->setAlignment(Qt::AlignCenter);

        imageLayout->addWidget(productImageLabel);

        selectImageButton = new QPushButton(AddProduct);
        selectImageButton->setObjectName(QString::fromUtf8("selectImageButton"));

        imageLayout->addWidget(selectImageButton);


        imageInfoLayout->addLayout(imageLayout);

        infoLayout = new QFormLayout();
        infoLayout->setObjectName(QString::fromUtf8("infoLayout"));
        nameLabel = new QLabel(AddProduct);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        infoLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameEdit = new QLineEdit(AddProduct);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy1);

        infoLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        priceLabel = new QLabel(AddProduct);
        priceLabel->setObjectName(QString::fromUtf8("priceLabel"));

        infoLayout->setWidget(1, QFormLayout::LabelRole, priceLabel);

        priceEdit = new QLineEdit(AddProduct);
        priceEdit->setObjectName(QString::fromUtf8("priceEdit"));
        sizePolicy1.setHeightForWidth(priceEdit->sizePolicy().hasHeightForWidth());
        priceEdit->setSizePolicy(sizePolicy1);

        infoLayout->setWidget(1, QFormLayout::FieldRole, priceEdit);

        stockLabel = new QLabel(AddProduct);
        stockLabel->setObjectName(QString::fromUtf8("stockLabel"));

        infoLayout->setWidget(2, QFormLayout::LabelRole, stockLabel);

        stockSpinBox = new QSpinBox(AddProduct);
        stockSpinBox->setObjectName(QString::fromUtf8("stockSpinBox"));

        infoLayout->setWidget(2, QFormLayout::FieldRole, stockSpinBox);

        descriptionLabel = new QLabel(AddProduct);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));

        infoLayout->setWidget(3, QFormLayout::LabelRole, descriptionLabel);

        descriptionEdit = new QTextEdit(AddProduct);
        descriptionEdit->setObjectName(QString::fromUtf8("descriptionEdit"));
        sizePolicy.setHeightForWidth(descriptionEdit->sizePolicy().hasHeightForWidth());
        descriptionEdit->setSizePolicy(sizePolicy);

        infoLayout->setWidget(3, QFormLayout::FieldRole, descriptionEdit);


        imageInfoLayout->addLayout(infoLayout);


        gridLayout->addLayout(imageInfoLayout, 0, 0, 1, 1);

        widget = new QWidget(AddProduct);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        submitButton = new QPushButton(widget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        sizePolicy2.setHeightForWidth(submitButton->sizePolicy().hasHeightForWidth());
        submitButton->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(submitButton, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout->addWidget(widget, 2, 0, 1, 1);

        styleLayout = new QVBoxLayout();
        styleLayout->setObjectName(QString::fromUtf8("styleLayout"));
        styleHeaderLayout = new QHBoxLayout();
        styleHeaderLayout->setObjectName(QString::fromUtf8("styleHeaderLayout"));
        styleLabel = new QLabel(AddProduct);
        styleLabel->setObjectName(QString::fromUtf8("styleLabel"));

        styleHeaderLayout->addWidget(styleLabel);

        styleCountSpinBox = new QSpinBox(AddProduct);
        styleCountSpinBox->setObjectName(QString::fromUtf8("styleCountSpinBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(styleCountSpinBox->sizePolicy().hasHeightForWidth());
        styleCountSpinBox->setSizePolicy(sizePolicy3);
        styleCountSpinBox->setMinimum(0);
        styleCountSpinBox->setMaximum(10);
        styleCountSpinBox->setValue(1);

        styleHeaderLayout->addWidget(styleCountSpinBox);


        styleLayout->addLayout(styleHeaderLayout);

        styleEditLayout = new QVBoxLayout();
        styleEditLayout->setObjectName(QString::fromUtf8("styleEditLayout"));

        styleLayout->addLayout(styleEditLayout);


        gridLayout->addLayout(styleLayout, 1, 0, 1, 1);


        retranslateUi(AddProduct);

        QMetaObject::connectSlotsByName(AddProduct);
    } // setupUi

    void retranslateUi(QWidget *AddProduct)
    {
        AddProduct->setWindowTitle(QCoreApplication::translate("AddProduct", "\345\225\206\345\223\201\347\274\226\350\276\221", nullptr));
        productImageLabel->setText(QCoreApplication::translate("AddProduct", "\345\225\206\345\223\201\345\233\276\347\211\207", nullptr));
        selectImageButton->setText(QCoreApplication::translate("AddProduct", "\351\200\211\346\213\251\345\233\276\347\211\207", nullptr));
        nameLabel->setText(QCoreApplication::translate("AddProduct", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        priceLabel->setText(QCoreApplication::translate("AddProduct", "\344\273\267\346\240\274\357\274\232", nullptr));
        stockLabel->setText(QCoreApplication::translate("AddProduct", "\345\272\223\345\255\230\357\274\232", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("AddProduct", "\346\217\217\350\277\260\357\274\232", nullptr));
        submitButton->setText(QCoreApplication::translate("AddProduct", "\346\217\220\344\272\244", nullptr));
        styleLabel->setText(QCoreApplication::translate("AddProduct", "\346\254\276\345\274\217\346\225\260\351\207\217\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddProduct: public Ui_AddProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_PRODUCT_H
