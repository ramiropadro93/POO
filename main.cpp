#include <QApplication>
#include "ventana.h"


int main(int argc, char **argv)
{
    QApplication a(argc, argv);

    Ventana win;

    win.show();

    return a.exec();
}
