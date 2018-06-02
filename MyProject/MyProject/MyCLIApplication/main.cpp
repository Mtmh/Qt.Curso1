#include <QCoreApplication>
#include <QDebug>
#include <mysharedlib.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Hola, mundo!";
    MySharedLib mySharedLib;
    mySharedLib.sayHelloWorld();
    return a.exec();
}
