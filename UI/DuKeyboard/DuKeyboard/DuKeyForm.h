#ifndef DUKEYFORM_H
#define DUKEYFORM_H

#include <QWidget>

namespace Ui
{
class DuKeyForm;
}

class QHBoxLayout;


class DuKeyForm : public QWidget
{
    Q_OBJECT

public:
    explicit DuKeyForm(QWidget *parent = nullptr);
    ~DuKeyForm();

signals:
    void keyPressed(const QString &);

private:
    QHBoxLayout *loadKeys(char x, char y);

    Ui::DuKeyForm *ui;
};

#endif // DUKEYFORM_H
