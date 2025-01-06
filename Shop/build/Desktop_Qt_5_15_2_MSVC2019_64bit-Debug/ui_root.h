/********************************************************************************
** Form generated from reading UI file 'root.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOT_H
#define UI_ROOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Root
{
public:
    QVBoxLayout *mainLayout;
    QHBoxLayout *topLayout;
    QLabel *merchantAvatar;
    QLabel *merchantName;
    QLineEdit *searchBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *refreshButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *logoutButton;
    QHBoxLayout *centerLayout;
    QTreeWidget *menuTree;
    QWidget *contentWidget;
    QHBoxLayout *statusLayout;
    QLabel *statusLabel;
    QLabel *copyrightLabel;
    QPushButton *helpButton;

    void setupUi(QWidget *Root)
    {
        if (Root->objectName().isEmpty())
            Root->setObjectName(QString::fromUtf8("Root"));
        Root->resize(2300, 1200);
        Root->setMouseTracking(true);
        Root->setStyleSheet(QString::fromUtf8("/* \345\205\250\345\261\200\350\203\214\346\231\257\350\211\262\344\270\272\347\231\275\350\211\262\357\274\214\345\255\227\344\275\223\351\242\234\350\211\262\344\270\272\346\267\261\347\201\260\350\211\262\357\274\214\345\255\227\344\275\223\345\244\247\345\260\217\344\270\27220 */\n"
"QWidget {\n"
"    background-color: #FFFFFF;\n"
"    font-size: 20px;\n"
"    color: #333333;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256QLabel\347\232\204\345\237\272\346\234\254\346\240\267\345\274\217 */\n"
"QLabel {\n"
"    font-size: 20px;\n"
"    color: #333333;\n"
"    font-weight: normal;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\346\240\207\351\242\230\346\240\207\347\255\276\347\232\204\346\240\267\345\274\217 */\n"
"QLabel#merchantName {\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    color: #1E90FF; /* \345\244\251\350\223\235\350\211\262 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\350\217\234\345\215\225\346\240\221\357\274\210QTree"
                        "Widget\357\274\211 */\n"
"QTreeWidget {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #1E90FF;\n"
"    border-radius: 10px;\n"
"    padding: 15px;\n"
"    font-size: 20px;\n"
"    font-weight: normal;\n"
"    color: #333333;\n"
"}\n"
"\n"
"\n"
"QTreeWidget::item {\n"
"\n"
"    padding: 12px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QTreeWidget::item:hover {\n"
"\n"
"    background-color: #E6F7FF;  /* \346\202\254\346\265\256\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"\n"
"    border-color: #1E90FF;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QTreeWidget::item:selected {\n"
"\n"
"    background-color: #1E90FF;\n"
"\n"
"    color: white;\n"
"\n"
"    border-color: #1E90FF;\n"
"\n"
"}\n"
"\n"
"\n"
"/* \350\256\276\347\275\256QTreeWidget\351\241\271\351\273\230\350\256\244\346\240\267\345\274\217 */\n"
"QTreeWidget::item {\n"
"    font-size: 20px;\n"
"    padding: 12px;\n"
"    min-height: 40px; /* \345\242\236\345\212\240\346\257\217\351\241\271\347\232\204\351\253\230\345\272\246 */\n"
"    backgro"
                        "und-color: transparent; /* \351\273\230\350\256\244\350\203\214\346\231\257\351\200\217\346\230\216 */\n"
"    color: #333333; /* \351\273\230\350\256\244\345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"\n"
"    margin-bottom: 10px;\n"
"    border-radius: 5px;\n"
"    border-bottom: 1px solid #e0e0e0;\n"
"}\n"
"\n"
"\n"
"\n"
"/* \350\256\276\347\275\256QLineEdit\357\274\210\346\220\234\347\264\242\346\241\206\357\274\211\347\232\204\346\240\267\345\274\217 */\n"
"QLineEdit {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #1E90FF;\n"
"    border-radius: 5px;\n"
"    padding: 8px;\n"
"    font-size: 20px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #63B8FF;\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256QPushButton\357\274\210\346\214\211\351\222\256\357\274\211\347\232\204\346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    background-color: #1E90FF;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 12px 20px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
""
                        "    min-width: 120px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #63B8FF;  /* \346\202\254\346\265\256\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #4682B4;  /* \346\214\211\344\270\213\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\347\212\266\346\200\201\346\240\207\347\255\276\347\232\204\346\240\267\345\274\217 */\n"
