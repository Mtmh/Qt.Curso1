#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class QStandardItemModel;
class SpinBoxDelegate;
class SliderDelegate;
class FontComboBoxDelegate;


class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QStandardItemModel *m_modelo;
    SpinBoxDelegate *m_spinnerDelegate;
    SliderDelegate *m_sliderDelegate;
    FontComboBoxDelegate *m_fcbDelegate;
};

#endif // DIALOG_H
