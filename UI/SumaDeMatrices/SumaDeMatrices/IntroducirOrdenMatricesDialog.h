#ifndef INTRODUCIRORDENMATRICESDIALOG_H
#define INTRODUCIRORDENMATRICESDIALOG_H

#include <QDialog>

namespace Ui
{
class IntroducirOrdenMatricesDialog;
}

class IntroducirOrdenMatricesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit IntroducirOrdenMatricesDialog(QWidget *parent = nullptr);
    ~IntroducirOrdenMatricesDialog();

    int getNumeroDeFilas() const;
    int getNumeroDeColumnas() const;

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
private:
    Ui::IntroducirOrdenMatricesDialog *ui;
};

#endif // INTRODUCIRORDENMATRICESDIALOG_H
