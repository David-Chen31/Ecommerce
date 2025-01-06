#ifndef HOME_H
#define HOME_H

#include <QWidget>
#include "ContentWidget/content_widget.h"

namespace Ui {
class Home;
}

class Home : public ContentWidget
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);
    ~Home();
    void setupSalesChart();

private:
    Ui::Home *ui;
};

#endif // HOME_H
