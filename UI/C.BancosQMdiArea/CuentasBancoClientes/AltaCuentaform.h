#ifndef ALTACUENTAFORM_H
#define ALTACUENTAFORM_H

#include <QWidget>

namespace Ui {
class AltaCuentaForm;
}

class QVBoxLayout; //alinea los widgets verticalmente
class QDoubleSpinBox; // cajita numero int hay double
class QSpinBox;


class AltaCuentaForm : public QWidget
{
    Q_OBJECT

public:
    explicit AltaCuentaForm(QWidget *parent = nullptr);
    ~AltaCuentaForm();

private slots:
    void on_alta2PushButton_clicked();

private:
    Ui::AltaCuentaForm *ui;


    QSpinBox *mIdSpinBox;
    QSpinBox *mIdClienteSpinbox;
    QDoubleSpinBox *mSaldoSpinBox;
    QVBoxLayout *mLayout;


    bool isInside(int id) const;



};

#endif // ALTACUENTAFORM_H
