#include <QCoreApplication>
#include "mediator_server.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    MediatorServer server;
    if (!server.startServer("127.0.0.1", 12345)) {
        return -1;
    }

    return app.exec();
}

