#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include "log_in.h"

namespace Ui
{
    class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    Register(QWidget* parent = nullptr);
    ~Register();

private slots:
    void on_GoBack_clicked();

    void on_RegisterButton_clicked();

private:
    Ui::Register* ui;
};

#endif // REGISTER_H
