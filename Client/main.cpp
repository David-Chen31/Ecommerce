#include "mainwindow.h"
#include "log_in.h"
#include <QSslSocket>
#include <QDebug>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //qDebug() << "Supports SSL:" << QSslSocket::supportsSsl();
    //qDebug() << "SSL Library Build Version:" << QSslSocket::sslLibraryBuildVersionString();
    //qDebug() << "SSL Library Runtime Version:" << QSslSocket::sslLibraryVersionString();

    LogIn log_in;
    log_in.show();

    //MainWindow w;
    //w.show();
    return a.exec();
}


