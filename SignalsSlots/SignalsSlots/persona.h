#ifndef PERSONA_H
#define PERSONA_H

#include <QObject>

class Persona : public QObject
{
    Q_OBJECT

public:

    explicit Persona(QObject *parent = nullptr); //tambien se puede poner 0

    void setNombre(const QString &nombre)
    {
        m_nombre = nombre;
    }

    void habla(const QString &palabras);

signals:

    void hablo(QString);

public slots:

    void escucha(const QString  &palabras);

private:

    QString m_nombre;
};

#endif // PERSONA_H
