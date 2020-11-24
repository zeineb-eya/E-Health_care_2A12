#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QMainWindow>
#include "patient.h"
#include "rdv.h"
#include <QDebug>
#include <QString>
#include <QPrinter>
#include <QPrintDialog>
/*#include "C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/SMTPClient/email.h"
#include "C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/SMTPClient/smtpclient.h"
#include "C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/SMTPClient/emailaddress.h"*/
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


void print(QString path, QByteArray ba);
private slots:
    void on_pb_ajouter_clicked();
   void on_pb_ajouter_clicked2();
    void on_pb_supprimer_clicked();
   void on_pb_supprimer_clicked2();

//void on_modifier_p_clicked();
//void on_recherche_tri_textChanged(const QString &arg1);
void on_pb_modifier_clicked();
void on_pb_modifier_clicked_2();
//void on_modifier_p_clicked2();
//void on_recherche_tri_textChanged2(const QString &arg1);
void on_pb_asc_tri_clicked();

void on_pb_desc_tri_clicked();
void on_pb_asc_tri_clicked_2();

void on_pb_desc_tri_clicked_2();
/*void sendEmail();
void clearFields();

void onStatus(Status::e status, QString errorMessage);
private:
    Email createEmail();*/

void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    patient tmppatient;
    rdv tmprdv;

    //SMTPClient *client_;

    int etat=0;
   QString valeur,sexe;

   QString champ="";

};

#endif // MAINWINDOW_H
