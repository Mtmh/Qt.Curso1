#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPointer>

namespace Ui {
class MainWindow;
}

class AgregarForm;
class ExplorarForm;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionExplorar_triggered();

    void on_actionAgregar_triggered();

    void on_actionSalir_triggered();

private:
    Ui::MainWindow *ui;
    QPointer<AgregarForm> mAgregarForm;
    QPointer<ExplorarForm> mExplorarForm;

    void loadSubWindow(QWidget *widget); //Metodo que recive un widget
};

#endif // MAINWINDOW_H
