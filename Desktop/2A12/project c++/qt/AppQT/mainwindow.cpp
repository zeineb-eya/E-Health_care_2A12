#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"dialog2.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Dialog2 dialog;
    dialog.setname(ui->lineEdit_Nom->text());
    dialog.setlastname(ui->lineEdit_Prenom->text());
    dialog.setCIN(ui->lineEdit_CIN->text());
}
