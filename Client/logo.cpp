#include "logo.h"
#include "ui_logo.h"

Logo::Logo(QWidget* parent)
    : QWidget(parent),
    ui(new Ui::Logo)
{
    ui->setupUi(this);
}

Logo::~Logo()
{
    delete ui;
}