"QLabel#statusLabel {\n"
"    font-size: 20px;\n"
"    color: #333333;\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\347\211\210\346\235\203\346\240\207\347\255\276\347\232\204\346\240\267\345\274\217 */\n"
"QLabel#copyrightLabel {\n"
"    font-size: 20px;\n"
"    color: #AAAAAA;\n"
"    text-align: center;\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\346\260\264\345\271\263\351\227\264\351\232\224\347\232\204\346\240\267\345\274\217 */\n"
"QSpacerItem {\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\351\200\200"
                        "\345\207\272\347\231\273\345\275\225\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"QPushButton#logoutButton {\n"
"    background-color: #1E90FF;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    padding: 10px 20px;\n"
"    font-size: 20px;\n"
"}\n"
"\n"
"QPushButton#logoutButton:hover {\n"
"    background-color: #63B8FF;  /* \346\202\254\346\265\256\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\345\270\256\345\212\251\346\214\211\351\222\256\347\232\204\346\240\267\345\274\217 */\n"
"QPushButton#helpButton {\n"
"    background-color: transparent;\n"
"    font-size: 20px;\n"
"    color: #1E90FF;\n"
"}\n"
"\n"
"QPushButton#helpButton:hover {\n"
"    text-decoration: underline;\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\346\225\264\344\270\252\347\252\227\345\217\243\347\232\204\351\230\264\345\275\261\346\225\210\346\236\234 */\n"
"\n"
"/* \350\256\276\347\275\256QTreeWidget\347\232\204\345\255\227\344\275\223\345\222\214\351"
                        "\200\211\351\241\271 */\n"
"QTreeWidget::item {\n"
"    font-size: 20px;\n"
"    padding: 10px;\n"
"    min-height: 40px;  /* \345\242\236\345\212\240\346\257\217\351\241\271\347\232\204\351\253\230\345\272\246\357\274\214\344\275\277\345\205\266\346\233\264\345\212\240\345\210\206\346\225\243 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256QTreeWidget\351\241\271\347\232\204\351\200\211\344\270\255\346\225\210\346\236\234 */\n"
"QTreeWidget::item:selected {\n"
"    background-color: #1E90FF;  /* \351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\350\211\262 */\n"
"    color: white;  /* \351\200\211\344\270\255\346\227\266\346\226\207\345\255\227\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256QLabel\347\232\204\345\233\276\346\240\207\346\230\276\347\244\272 */\n"
"QLabel#merchantAvatar {\n"
"    border-radius: 25px;\n"
"    border: 2px solid #1E90FF;\n"
"}\n"
"\n"
"/* \347\212\266\346\200\201\346\240\217\346\240\267\345\274\217 */\n"
"QHBoxLayout#statusLayout {\n"
"    background-"
                        "color: #F0F8FF;\n"
