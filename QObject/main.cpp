#include <QCoreApplication>
#include <QDebug>

class Persona : public QObject
{

public:
    Persona(QObject *padre = NULL)
        : QObject(padre)
    {

    }

void setNombre(const QString &nombre)
{
     m_nombre = nombre;
}

void setEdad(int edad)
{
    m_edad = edad;
}

void setSalario(double salario)
{
    m_salario = salario;
}

QString getNombre() const
{
    return m_nombre;
}

int getEdad() const
{
    return m_edad;
}


double getSalario() const
{
    return m_salario;
}


~Persona()
{
    qDebug() << m_nombre <<"Se ha eliminado";
}

void imprime() const
{
    qDebug() << m_nombre << " " << m_edad << " " << m_salario;
}

private:
    QString m_nombre;
    int m_edad;
    double m_salario;
};



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Persona *juan = new Persona;
    Persona *pedro = new Persona(juan);
    Persona *luis = new Persona(juan);
    juan  ->setNombre("Juan");
    juan  ->setEdad(40);
    juan  ->setSalario(5000.0);
    pedro ->setNombre("Pedrito");
    pedro ->setEdad(13);
    pedro ->setSalario(0.0);
    luis  ->setNombre("Luisito");
    luis  ->setEdad(15);
    luis  ->setSalario(0.0);
    juan  ->imprime();
    pedro ->imprime();
    luis  ->imprime();
    delete juan;



















    return a.exec();
}
