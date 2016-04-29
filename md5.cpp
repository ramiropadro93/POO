#include "md5.h"

Md5::Md5()
{
//    QByteArray baHash = QCryptographicHash::hash("123456",QCryptographicHash::Md5);

//    baHash = baHash.toHex();



}

Md5::~Md5()
{

}

void Md5::transform(QString clave)
{
    baHash = QCryptographicHash::hash(clave.toUtf8(),QCryptographicHash::Md5);

    baHash = baHash.toHex();
}

QByteArray Md5::getBAHash()
{
    return baHash;
}
