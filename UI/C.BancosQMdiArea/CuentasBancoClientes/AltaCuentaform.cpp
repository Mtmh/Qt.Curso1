#include "AltaCuentaform.h"
#include "ui_AltaCuentaform.h"
#include "Dudefines.h"
#include "DuCuenta.h"
#include "DuCliente.h"
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QMessageBox>
#include <QFile>
#include <QDataStream>
#include <QMessageBox>



AltaCuentaForm::AltaCuentaForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AltaCuentaForm)
{
    ui->setupUi(this);

    mIdSpinBox        = new QSpinBox(this); // this: padre
    mIdClienteSpinbox = new QSpinBox(this);
    mSaldoSpinBox     = new QDoubleSpinBox(this);
    mLayout           = new QVBoxLayout;

    auto formLayout1  = new QFormLayout;
    auto formLayout2  = new QFormLayout;
    auto formLayout3  = new QFormLayout;

    formLayout1->addRow("ID", mIdSpinBox);
    formLayout2->addRow("ID cliente", mIdClienteSpinbox);
    formLayout3->addRow("Saldo", mSaldoSpinBox);

    mLayout->addLayout(formLayout1);
    mLayout->addLayout(formLayout2);
    mLayout->addLayout(formLayout3);

    ui->widget->setLayout(mLayout);

    mIdSpinBox->setMaximum(INT_MAX);
    mIdClienteSpinbox->setMaximum(INT_MAX);
    mSaldoSpinBox->setMaximum(999999999999.9);
    mSaldoSpinBox->setMinimum(0.0);


    setWindowTitle("Alta cuenta");

}

AltaCuentaForm::~AltaCuentaForm()
{
    delete ui;
}

void AltaCuentaForm::on_alta2PushButton_clicked()
{
    QFile F (CUENTAS_FILENAME);

    if (!F.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        QMessageBox::critical(this, "Error", F.errorString());
        return;

    }

    QDataStream out(&F);
    out.setVersion(QDataStream::Qt_5_10);
    const int id = mIdSpinBox->value();


    if (isInside(id))
    {
        QMessageBox::warning(this,"Aviso", "Id repetido");
        return;
    }

    const int idCliente = mIdClienteSpinbox->value();

    DuCliente cliente(idCliente);
    if (!cliente.isInside(idCliente))
    {
        QMessageBox::warning(this, "Aviso", "No existe el id cliente");
        return;
    }


    DuCuenta cuenta(id, mIdClienteSpinbox->value(),
                    mSaldoSpinBox->value());

    out << cuenta;
    F.flush();
    F.close();

    QMessageBox::information(this, "OK", "Correcto");

     mIdSpinBox->clear();
     mIdClienteSpinbox->clear();
     mSaldoSpinBox->clear();
     mIdSpinBox->setFocus();


}

bool AltaCuentaForm::isInside(int id) const
{
    QFile F (CUENTAS_FILENAME);

    if (!F.open(QIODevice::ReadOnly))
    {
        return false;
    }

    QDataStream in(&F);
    in.setVersion(QDataStream::Qt_5_10);

    while (!in.atEnd())
    {
        DuCuenta cuenta;
        in >> cuenta;

        if (cuenta.id() == id)
        {
            return true;
        }

    }

    F.close();
    return false;

}