"    border-top: 1px solid #1E90FF;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\346\214\211\351\222\256\345\222\214\346\240\207\347\255\276\347\232\204\345\234\206\350\247\222\346\225\210\346\236\234 */\n"
"QPushButton, QLabel {\n"
"    border-radius: 10px;\n"
"}\n"
""));
        mainLayout = new QVBoxLayout(Root);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        topLayout = new QHBoxLayout();
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        merchantAvatar = new QLabel(Root);
        merchantAvatar->setObjectName(QString::fromUtf8("merchantAvatar"));
        merchantAvatar->setMinimumSize(QSize(50, 50));
        merchantAvatar->setPixmap(QPixmap(QString::fromUtf8(":/Images/business.jpg")));
        merchantAvatar->setScaledContents(true);

        topLayout->addWidget(merchantAvatar);

        merchantName = new QLabel(Root);
        merchantName->setObjectName(QString::fromUtf8("merchantName"));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setBold(true);
        merchantName->setFont(font);

        topLayout->addWidget(merchantName);

        searchBox = new QLineEdit(Root);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchBox->sizePolicy().hasHeightForWidth());
        searchBox->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        searchBox->setFont(font1);

        topLayout->addWidget(searchBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Minimum);

        topLayout->addItem(horizontalSpacer);

        refreshButton = new QPushButton(Root);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));

        topLayout->addWidget(refreshButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        topLayout->addItem(horizontalSpacer_2);

        logoutButton = new QPushButton(Root);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setFont(font);

        topLayout->addWidget(logoutButton);


        mainLayout->addLayout(topLayout);

        centerLayout = new QHBoxLayout();
        centerLayout->setObjectName(QString::fromUtf8("centerLayout"));
        menuTree = new QTreeWidget(Root);
        new QTreeWidgetItem(menuTree);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(menuTree);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(menuTree);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(menuTree);
        new QTreeWidgetItem(menuTree);
        new QTreeWidgetItem(menuTree);
        new QTreeWidgetItem(menuTree);
        menuTree->setObjectName(QString::fromUtf8("menuTree"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(menuTree->sizePolicy().hasHeightForWidth());
        menuTree->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setBold(false);
        menuTree->setFont(font2);
        menuTree->setMouseTracking(true);
        menuTree->setHeaderHidden(true);

        centerLayout->addWidget(menuTree);

        contentWidget = new QWidget(Root);
        contentWidget->setObjectName(QString::fromUtf8("contentWidget"));

        centerLayout->addWidget(contentWidget);


        mainLayout->addLayout(centerLayout);

        statusLayout = new QHBoxLayout();
        statusLayout->setObjectName(QString::fromUtf8("statusLayout"));
        statusLabel = new QLabel(Root);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy2);
        statusLabel->setMinimumSize(QSize(0, 50));
        statusLabel->setFont(font2);

        statusLayout->addWidget(statusLabel);

        copyrightLabel = new QLabel(Root);
        copyrightLabel->setObjectName(QString::fromUtf8("copyrightLabel"));
        copyrightLabel->setFont(font2);
        copyrightLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        statusLayout->addWidget(copyrightLabel);

        helpButton = new QPushButton(Root);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setFont(font);

        statusLayout->addWidget(helpButton);


        mainLayout->addLayout(statusLayout);


        retranslateUi(Root);

        QMetaObject::connectSlotsByName(Root);
    } // setupUi

    void retranslateUi(QWidget *Root)
    {
        Root->setWindowTitle(QCoreApplication::translate("Root", "\345\225\206\345\256\266\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        merchantName->setText(QCoreApplication::translate("Root", "\345\225\206\345\256\266\345\220\215\347\247\260", nullptr));
        searchBox->setPlaceholderText(QCoreApplication::translate("Root", "\346\220\234\347\264\242\345\225\206\345\223\201\343\200\201\350\256\242\345\215\225\346\210\226\345\256\242\346\210\267", nullptr));
        refreshButton->setText(QCoreApplication::translate("Root", "\345\210\267\346\226\260", nullptr));
        logoutButton->setText(QCoreApplication::translate("Root", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = menuTree->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("Root", "\350\217\234\345\215\225", nullptr));

        const bool __sortingEnabled = menuTree->isSortingEnabled();
        menuTree->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = menuTree->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("Root", "\351\246\226\351\241\265", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = menuTree->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("Root", "\345\225\206\345\223\201\347\256\241\347\220\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("Root", "\345\225\206\345\223\201\346\200\273\350\247\210", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem2->child(1);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("Root", "\345\242\236\345\212\240\345\225\206\345\223\201", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = menuTree->topLevelItem(2);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("Root", "\344\277\203\351\224\200\347\256\241\347\220\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("Root", "\345\225\206\345\223\201\351\200\211\346\213\251", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem5->child(1);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("Root", "\346\212\230\346\211\243\350\256\276\347\275\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem5->child(2);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("Root", "\351\231\220\346\227\266\347\247\222\346\235\200", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = menuTree->topLevelItem(3);
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("Root", "\350\256\242\345\215\225\347\256\241\347\220\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = menuTree->topLevelItem(4);
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("Root", "\345\256\242\346\210\267\346\266\210\346\201\257", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = menuTree->topLevelItem(5);
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("Root", "\347\273\237\350\256\241\345\210\206\346\236\220", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = menuTree->topLevelItem(6);
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("Root", "\350\256\276\347\275\256", nullptr));
        menuTree->setSortingEnabled(__sortingEnabled);

        statusLabel->setText(QCoreApplication::translate("Root", "\345\275\223\345\211\215\347\212\266\346\200\201\357\274\232\346\255\243\345\270\270\350\277\220\350\241\214", nullptr));
        copyrightLabel->setText(QCoreApplication::translate("Root", "\347\211\210\346\235\203\346\211\200\346\234\211 \302\251 \345\225\206\345\256\266\347\256\241\347\220\206\347\263\273\347\273\237 2024", nullptr));
        helpButton->setText(QCoreApplication::translate("Root", "\345\270\256\345\212\251\344\270\216\345\217\215\351\246\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Root: public Ui_Root {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOT_H
