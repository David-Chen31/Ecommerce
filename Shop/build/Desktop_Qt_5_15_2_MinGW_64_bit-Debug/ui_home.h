/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QVBoxLayout *mainLayout;
    QHBoxLayout *statsLayout;
    QWidget *orderCard;
    QVBoxLayout *orderCardLayout;
    QLabel *orderTitle;
    QLabel *orderCount;
    QWidget *salesCard;
    QVBoxLayout *salesCardLayout;
    QLabel *salesTitle;
    QLabel *salesAmount;
    QWidget *visitorCard;
    QVBoxLayout *visitorCardLayout;
    QLabel *visitorTitle;
    QLabel *visitorCount;
    QWidget *chartWidget;
    QVBoxLayout *chartLayout;
    QLabel *chartTitle;
    QListWidget *hotSalesList;

    void setupUi(QWidget *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->resize(1726, 902);
        mainLayout = new QVBoxLayout(Home);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        statsLayout = new QHBoxLayout();
        statsLayout->setObjectName(QString::fromUtf8("statsLayout"));
        orderCard = new QWidget(Home);
        orderCard->setObjectName(QString::fromUtf8("orderCard"));
        orderCard->setMinimumSize(QSize(200, 100));
        orderCardLayout = new QVBoxLayout(orderCard);
        orderCardLayout->setObjectName(QString::fromUtf8("orderCardLayout"));
        orderCardLayout->setContentsMargins(0, 0, 0, 0);
        orderTitle = new QLabel(orderCard);
        orderTitle->setObjectName(QString::fromUtf8("orderTitle"));
        orderTitle->setAlignment(Qt::AlignCenter);

        orderCardLayout->addWidget(orderTitle);

        orderCount = new QLabel(orderCard);
        orderCount->setObjectName(QString::fromUtf8("orderCount"));
        orderCount->setAlignment(Qt::AlignCenter);

        orderCardLayout->addWidget(orderCount);


        statsLayout->addWidget(orderCard);

        salesCard = new QWidget(Home);
        salesCard->setObjectName(QString::fromUtf8("salesCard"));
        salesCard->setMinimumSize(QSize(200, 100));
        salesCardLayout = new QVBoxLayout(salesCard);
        salesCardLayout->setObjectName(QString::fromUtf8("salesCardLayout"));
        salesCardLayout->setContentsMargins(0, 0, 0, 0);
        salesTitle = new QLabel(salesCard);
        salesTitle->setObjectName(QString::fromUtf8("salesTitle"));
        salesTitle->setAlignment(Qt::AlignCenter);

        salesCardLayout->addWidget(salesTitle);

        salesAmount = new QLabel(salesCard);
        salesAmount->setObjectName(QString::fromUtf8("salesAmount"));
        salesAmount->setAlignment(Qt::AlignCenter);

        salesCardLayout->addWidget(salesAmount);


        statsLayout->addWidget(salesCard);

        visitorCard = new QWidget(Home);
        visitorCard->setObjectName(QString::fromUtf8("visitorCard"));
        visitorCard->setMinimumSize(QSize(200, 100));
        visitorCardLayout = new QVBoxLayout(visitorCard);
        visitorCardLayout->setObjectName(QString::fromUtf8("visitorCardLayout"));
        visitorCardLayout->setContentsMargins(0, 0, 0, 0);
        visitorTitle = new QLabel(visitorCard);
        visitorTitle->setObjectName(QString::fromUtf8("visitorTitle"));
        visitorTitle->setAlignment(Qt::AlignCenter);

        visitorCardLayout->addWidget(visitorTitle);

        visitorCount = new QLabel(visitorCard);
        visitorCount->setObjectName(QString::fromUtf8("visitorCount"));
        visitorCount->setAlignment(Qt::AlignCenter);

        visitorCardLayout->addWidget(visitorCount);


        statsLayout->addWidget(visitorCard);


        mainLayout->addLayout(statsLayout);

        chartWidget = new QWidget(Home);
        chartWidget->setObjectName(QString::fromUtf8("chartWidget"));
        chartWidget->setMinimumSize(QSize(1200, 500));
        chartLayout = new QVBoxLayout(chartWidget);
        chartLayout->setObjectName(QString::fromUtf8("chartLayout"));
        chartLayout->setContentsMargins(0, 0, 0, 0);
        chartTitle = new QLabel(chartWidget);
        chartTitle->setObjectName(QString::fromUtf8("chartTitle"));
        chartTitle->setAlignment(Qt::AlignCenter);

        chartLayout->addWidget(chartTitle);


        mainLayout->addWidget(chartWidget);

        hotSalesList = new QListWidget(Home);
        hotSalesList->setObjectName(QString::fromUtf8("hotSalesList"));
        hotSalesList->setMinimumSize(QSize(1200, 200));

        mainLayout->addWidget(hotSalesList);


        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QWidget *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "\345\225\206\345\256\266\347\256\241\347\220\206\347\263\273\347\273\237 - \351\246\226\351\241\265", nullptr));
        orderCard->setStyleSheet(QCoreApplication::translate("Home", "\n"
"         QWidget {\n"
"             background-color: #ADD8E6; /* \345\244\251\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"             border-radius: 10px;\n"
"             border: 2px solid #87CEEB; /* \346\267\261\345\244\251\350\223\235\350\276\271\346\241\206 */\n"
"         }\n"
"        ", nullptr));
        orderTitle->setText(QCoreApplication::translate("Home", "\344\273\212\346\227\245\350\256\242\345\215\225\346\225\260", nullptr));
        orderTitle->setStyleSheet(QCoreApplication::translate("Home", "\n"
"            QLabel {\n"
"                font-size: 14px;\n"
"                font-weight: bold;\n"
"                color: #333333;\n"
"            }\n"
"           ", nullptr));
        orderCount->setText(QCoreApplication::translate("Home", "256", nullptr));
        orderCount->setStyleSheet(QCoreApplication::translate("Home", "\n"
"            QLabel {\n"
"                font-size: 24px;\n"
"                font-weight: bold;\n"
"                color: #FF4500;\n"
"            }\n"
"           ", nullptr));
        salesCard->setStyleSheet(QCoreApplication::translate("Home", "\n"
"         QWidget {\n"
"             background-color: #ADD8E6;\n"
"             border-radius: 10px;\n"
"             border: 2px solid #87CEEB;\n"
"         }\n"
"        ", nullptr));
        salesTitle->setText(QCoreApplication::translate("Home", "\344\273\212\346\227\245\351\224\200\345\224\256\351\242\235", nullptr));
        salesTitle->setStyleSheet(QCoreApplication::translate("Home", "\n"
"            QLabel {\n"
"                font-size: 14px;\n"
"                font-weight: bold;\n"
"                color: #333333;\n"
"            }\n"
"           ", nullptr));
        salesAmount->setText(QCoreApplication::translate("Home", "\302\24512,345.00", nullptr));
        salesAmount->setStyleSheet(QCoreApplication::translate("Home", "\n"
"            QLabel {\n"
"                font-size: 24px;\n"
"                font-weight: bold;\n"
"                color: #FF4500;\n"
"            }\n"
"           ", nullptr));
        visitorCard->setStyleSheet(QCoreApplication::translate("Home", "\n"
"         QWidget {\n"
"             background-color: #ADD8E6;\n"
"             border-radius: 10px;\n"
"             border: 2px solid #87CEEB;\n"
"         }\n"
"        ", nullptr));
        visitorTitle->setText(QCoreApplication::translate("Home", "\344\273\212\346\227\245\350\256\277\345\256\242\346\225\260", nullptr));
        visitorTitle->setStyleSheet(QCoreApplication::translate("Home", "\n"
"            QLabel {\n"
"                font-size: 14px;\n"
"                font-weight: bold;\n"
"                color: #333333;\n"
"            }\n"
"           ", nullptr));
        visitorCount->setText(QCoreApplication::translate("Home", "489", nullptr));
        visitorCount->setStyleSheet(QCoreApplication::translate("Home", "\n"
"            QLabel {\n"
"                font-size: 24px;\n"
"                font-weight: bold;\n"
"                color: #FF4500;\n"
"            }\n"
"           ", nullptr));
        chartWidget->setStyleSheet(QCoreApplication::translate("Home", "\n"
"       QWidget {\n"
"           background-color: #FFFFFF;\n"
"           border: 1px solid #87CEEB;\n"
"           border-radius: 10px;\n"
"       }\n"
"      ", nullptr));
        chartTitle->setText(QCoreApplication::translate("Home", "\351\224\200\345\224\256\350\266\213\345\212\277\345\233\276", nullptr));
        chartTitle->setStyleSheet(QCoreApplication::translate("Home", "\n"
"          QLabel {\n"
"              font-size: 16px;\n"
"              font-weight: bold;\n"
"              color: #333333;\n"
"          }\n"
"         ", nullptr));
        hotSalesList->setStyleSheet(QCoreApplication::translate("Home", "\n"
"       QListWidget {\n"
"           background-color: #FFF2E6;\n"
"           border: 1px solid #FF6A00;\n"
"           border-radius: 10px;\n"
"           padding: 5px;\n"
"           font-size: 14px;\n"
"           color: #333333;\n"
"       }\n"
"       QListWidget::item {\n"
"           padding: 5px;\n"
"           border-bottom: 1px solid #FFEDD6;\n"
"       }\n"
"       QListWidget::item:hover {\n"
"           background-color: #FFEDD6;\n"
"       }\n"
"      ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
