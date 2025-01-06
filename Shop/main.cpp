#include "mainwindow.h"

#include <QApplication>
#include "log_in.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LogIn log_in;
    log_in.show();

    //MainWindow w;
    //w.show();
    return a.exec();
}
