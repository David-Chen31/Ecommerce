/********************************************************************************
** Form generated from reading UI file 'product_overview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCT_OVERVIEW_H
#define UI_PRODUCT_OVERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductOverview
{
public:
    QVBoxLayout *mainLayout;
    QHBoxLayout *searchLayout;
    QLineEdit *searchBox;
    QPushButton *filterButton;
    QScrollArea *productScrollArea;
    QWidget *scrollContent;
    QGridLayout *productGridLayout;

    void setupUi(QWidget *ProductOverview)
    {
        if (ProductOverview->objectName().isEmpty())
            ProductOverview->setObjectName(QString::fromUtf8("ProductOverview"));
        ProductOverview->resize(1726, 902);
        mainLayout = new QVBoxLayout(ProductOverview);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        searchLayout = new QHBoxLayout();
        searchLayout->setObjectName(QString::fromUtf8("searchLayout"));
        searchBox = new QLineEdit(ProductOverview);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));

        searchLayout->addWidget(searchBox);

        filterButton = new QPushButton(ProductOverview);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));

        searchLayout->addWidget(filterButton);


        mainLayout->addLayout(searchLayout);

        productScrollArea = new QScrollArea(ProductOverview);
        productScrollArea->setObjectName(QString::fromUtf8("productScrollArea"));
        productScrollArea->setWidgetResizable(true);
        scrollContent = new QWidget();
        scrollContent->setObjectName(QString::fromUtf8("scrollContent"));
        productGridLayout = new QGridLayout(scrollContent);
        productGridLayout->setObjectName(QString::fromUtf8("productGridLayout"));
        productScrollArea->setWidget(scrollContent);

        mainLayout->addWidget(productScrollArea);


        retranslateUi(ProductOverview);

        QMetaObject::connectSlotsByName(ProductOverview);
    } // setupUi

    void retranslateUi(QWidget *ProductOverview)
    {
        ProductOverview->setWindowTitle(QCoreApplication::translate("ProductOverview", "\345\225\206\345\223\201\346\200\273\350\247\210", nullptr));
        searchBox->setPlaceholderText(QCoreApplication::translate("ProductOverview", "\346\220\234\347\264\242\345\225\206\345\223\201...", nullptr));
        searchBox->setStyleSheet(QCoreApplication::translate("ProductOverview", "\n"
"         QLineEdit {\n"
"             background-color: #FFFFFF;\n"
"             border: 1px solid #FF6A00;\n"
"             border-radius: 5px;\n"
"             padding: 5px;\n"
"             font-size: 14px;\n"
"         }\n"
"        ", nullptr));
        filterButton->setText(QCoreApplication::translate("ProductOverview", "\347\255\233\351\200\211", nullptr));
        filterButton->setStyleSheet(QCoreApplication::translate("ProductOverview", "\n"
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
    } // retranslateUi

};

namespace Ui {
    class ProductOverview: public Ui_ProductOverview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCT_OVERVIEW_H
