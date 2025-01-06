#ifndef LOG_IN_H
#define LOG_IN_H

#include <QWidget>
#include "soap/soapH.h"
#include "register.h"
#include "logo.h"
#include "root.h"

namespace Ui
{
    class LogIn;
}

class ObjectsManager;

class LogIn : public QWidget
{
    Q_OBJECT

public:
    LogIn(QWidget* parent = nullptr);
    ~LogIn();

private slots:
    void on_register_button_clicked();

    void on_LogInButton_clicked();

private:
    Ui::LogIn* ui;
};

#endif // LOG_IN_H
