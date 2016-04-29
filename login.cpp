#include "login.h"
#include <iostream>

Login::Login()
{
   // lUsuario = new QLabel ("Usuario");
    //lClave = new QLabel ("Password");

    leUsuario = new QLineEdit;
    leClave = new QLineEdit;
    leClave->setEchoMode(QLineEdit::Password);
    pbIngresar = new QPushButton("Aceptar");

    layout = new QVBoxLayout;

    layout->addWidget(leUsuario);
    layout->addWidget(leClave);
    layout->addWidget(pbIngresar);

    this->setLayout(layout);
}
