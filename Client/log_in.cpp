#include "log_in.h"
#include "ui_log_in.h"
#include "register.h"
#include "stringtrans.h"
#include "soap/soapH.h"
#include "soap/WholeMapperSoapBinding.nsmap"
#include "soap/soapWholeMapperSoapBindingProxy.h"
#include "objects.h"
#include "notification/create_notification.h"
#include "root.h"

LogIn::LogIn(QWidget* parent)
    : QWidget(parent),
    ui(new Ui::LogIn)
{
    ui->setupUi(this);
    ui->username->setPlaceholderText("请输入账户");
    ui->password->setPlaceholderText("请输入密码");
    QWidget* LogoWidget = ui->LogoWidget;
    Logo* logo = new Logo(LogoWidget);
    // logo->show();
    // logo->activateWindow();
    QHBoxLayout *layout = new QHBoxLayout(this);
    LogoWidget->setLayout(layout);
    LogoWidget->layout()->addWidget(logo);

}

LogIn::~LogIn()
{
    delete ui;
}


void LogIn::on_register_button_clicked()
{
    Register* register_widget = new Register();
    register_widget->show();
    register_widget->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
}


void LogIn::on_LogInButton_clicked()
{
    //按下按钮，调用服务端查询函数，参数为输入的昵称和密码，如果函数返回真则跳转到主界面，否则不跳转
    if (!ui->TermsOfService->isChecked())
    {
        CreateNotification* notification = new CreateNotification("请先勾选协议", this);
        notification->showNotification();
        return;
    }

    QString pwd = ui->password->text();
    QString name = ui->username->text();

    Client* client = ObjectsManager::getClientByNameAndPwd(name, pwd);
    if (client != nullptr)
    {
        Root* root_widget = new Root(nullptr, client);
        root_widget->show();
        root_widget->setAttribute(Qt::WA_DeleteOnClose);
        this->close();

        //qDebug("登录成功");
        CreateNotification* notification = new CreateNotification("登录成功", this);
        notification->showNotification();
    }
    else
    {
        //qDebug("登录失败");
        CreateNotification* notification = new CreateNotification("登录失败", this);
        notification->showNotification();
    }


}

