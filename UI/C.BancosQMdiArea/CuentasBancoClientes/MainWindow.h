#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionAlta_clientes_triggered();

    void on_actionAlta_de_cuentas_triggered();

    void on_actionVer_clientes_triggered();

    void on_actionVer_cuentas_triggered();

    void on_actionSalir_triggered();

private:
    Ui::MainWindow *ui;

    void loadSubWindow(QWidget *widget); // Adjuntar widget
};

#endif // MAINWINDOW_H
