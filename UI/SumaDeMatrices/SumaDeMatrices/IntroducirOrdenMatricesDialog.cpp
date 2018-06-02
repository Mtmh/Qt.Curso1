#include "IntroducirOrdenMatricesDialog.h"
#include "ui_IntroducirOrdenMatricesDialog.h"

IntroducirOrdenMatricesDialog::IntroducirOrdenMatricesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IntroducirOrdenMatricesDialog)
{
    ui->setupUi(this);

    setWindowTitle("Orden de las Matrices");

    ui->numeroDeFilasSpinBox->setMinimum(1);
    ui->numeroDeFilasSpinBox->setMaximum(INT_MAX);
    ui->numerosDeColumnasSpinBox->setMinimum(1);
    ui->numerosDeColumnasSpinBox->setMaximum(INT_MAX);

}

IntroducirOrdenMatricesDialog::~IntroducirOrdenMatricesDialog()
{
    delete ui;
}

int IntroducirOrdenMatricesDialog::getNumeroDeFilas() const
{
    return ui->numeroDeFilasSpinBox->value();
}

int IntroducirOrdenMatricesDialog::getNumeroDeColumnas() const
{
    return ui->numerosDeColumnasSpinBox->value();
}

void IntroducirOrdenMatricesDialog::on_buttonBox_accepted()
{
   accept();
}

void IntroducirOrdenMatricesDialog::on_buttonBox_rejected()
{
    reject();
}
