#include <QApplication>
#include "login.h"
#include "admindb.h"

int main(int argc, char **argv)
{
    QApplication a(argc,argv);

    Login log;

    log.show();

    return a.exec();
}
