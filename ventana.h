#ifndef VENTANA_H
#define VENTANA_H

#include <QLabel>
#include <QNetworkAccessManager>
#include <QLineEdit>
#include <QGridLayout>
#include <QPaintEvent>

class Ventana : public QWidget
{
    Q_OBJECT
public:
    Ventana();
    ~Ventana();
private:

    QLabel *lRight;
    QLabel *lLeft;
    QLineEdit *leLeft;
    QLineEdit *leRight;
    QNetworkAccessManager *manager;
    QImage *leftImage;
    QImage *rightImage;
    QGridLayout *layout;

protected:
    void paintEvent(QPaintEvent *);
};

#endif // VENTANA_H
