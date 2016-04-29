#ifndef LOGIN
#define LOGIN
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

#include <QVBoxLayout>

class Login : public QWidget
{
Q_OBJECT

public:
    Login();

private:
    QLabel *lUsuario, *lClave;
    QLineEdit *leUsuario, *leClave;
    QPushButton *pbIngresar;
    QVBoxLayout *layout;
};

#endif // LOGIN
