#include "DuCliente.h"
#include "Dudefines.h"
#include <QFile>
#include <QDataStream>

DuCliente::DuCliente(int id, const QString &nombre,
                     const QString &direccion,
                     const QString &telefono)
{
    mId = id;
    mNombre = nombre;
    mDireccion = direccion;
    mTelefono = telefono;
}

void DuCliente::setId(int id)
{
    mId = id;
}

void DuCliente::setNombre(const QString &nombre)
{
    mNombre = nombre;
}

void DuCliente::setDireccion(const QString &direccion)
{
    mDireccion = direccion;
}

void DuCliente::setTelefono(const QString &telefono)
{
    mTelefono = telefono;
}

int DuCliente::id() const
{
    return mId;
}

QString DuCliente::nombre() const
{
    return mNombre;
}

QString DuCliente::direccion() const
{
    return mDireccion;
}

QString DuCliente::telefono() const
{
    return mTelefono;
}

bool DuCliente::isInside(int id) const
{
    QFile F (CLIENTES_FILENAME);

    if (!F.open(QIODevice::ReadOnly))
    {
        return false;
    }

    QDataStream in(&F);
    in.setVersion(QDataStream::Qt_5_10);

    while (!in.atEnd())
    {
        DuCliente cliente;
        in >> cliente;

        if (cliente.id() == id)
        {
            return true;
        }

    }

    F.close();
    return false;
}

QDataStream &operator<<(QDataStream &out, const DuCliente &cliente)
{
 return out << cliente.mId << cliente.mNombre <<cliente.mDireccion
            << cliente.mTelefono;
}

QDataStream &operator>>(QDataStream &in, DuCliente &cliente)
{
    return in  << cliente.mId << cliente.mNombre <<cliente.mDireccion
               << cliente.mTelefono;
}
