#ifndef ALTACLIENTEFORM_H
#define ALTACLIENTEFORM_H

#include <QWidget>

namespace Ui {
class AltaClienteForm;
}

class DuLineEdit; //lineEdit
class QVBoxLayout; //alinea los widgets verticalmente
class QSpinBox; // cajita numero int hay double


class AltaClienteForm : public QWidget
{
    Q_OBJECT

public:
    explicit AltaClienteForm(QWidget *parent = nullptr);
    ~AltaClienteForm();

private slots:
    void on_altaPushButton_clicked();

private:
    Ui::AltaClienteForm *ui;

    QSpinBox            *mIdSpinBox;
    DuLineEdit          *mNombreLineEdit;
    DuLineEdit          *MDireccionLineEdit;
    DuLineEdit          *mTelefonoLineEdit;
    QVBoxLayout         *mLayout;




};

#endif // ALTACLIENTEFORM_H
