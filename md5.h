#ifndef MD5_H
#define MD5_H


#include "login.h"
#include <QCryptographicHash>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QNetworkAccessManager>
#include <QPaintEvent>
#include <QByteArray>


class Md5
{
public:
    Md5();
    ~Md5();

    void transform(QString clave);

    QByteArray baHash;

    QByteArray getBAHash();
};

#endif // MD5_H
