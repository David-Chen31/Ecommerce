#include "log_in.h"
#include "ui_log_in.h"
#include "register.h"
#include "stringtrans.h"
#include "soap/soapH.h"
#include "soap/soapStub.h"
#include "soap/WholeMapperSoapBinding.nsmap"
#include "soap/soapWholeMapperSoapBindingProxy.h"
#include "objects.h"
#include "objecttojson.h"
#include "root/root.h"
#include "notification/create_notification.h"

LogIn::LogIn(QWidget* parent)
    : QWidget(parent),
    ui(new Ui::LogIn)
{
    ui->setupUi(this);
    ui->UsernameLineEdit->setPlaceholderText("请输入账户");
    ui->PasswordLineEdit->setPlaceholderText("请输入密码");
    ui->LogoLabel->setPixmap(QPixmap(":/image/logo.jpg"));
    //ui->logo->resize(200,20);
    ui->LogoLabel->setScaledContents(true);


}

LogIn::~LogIn()
{
    delete ui;
}

void LogIn::on_LogInButton_clicked()
{
    if (!ui->TermsOfServiceRadioButton->isChecked())
    {
        CreateNotification* notification = new CreateNotification("请先勾选协议", this);
        notification->showNotification();
        return;
    }
    //按下按钮，调用服务端查询函数，参数为输入的昵称和密码，如果函数返回真则跳转到主界面，否则不跳转
    QString name = ui->UsernameLineEdit->text();
    QString pwd = ui->PasswordLineEdit->text();

    Shop* shop = ObjectsManager::getShopByNameAndPwd(name, pwd);
    if (shop != nullptr)
    {
        Root* root_widget = new Root(nullptr, shop);
        root_widget->show();
        root_widget->setAttribute(Qt::WA_DeleteOnClose);
        this->close();

        //qDebug("登录成功");
    }
    else
        qDebug("登录失败");
}


void LogIn::on_RegisterButton_clicked()
{
    Register* register_widget = new Register();
    register_widget->show();
    register_widget->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
}

