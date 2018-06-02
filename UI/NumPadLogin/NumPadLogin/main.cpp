#include "NumPadLoginDialog.h"
#include "MainWindow.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");

    NumPadLoginDialog numPadLogin;

    int numPadtogInResult;

    do {
        numPadtogInResult = numPadLogin.exec();
        if (numPadtogInResult == QDialog::Rejected){
            QMessageBox::warning(&numPadLogin, "Advertencia", "Codigo incorrecto");
        }
    }
    while (numPadtogInResult == QDialog::Rejected); {

    }


    MainWindow window;
    window.show();

    return a.exec();
}
