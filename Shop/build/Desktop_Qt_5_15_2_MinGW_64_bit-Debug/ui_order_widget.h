/********************************************************************************
** Form generated from reading UI file 'order_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_WIDGET_H
#define UI_ORDER_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderWidget
{
public:
    QHBoxLayout *mainLayout;
    QLabel *productImage;
    QVBoxLayout *detailsLayout;
    QLabel *orderTitle;
    QLabel *customerInfo;
    QLabel *productInfo;
    QLabel *orderAmount;
    QLabel *orderStatus;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *buttonLayout;
    QPushButton *viewDetailsButton;
    QPushButton *changeStatusButton;

    void setupUi(QWidget *OrderWidget)
    {
        if (OrderWidget->objectName().isEmpty())
            OrderWidget->setObjectName(QString::fromUtf8("OrderWidget"));
        OrderWidget->resize(1700, 220);
        OrderWidget->setMinimumSize(QSize(1700, 220));
        mainLayout = new QHBoxLayout(OrderWidget);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        productImage = new QLabel(OrderWidget);
        productImage->setObjectName(QString::fromUtf8("productImage"));
        productImage->setMinimumSize(QSize(150, 150));
        productImage->setPixmap(QPixmap(QString::fromUtf8(":/Images/example_product.jpg")));
        productImage->setScaledContents(true);

        mainLayout->addWidget(productImage);

        detailsLayout = new QVBoxLayout();
        detailsLayout->setObjectName(QString::fromUtf8("detailsLayout"));
        orderTitle = new QLabel(OrderWidget);
        orderTitle->setObjectName(QString::fromUtf8("orderTitle"));

        detailsLayout->addWidget(orderTitle);

        customerInfo = new QLabel(OrderWidget);
        customerInfo->setObjectName(QString::fromUtf8("customerInfo"));

        detailsLayout->addWidget(customerInfo);

        productInfo = new QLabel(OrderWidget);
        productInfo->setObjectName(QString::fromUtf8("productInfo"));

        detailsLayout->addWidget(productInfo);

        orderAmount = new QLabel(OrderWidget);
        orderAmount->setObjectName(QString::fromUtf8("orderAmount"));

        detailsLayout->addWidget(orderAmount);

        orderStatus = new QLabel(OrderWidget);
        orderStatus->setObjectName(QString::fromUtf8("orderStatus"));

        detailsLayout->addWidget(orderStatus);


        mainLayout->addLayout(detailsLayout);

        horizontalSpacer = new QSpacerItem(200, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        mainLayout->addItem(horizontalSpacer);

        buttonLayout = new QVBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        viewDetailsButton = new QPushButton(OrderWidget);
        viewDetailsButton->setObjectName(QString::fromUtf8("viewDetailsButton"));

        buttonLayout->addWidget(viewDetailsButton);

        changeStatusButton = new QPushButton(OrderWidget);
        changeStatusButton->setObjectName(QString::fromUtf8("changeStatusButton"));

        buttonLayout->addWidget(changeStatusButton);


        mainLayout->addLayout(buttonLayout);


        retranslateUi(OrderWidget);

        QMetaObject::connectSlotsByName(OrderWidget);
    } // setupUi

    void retranslateUi(QWidget *OrderWidget)
    {
        productImage->setStyleSheet(QCoreApplication::translate("OrderWidget", "\n"
"       QLabel {\n"
"           border: 1px solid #DDDDDD;\n"
"           border-radius: 5px;\n"
"       }\n"
"      ", nullptr));
        orderTitle->setStyleSheet(QCoreApplication::translate("OrderWidget", "\n"
"         QLabel {\n"
"             font-size: 20px;\n"
"             font-weight: bold;\n"
"             color: #333333;\n"
"         }\n"
"        ", nullptr));
        orderTitle->setText(QCoreApplication::translate("OrderWidget", "\350\256\242\345\215\225\347\274\226\345\217\267\357\274\232123456", nullptr));
        customerInfo->setStyleSheet(QCoreApplication::translate("OrderWidget", "\n"
"         QLabel {\n"
"             font-size: 18px;\n"
"             color: #666666;\n"
"         }\n"
"        ", nullptr));
        customerInfo->setText(QCoreApplication::translate("OrderWidget", "\345\256\242\346\210\267\357\274\232\345\274\240\344\270\211 | \350\201\224\347\263\273\346\226\271\345\274\217\357\274\23212345678910", nullptr));
        productInfo->setStyleSheet(QCoreApplication::translate("OrderWidget", "\n"
"         QLabel {\n"
"             font-size: 18px;\n"
"             color: #666666;\n"
"         }\n"
"        ", nullptr));
        productInfo->setText(QCoreApplication::translate("OrderWidget", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232\345\225\206\345\223\201\347\244\272\344\276\213 | \346\225\260\351\207\217\357\274\2322", nullptr));
        orderAmount->setStyleSheet(QCoreApplication::translate("OrderWidget", "\n"
"         QLabel {\n"
"             font-size: 18px;\n"
"             color: #666666;\n"
"         }\n"
"        ", nullptr));
        orderAmount->setText(QCoreApplication::translate("OrderWidget", "\350\256\242\345\215\225\351\207\221\351\242\235\357\274\232\302\245200.00 | \344\274\230\346\203\240\357\274\232\302\24520.00 | \345\256\236\344\273\230\357\274\232\302\245180.00", nullptr));
        orderStatus->setStyleSheet(QCoreApplication::translate("OrderWidget", "\n"
"         QLabel {\n"
"             font-size: 18px;\n"
"             color: #FF6A00;\n"
"         }\n"
"        ", nullptr));
        orderStatus->setText(QCoreApplication::translate("OrderWidget", "\350\256\242\345\215\225\347\212\266\346\200\201\357\274\232\345\267\262\345\217\221\350\264\247", nullptr));
        viewDetailsButton->setStyleSheet(QCoreApplication::translate("OrderWidget", "\n"
"         QPushButton {\n"
"             background-color: #FF6A00;\n"
"             color: white;\n"
"             font-size: 18px;\n"
"             border-radius: 5px;\n"
"             padding: 8px 16px;\n"
"         }\n"
"         QPushButton:hover {\n"
"             background-color: #FF4500;\n"
"         }\n"
"        ", nullptr));
        viewDetailsButton->setText(QCoreApplication::translate("OrderWidget", "\346\237\245\347\234\213\350\257\246\346\203\205", nullptr));
        changeStatusButton->setStyleSheet(QCoreApplication::translate("OrderWidget", "\n"
"         QPushButton {\n"
"             background-color: #FF6A00;\n"
"             color: white;\n"
"             font-size: 18px;\n"
"             border-radius: 5px;\n"
"             padding: 8px 16px;\n"
"         }\n"
"         QPushButton:hover {\n"
"             background-color: #FF4500;\n"
"         }\n"
"        ", nullptr));
        changeStatusButton->setText(QCoreApplication::translate("OrderWidget", "\344\277\256\346\224\271\347\212\266\346\200\201", nullptr));
        (void)OrderWidget;
    } // retranslateUi

};

namespace Ui {
    class OrderWidget: public Ui_OrderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_WIDGET_H
