#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QMainWindow>
#include "patient.h"
#include "rdv.h"
#include <QDebug>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_ajouter_clicked();
    void on_pb_ajouter_clicked2();
    void on_pb_supprimer_clicked();
    void on_pb_supprimer_clicked2();


private:
    Ui::MainWindow *ui;
    patient tmppatients;
    rdv tmprdv;

    //int etat=0;
   // QString valeur,sexe;

    //QString champ="";

};

#endif // MAINWINDOW_H
