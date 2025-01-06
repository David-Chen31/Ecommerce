#ifndef HOME_H
#define HOME_H

#include <QWidget>
#include <QLabel>
#include "log_in.h"
#include "ui_home.h"
#include "logo.h"
#include "itemdisplay.h"
#include "function_zone.h"

namespace Ui
{
    class home;
}

class Home : public FunctionZone
{
    Q_OBJECT

public:
    Home(QWidget* parent = nullptr);
    ~Home();
    void Refresh();

signals:
    void homeRefreshRequested(); // 刷新信号

private:
    Ui::home* ui;
    QList<ItemDisplay*> Items;
};


#endif // HOME_H
