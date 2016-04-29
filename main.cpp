#include <QApplication>
#include <QWidget>
#include <QLayout>
#include "login.h"

int main(int argc, char** argv)
{
    QApplication a(argc, argv);

    Login login1;

    QWidget *window = new QWidget;

    window->resize(300,50);

    QHBoxLayout *layout = new QHBoxLayout;

    window->setLayout(layout);

    window->show();

    return a.exec();
}
