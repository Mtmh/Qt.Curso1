#include <QCoreApplication>
#include <QDataStream>
#include <QDebug>
#include <QFile>

class Persona
{
public:
    Persona()
    {

    }

    Persona(const QString &nombre, int edad, double salario)
        : m_nombre(nombre) , m_edad(edad) , m_salario(salario)
    {

    }

    friend inline QDataStream &operator<<(QDataStream &ds, const Persona &p);
    friend inline QDataStream &operator>>(QDataStream &ds, Persona &p);
    friend inline QDebug operator << (QDebug qd, const Persona &p);

private:
      QString m_nombre;
      int m_edad;
      double m_salario;

};

inline QDataStream &operator<<(QDataStream &ds, const Persona &p)
{
    return ds << p.m_nombre << p.m_edad << p.m_salario;
}

inline QDataStream &operator>>(QDataStream &ds, Persona &p)
{
    return ds >> p.m_nombre >> p.m_edad >> p.m_salario;
}

inline QDebug operator << (QDebug qd, const Persona &p)
{
    return qd << p.m_nombre << p.m_edad << p.m_salario;
}


int main(int argc, char *argv[])
{
    QCoreApplication a (argc, argv);
    QDataStream io;
    QFile arch;
    Persona persona; // Para escribir archivo ("Juan", 28,6000.0)


    arch.setFileName("/Users/tizianomartinhernando/desktop/objeto.txt");
    arch.open(QIODevice::ReadOnly); // Para escribir en el archivo WriteOnly para leer
    io.setDevice(&arch);
    io.setVersion(QDataStream::Qt_5_8);
    io >> persona; // escribir archivo <<


    arch.flush();
    arch.close();

    qDebug() << persona; // ponemos persona para que salga en consola

    return a.exec();
}
