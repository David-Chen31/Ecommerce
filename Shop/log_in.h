#ifndef LOG_IN_H
#define LOG_IN_H

#include <QWidget>
#include "soap/soapH.h"
#include "register.h"

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
    void on_LogInButton_clicked();

    void on_RegisterButton_clicked();

private:
    Ui::LogIn* ui;
};

#endif // LOG_IN_H
