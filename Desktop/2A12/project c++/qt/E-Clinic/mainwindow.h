#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//window
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QMainWindow>
#include "patient.h"
#include "rdv.h"
#include <QMediaPlayer>
#include <QDebug>
#include <QString>
#include <QPrinter>
#include <QPrintDialog>
#include <QTimer>
#include <QDate>
#include <QTextEdit>
#include <QString>
#include <QMouseEvent>
#include <QWheelEvent>
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

//void on_pushButton_2_clicked();
void print(QString path, QByteArray ba);
private slots:
    void on_pb_ajouter_clicked();
   void on_pb_ajouter_clicked2();
    void on_pb_supprimer_clicked();
   void on_pb_supprimer_clicked2();
//void verify();

void on_pb_modifier_clicked();
void on_pb_modifier_clicked_2();
//tri rdv
void on_pb_asc_tri_clicked();
void on_pb_desc_tri_clicked();
void on_pb_asc_triID_clicked();
void on_pb_desc_triID_clicked();
void on_pb_asc_triDoc_clicked();
void on_pb_desc_triDoc_clicked();
//tri patient
void on_pb_asc_tri_clicked_2();
void on_pb_desc_tri_clicked_2();
void on_pb_asc_triTYPE_clicked_2();
void on_pb_desc_triTYPE_clicked_2();

//recherche patient
void on_pb_aff_client_clicked();
void on_pushButton_2_clicked();



void timefct();

/*protected:
    void    mousePressEvent(QMouseEvent *event) override;
    void    mouseReleaseEvent(QMouseEvent *event) override;
    void    mouseDoubleClickEvent(QMouseEvent *event) override;*/

/*void sendEmail();
void clearFields();

void onStatus(Status::e status, QString errorMessage);
private:
    Email createEmail();*/



private:
    Ui::MainWindow *ui;
    patient tmppatient;
    rdv tmprdv;

    //SMTPClient *client_;

    int etat=0;
   QString valeur,sexe;
  // QMediaPlayer* player;
   QTimer *timer;
   QString champ="";
   QMediaPlayer *click;

};

#endif // MAINWINDOW_H
