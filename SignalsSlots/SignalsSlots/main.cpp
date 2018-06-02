#include <QCoreApplication>
#include "persona.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObject *p = new QObject; // p = padre

    Persona *juan = new Persona(p); // hijos
    Persona *pedro = new Persona(p); //hijos

    juan->setNombre("Juan");
    pedro->setNombre("Pedro");

    QObject::connect(juan, SIGNAL(hablo(QString)) , pedro, SLOT(escucha(QString)));
    QObject::connect(pedro, SIGNAL(hablo(QString)) , juan, SLOT(escucha(QString)));

    juan ->habla("Hola Pedro");
    pedro ->habla("Hola, como estas?");
    juan ->habla("Bien gracias, y tu?");
    pedro ->habla("Yo tambien, ok");

    delete p; // elimina memoria
    return a.exec();
}
