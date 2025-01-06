#include "register.h"
#include "ui_register.h"
#include "notification/create_notification.h"
#include "root/root.h"

Register::Register(QWidget* parent)
    : QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);

}

Register::~Register()
{
    delete ui;
}

void Register::on_GoBack_clicked()
{
    LogIn* log_in_widget = new LogIn;
    log_in_widget->show();
    log_in_widget->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
}


void Register::on_RegisterButton_clicked()
{
    if (!ui->AgreementRadioButton->isChecked())
    {
        CreateNotification* createNotification = new CreateNotification("请先同意协议",this);
        createNotification->showNotification();
        return;
    }
    //qDebug("注册中");
    QString name = ui->ShopNameLineEdit->text();
    QString pwd = ui->PasswordLineEdit->text();
    QString confirmPwd = ui->ConfirmPwdLineEdit->text();
    QString email = ui->EmailLineEdit->text();
    if (pwd == NULL || confirmPwd == NULL)
        return;
    if (pwd!=confirmPwd)
    {
        //弹出提示窗口：两次密码不一样
        CreateNotification* createNotification = new CreateNotification("两次密码不同",this);
        createNotification->showNotification();
    }
    else
    {
        Shop* shop = ObjectsManager::getShopByNameAndPwd(name, pwd);
        if (shop != nullptr)
        {
            //弹出提示窗口，名字已经被使用
            CreateNotification* createNotification = new CreateNotification("该昵称已被使用",this);
            createNotification->showNotification();
        }
        else
        {
            delete(shop);
            //插入
            Shop shopInsert(name,0,"111","1314@qq.com",QDateTime::currentDateTime(), pwd, "D:\\QT\\Documents\\Ecommerce\\Shop\\Images\\Huawei.jpg");
            ObjectsManager::InsertShop(&shopInsert);

            //弹出提示窗口：注册成功
            CreateNotification* createNotification = new CreateNotification("注册成功",this);
            createNotification->showNotification();

            Sleep(2000);

            //跳转到登录界面
            on_GoBack_clicked();
        }
    }
}

