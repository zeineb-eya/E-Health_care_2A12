#include "dialog2.h"
#include "ui_dialog2.h"
#include"mainwindow.h"


Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2 :: setname(QString(n))
{ui->lineEdit_Nom->setText(name);}

void Dialog2 :: setlastname(QString(n))
{ui->lineEdit_Prenom->setText(lastname);}

void Dialog2 :: setCIN(QString(n))
{ui->lineEdit_CIN->setText(CIN);}
