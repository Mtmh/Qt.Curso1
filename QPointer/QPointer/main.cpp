#include <QCoreApplication>
#include <QPointer>
#include <QDebug>



class Persona : public QObject
{
public:

     Persona(const QString nombre, QObject *padre = 0)
        : QObject (padre)
     {
         m_nombre = nombre;
     }

     QString nombre() const
     {
         return m_nombre;
     }

private:

    QString m_nombre;

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // no se premite int, char, double, float, bool, short, long, etc...

    QPointer<Persona> ptr = new Persona("Juan");
    qDebug() << ptr ->nombre();

    delete ptr;

    qDebug() << (ptr == NULL);
    return a.exec();
}
