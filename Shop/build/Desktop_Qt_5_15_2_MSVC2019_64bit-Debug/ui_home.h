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
    QVBoxLayout *orderCardLayout;
    QLabel *orderTitle;
    QLabel *orderCount;
    QVBoxLayout *salesCardLayout;
    QLabel *salesTitle;
    QLabel *salesAmount;
    QVBoxLayout *visitorCardLayout;
    QLabel *visitorTitle;
    QLabel *visitorCount;
    QVBoxLayout *chartLayout;
    QLabel *chartTitle;
    QListWidget *hotSalesList;

    void setupUi(QWidget *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->resize(2010, 1060);
        Home->setStyleSheet(QString::fromUtf8("/* \350\256\276\347\275\256\345\205\250\345\261\200\350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262 */\n"
"QWidget {\n"
"    background-color: #FFFFFF;\n"
"    font-size: 20px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"/* QVBoxLayout \345\222\214 QHBoxLayout \350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"QVBoxLayout, QHBoxLayout {\n"
"    background: transparent;\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256 QLabel \346\226\207\345\255\227\347\232\204\346\240\267\345\274\217 */\n"
"QLabel {\n"
"    font-size: 20px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\346\240\207\351\242\230\346\240\207\347\255\276\347\232\204\346\240\267\345\274\217 */\n"
"QLabel#orderTitle, QLabel#salesTitle, QLabel#visitorTitle, QLabel#chartTitle {\n"
"    font-size: 22px;\n"
"    font-weight: bold;\n"
"    color: #1E90FF; /* \345\244\251\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\345\206\205\345\256\271\346\240\207\347\255\276\347\232\204\346\240\267\345\274"
                        "\217 */\n"
"QLabel#orderCount, QLabel#salesAmount, QLabel#visitorCount {\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    color: #1E90FF; /* \345\244\251\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256 QListWidget \346\240\267\345\274\217 */\n"
"QListWidget {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #1E90FF;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    font-size: 20px;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"    padding: 10px;\n"
"    border-bottom: 1px solid #1E90FF;\n"
"}\n"
"\n"
"QListWidget::item:hover {\n"
"    background-color: #E6F7FF;\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217\357\274\210\345\246\202\346\236\234\346\234\211\347\232\204\350\257\235\357\274\211 */\n"
"QPushButton {\n"
"    background-color: #1E90FF;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #63B8FF;"
                        "\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #4682B4;\n"
"}\n"
""));
        mainLayout = new QVBoxLayout(Home);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        statsLayout = new QHBoxLayout();
        statsLayout->setObjectName(QString::fromUtf8("statsLayout"));
        orderCardLayout = new QVBoxLayout();
        orderCardLayout->setObjectName(QString::fromUtf8("orderCardLayout"));
        orderTitle = new QLabel(Home);
        orderTitle->setObjectName(QString::fromUtf8("orderTitle"));
        QFont font;
        font.setBold(true);
        orderTitle->setFont(font);
        orderTitle->setAlignment(Qt::AlignCenter);

        orderCardLayout->addWidget(orderTitle);

        orderCount = new QLabel(Home);
        orderCount->setObjectName(QString::fromUtf8("orderCount"));
        orderCount->setFont(font);
        orderCount->setAlignment(Qt::AlignCenter);

        orderCardLayout->addWidget(orderCount);


        statsLayout->addLayout(orderCardLayout);

        salesCardLayout = new QVBoxLayout();
        salesCardLayout->setObjectName(QString::fromUtf8("salesCardLayout"));
        salesTitle = new QLabel(Home);
        salesTitle->setObjectName(QString::fromUtf8("salesTitle"));
        salesTitle->setFont(font);
        salesTitle->setAlignment(Qt::AlignCenter);

        salesCardLayout->addWidget(salesTitle);

        salesAmount = new QLabel(Home);
        salesAmount->setObjectName(QString::fromUtf8("salesAmount"));
        salesAmount->setFont(font);
        salesAmount->setAlignment(Qt::AlignCenter);

        salesCardLayout->addWidget(salesAmount);


        statsLayout->addLayout(salesCardLayout);

        visitorCardLayout = new QVBoxLayout();
        visitorCardLayout->setObjectName(QString::fromUtf8("visitorCardLayout"));
        visitorTitle = new QLabel(Home);
        visitorTitle->setObjectName(QString::fromUtf8("visitorTitle"));
        visitorTitle->setFont(font);
        visitorTitle->setAlignment(Qt::AlignCenter);

        visitorCardLayout->addWidget(visitorTitle);

        visitorCount = new QLabel(Home);
        visitorCount->setObjectName(QString::fromUtf8("visitorCount"));
        visitorCount->setFont(font);
        visitorCount->setAlignment(Qt::AlignCenter);

        visitorCardLayout->addWidget(visitorCount);


        statsLayout->addLayout(visitorCardLayout);


        mainLayout->addLayout(statsLayout);

        chartLayout = new QVBoxLayout();
        chartLayout->setObjectName(QString::fromUtf8("chartLayout"));
        chartTitle = new QLabel(Home);
        chartTitle->setObjectName(QString::fromUtf8("chartTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chartTitle->sizePolicy().hasHeightForWidth());
        chartTitle->setSizePolicy(sizePolicy);
        chartTitle->setFont(font);
        chartTitle->setAlignment(Qt::AlignCenter);

        chartLayout->addWidget(chartTitle);


        mainLayout->addLayout(chartLayout);

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
        orderTitle->setText(QCoreApplication::translate("Home", "\344\273\212\346\227\245\350\256\242\345\215\225\346\225\260", nullptr));
        orderCount->setText(QCoreApplication::translate("Home", "256", nullptr));
        salesTitle->setText(QCoreApplication::translate("Home", "\344\273\212\346\227\245\351\224\200\345\224\256\351\242\235", nullptr));
        salesAmount->setText(QCoreApplication::translate("Home", "\302\24512,345.00", nullptr));
        visitorTitle->setText(QCoreApplication::translate("Home", "\344\273\212\346\227\245\350\256\277\345\256\242\346\225\260", nullptr));
        visitorCount->setText(QCoreApplication::translate("Home", "489", nullptr));
        chartTitle->setText(QCoreApplication::translate("Home", "\351\224\200\345\224\256\350\266\213\345\212\277\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
