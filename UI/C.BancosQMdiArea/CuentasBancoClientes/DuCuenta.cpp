#include "DuCuenta.h"

DuCuenta::DuCuenta(int id, int idCliente, double saldo)
{
    mId = id;
    mIdCliente = idCliente;
    mSaldo = saldo;
}

void DuCuenta::setId(int id)
{
    mId = id;
}

void DuCuenta::setIdCliente(int id)
{
    mIdCliente = id; //id
}

void DuCuenta::setSaldo(double saldo)
{
    mSaldo = saldo;
}

int DuCuenta::id() const
{
    return mId ;
}

int DuCuenta::idCliente() const
{
    return mIdCliente;
}

double DuCuenta::saldo() const
{
    return mSaldo;
}

QDataStream &operator<<(QDataStream &out, const DuCuenta &cuenta)
{
    return out << cuenta.mId << cuenta.mIdCliente << cuenta.mSaldo;
}

QDataStream &operator>>(QDataStream &in, DuCuenta &cuenta)
{
    return in >> cuenta.mId >> cuenta.mIdCliente >> cuenta.mSaldo;
}
