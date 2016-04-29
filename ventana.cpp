#include "ventana.h"
#include <QPainter>
#include <QSize>

Ventana::Ventana()
{
    lRight= new QLabel("Derecha");
    lLeft = new QLabel("Izquierda");
    leLeft = new QLineEdit("http://www.tizenexperts.com/wp-content/uploads/2013/05/Qt-Tizen-TizenExperts.jpg");
    leRight = new QLineEdit("http://www.tizenexperts.com/wp-content/uploads/2013/05/Qt-Tizen-TizenExperts.jpg");

    layout = new QGridLayout;

    //leftImage = new QImage ("C:/Users/lab6/Desktop/qt1");
    //rightImage = new QImage ("C:/Users/lab6/Desktop/qt1");


    layout->addWidget(lRight,0,0);
    layout->addWidget(lLeft,1,0);
    layout->addWidget(leRight,0,1,1,9);
    layout->addWidget(leLeft,1,1,1,9);




    this->setLayout(layout);
}

void Ventana::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    leftImage = new QImage("C:/Users/lab6/Desktop/qt1.jpg");      /*new QImage::fromData(reply->readAll());*/ //new QImage("C:/Users/lab6/Desktop/qt1");
    rightImage = new QImage ("C:/Users/lab6/Desktop/qt1.jpg");

    //QImage copy = leftImage->scaled(50,50);

    *leftImage = leftImage->scaled(50,50);
    *rightImage = rightImage->scaled(50,50);

    //im = QImage::fromData(reply->readAll());
    //im = im.scaled(50,50);
    //painter.drawImage(0, this->height()/2 - copy.height()/2, copy
    //painter.drawImage(this->width() - copy.width(), this->height()/2 - copy.height()/2, copy

    painter.drawImage(0, this->height()/2 - leftImage->height()/2, *leftImage);
    painter.drawImage(this->width() - rightImage->width(), this->height()/2 - rightImage->height()/2, *rightImage );
}

Ventana::~Ventana()
{

}

