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
        Root->resize(2000, 1000);
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

        topLayout->addWidget(merchantName);

        searchBox = new QLineEdit(Root);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchBox->sizePolicy().hasHeightForWidth());
        searchBox->setSizePolicy(sizePolicy);

        topLayout->addWidget(searchBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        topLayout->addItem(horizontalSpacer);

        logoutButton = new QPushButton(Root);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(logoutButton->sizePolicy().hasHeightForWidth());
        logoutButton->setSizePolicy(sizePolicy1);

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
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(menuTree->sizePolicy().hasHeightForWidth());
        menuTree->setSizePolicy(sizePolicy2);
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

        statusLayout->addWidget(statusLabel);

        copyrightLabel = new QLabel(Root);
        copyrightLabel->setObjectName(QString::fromUtf8("copyrightLabel"));
        copyrightLabel->setAlignment(Qt::AlignCenter);

        statusLayout->addWidget(copyrightLabel);

        helpButton = new QPushButton(Root);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));

        statusLayout->addWidget(helpButton);


        mainLayout->addLayout(statusLayout);


        retranslateUi(Root);

        QMetaObject::connectSlotsByName(Root);
    } // setupUi

    void retranslateUi(QWidget *Root)
    {
        Root->setWindowTitle(QCoreApplication::translate("Root", "\345\225\206\345\256\266\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        merchantAvatar->setStyleSheet(QCoreApplication::translate("Root", "\n"
"      QLabel {\n"
"          border-radius: 25px; /* \345\234\206\345\275\242\345\244\264\345\203\217 */\n"
"          border: 2px solid #FF6A00;\n"
"      }\n"
"     ", nullptr));
        merchantName->setStyleSheet(QCoreApplication::translate("Root", "\n"
"      QLabel {\n"
"          font-size: 18px;\n"
"          font-weight: bold;\n"
"          color: #333333;\n"
"      }\n"
"     ", nullptr));
        merchantName->setText(QCoreApplication::translate("Root", "\345\225\206\345\256\266\345\220\215\347\247\260", nullptr));
        searchBox->setStyleSheet(QCoreApplication::translate("Root", "\n"
"      QLineEdit {\n"
"          background-color: #FFFFFF;\n"
"          border: 1px solid #FF6A00;\n"
"          border-radius: 5px;\n"
"          padding: 5px;\n"
"      }\n"
"     ", nullptr));
        searchBox->setPlaceholderText(QCoreApplication::translate("Root", "\346\220\234\347\264\242\345\225\206\345\223\201\343\200\201\350\256\242\345\215\225\346\210\226\345\256\242\346\210\267", nullptr));
        logoutButton->setStyleSheet(QCoreApplication::translate("Root", "\n"
"      QPushButton {\n"
"          background-color: #FF6A00;\n"
"          color: white;\n"
"          border-radius: 5px;\n"
"          padding: 5px 10px;\n"
"      }\n"
"      QPushButton:hover {\n"
"          background-color: #FF4500;\n"
"      }\n"
"     ", nullptr));
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

        menuTree->setStyleSheet(QCoreApplication::translate("Root", "\n"
"          QTreeWidget {\n"
"              background-color: #FFF2E6;\n"
"              border: 1px solid #FF6A00;\n"
"              border-radius: 5px;\n"
"              font-size: 14px;\n"
"              color: #333333;\n"
"          }\n"
"          QTreeWidget::item {\n"
"              padding: 10px;\n"
"          }\n"
"          QTreeWidget::item:hover {\n"
"              background-color: #FFEDD6;\n"
"          }\n"
"          QTreeWidget::item:selected {\n"
"              background-color: #FF6A00;\n"
"              color: white;\n"
"          }\n"
"         ", nullptr));
        statusLabel->setStyleSheet(QCoreApplication::translate("Root", "\n"
"      QLabel {\n"
"          font-size: 12px;\n"
"          color: #333333;\n"
"      }\n"
"     ", nullptr));
        statusLabel->setText(QCoreApplication::translate("Root", "\345\275\223\345\211\215\347\212\266\346\200\201\357\274\232\346\255\243\345\270\270\350\277\220\350\241\214", nullptr));
        copyrightLabel->setStyleSheet(QCoreApplication::translate("Root", "\n"
"      QLabel {\n"
"          font-size: 12px;\n"
"          color: #AAAAAA;\n"
"      }\n"
"     ", nullptr));
        copyrightLabel->setText(QCoreApplication::translate("Root", "\347\211\210\346\235\203\346\211\200\346\234\211 \302\251 \345\225\206\345\256\266\347\256\241\347\220\206\347\263\273\347\273\237 2023", nullptr));
        helpButton->setStyleSheet(QCoreApplication::translate("Root", "\n"
"      QPushButton {\n"
"          background-color: transparent;\n"
"          font-size: 12px;\n"
"          color: #FF6A00;\n"
"      }\n"
"      QPushButton:hover {\n"
"          text-decoration: underline;\n"
"      }\n"
"     ", nullptr));
        helpButton->setText(QCoreApplication::translate("Root", "\345\270\256\345\212\251\344\270\216\345\217\215\351\246\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Root: public Ui_Root {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOT_H
