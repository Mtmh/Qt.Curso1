#ifndef LINEEDIT_H
#define LINEEDIT_H

#include <QLineEdit>
#include <QIcon>

class QToolButton;

class DuLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    DuLineEdit(const QIcon &icon, QWidget *parent = nullptr);
    ~DuLineEdit();
protected:
  void resizeEvent(QResizeEvent *e);
private:
    QToolButton *mClearBtn;
};

#endif // LINEEDIT_H
