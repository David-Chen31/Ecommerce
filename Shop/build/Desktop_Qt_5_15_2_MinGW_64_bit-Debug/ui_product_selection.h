/********************************************************************************
** Form generated from reading UI file 'product_selection.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCT_SELECTION_H
#define UI_PRODUCT_SELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductSelection
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *searchLayout;
    QLineEdit *searchBox;
    QPushButton *searchButton;
    QScrollArea *productScrollArea;
    QWidget *productListWidget;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *confirmSelectionButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ProductSelection)
    {
        if (ProductSelection->objectName().isEmpty())
            ProductSelection->setObjectName(QString::fromUtf8("ProductSelection"));
        ProductSelection->resize(1200, 800);
        gridLayout = new QGridLayout(ProductSelection);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        searchLayout = new QHBoxLayout();
        searchLayout->setObjectName(QString::fromUtf8("searchLayout"));
        searchBox = new QLineEdit(ProductSelection);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));

        searchLayout->addWidget(searchBox);

        searchButton = new QPushButton(ProductSelection);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        searchLayout->addWidget(searchButton);


        gridLayout->addLayout(searchLayout, 0, 0, 1, 1);

        productScrollArea = new QScrollArea(ProductSelection);
        productScrollArea->setObjectName(QString::fromUtf8("productScrollArea"));
        productScrollArea->setWidgetResizable(true);
        productListWidget = new QWidget();
        productListWidget->setObjectName(QString::fromUtf8("productListWidget"));
        productListWidget->setGeometry(QRect(0, 0, 1186, 691));
        productScrollArea->setWidget(productListWidget);

        gridLayout->addWidget(productScrollArea, 1, 0, 1, 1);

        widget = new QWidget(ProductSelection);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        confirmSelectionButton = new QPushButton(widget);
        confirmSelectionButton->setObjectName(QString::fromUtf8("confirmSelectionButton"));

        gridLayout_2->addWidget(confirmSelectionButton, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout->addWidget(widget, 2, 0, 1, 1);


        retranslateUi(ProductSelection);

        QMetaObject::connectSlotsByName(ProductSelection);
    } // setupUi

    void retranslateUi(QWidget *ProductSelection)
    {
        ProductSelection->setWindowTitle(QCoreApplication::translate("ProductSelection", "\345\225\206\345\223\201\351\200\211\346\213\251", nullptr));
        searchBox->setStyleSheet(QCoreApplication::translate("ProductSelection", "\n"
"         QLineEdit {\n"
"             background-color: #FFFFFF;\n"
"             border: 1px solid #FF6A00;\n"
"             border-radius: 5px;\n"
"             padding: 5px;\n"
"             font-size: 14px;\n"
"         }\n"
"        ", nullptr));
        searchBox->setPlaceholderText(QCoreApplication::translate("ProductSelection", "\350\276\223\345\205\245\345\225\206\345\223\201\345\220\215\347\247\260\346\210\226\345\205\263\351\224\256\350\257\215\350\277\233\350\241\214\346\220\234\347\264\242...", nullptr));
        searchButton->setStyleSheet(QCoreApplication::translate("ProductSelection", "\n"
"         QPushButton {\n"
"             background-color: #FF6A00;\n"
"             color: white;\n"
"             border-radius: 5px;\n"
"             padding: 5px 10px;\n"
"         }\n"
"         QPushButton:hover {\n"
"             background-color: #FF4500;\n"
"         }\n"
"        ", nullptr));
        searchButton->setText(QCoreApplication::translate("ProductSelection", "\346\220\234\347\264\242", nullptr));
        confirmSelectionButton->setStyleSheet(QCoreApplication::translate("ProductSelection", "\n"
"       QPushButton {\n"
"           background-color: #FF6A00;\n"
"           color: white;\n"
"           border-radius: 5px;\n"
"           padding: 10px 20px;\n"
"           font-size: 16px;\n"
"       }\n"
"       QPushButton:hover {\n"
"           background-color: #FF4500;\n"
"       }\n"
"      ", nullptr));
        confirmSelectionButton->setText(QCoreApplication::translate("ProductSelection", "\347\241\256\350\256\244\351\200\211\346\213\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductSelection: public Ui_ProductSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCT_SELECTION_H
