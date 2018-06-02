#include <QCoreApplication>
#include <midll.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MIDLL mDLL;
    mDLL.saluda(); // Compilar en modo release fue compilado en release de mac


    return a.exec();
}
