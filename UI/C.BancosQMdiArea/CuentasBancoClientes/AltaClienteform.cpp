#include "AltaClienteform.h"
#include "ui_AltaClienteform.h"
#include "DuLineEdit.h"
#include "DuCliente.h"
#include "Dudefines.h"
#include <QSpinBox>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFormLayout>
#include <QFile>
#include <QDataStream>
#include <QMessageBox>

AltaClienteForm::AltaClienteForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AltaClienteForm)
{
    ui->setupUi(this);

    mIdSpinBox         = new QSpinBox(this);
    mNombreLineEdit    = new DuLineEdit(QIcon(":/clear"), this); // clear.png icono
    MDireccionLineEdit = new DuLineEdit(QIcon(":/clear"), this);
    mTelefonoLineEdit  = new DuLineEdit(QIcon(":/clear"), this);
    mLayout            = new QVBoxLayout;

    auto formLayout  = new QFormLayout;
    auto hbox1       = new QHBoxLayout;
    auto hbox2       = new QHBoxLayout;
    auto hbox3       = new QHBoxLayout;

    formLayout->addRow("ID", mIdSpinBox);

    hbox1->addWidget(new QLabel("Nombre", this));
    hbox1->addWidget(mNombreLineEdit);

    hbox2->addWidget(new QLabel("Direccion", this));
    hbox2->addWidget(MDireccionLineEdit);

    hbox3->addWidget(new QLabel("Telefono", this));
    hbox3->addWidget(mTelefonoLineEdit);

    mLayout->addLayout(formLayout);
    mLayout->addLayout(hbox1);
    mLayout->addLayout(hbox2);
    mLayout->addLayout(hbox3);



    mIdSpinBox->setMaximum(INT_MAX); //entero de la ventana

    setWindowTitle("Alta cliente"); // Ventana titulo

    ui->widget->setLayout(mLayout); // Poner al widget este layot (mLayout)
}

AltaClienteForm::~AltaClienteForm()
{
    delete ui;
}

void AltaClienteForm::on_altaPushButton_clicked()
{
    QFile F(CLIENTES_FILENAME);

    if (!F.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        QMessageBox::critical(this, "Error", F.errorString());
        return;
    }

    QDataStream out(&F);
    out.setVersion(QDataStream::Qt_5_10);

    const int id = mIdSpinBox->value();

    DuCliente cliente(id, mNombreLineEdit->text(),
                       MDireccionLineEdit->text(),
                        mTelefonoLineEdit->text());


    /*if (isInside(id))
    {
     QMessageBox::warning(this, "Aviso", "ID repetido");
     return;
    }*/



    out << cliente;
    F.flush();
    F.close();

    QMessageBox::information(this, "OK", "Correcto");

    mIdSpinBox->clear();
    mNombreLineEdit->clear();
    MDireccionLineEdit->clear();
    mTelefonoLineEdit->clear();
    mIdSpinBox->setFocus();

}

