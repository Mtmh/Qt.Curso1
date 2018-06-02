#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

/* Esto lo utiliza QSettings para no confundir los ajustes
 * con otras aplicaciones */

    a.setApplicationName("EjemploQSettings");
    a.setApplicationVersion("1.0");
    a.setOrganizationName("DuarteCorporation-TMH");
    a.setOrganizationDomain("www.duartecorptutoriales.com");


    Widget w;
    w.show();

    return a.exec();
}

/* Progama para recordar como dejas la ultima vez la ventana en que
 * posicion y  tamaño */
