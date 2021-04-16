#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTextToSpeech>
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
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QPainter>
#include <QFile>
#include <QFileDialog>
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
   void on_pb_afficher_clicked1();
   void on_pb_afficher_clicked2();
//void verify();
//
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
void on_pb_asc_tri_clicked_6();
void on_pb_desc_tri_clicked_6();
//recherche patient
void on_pb_aff_client_clicked();
void on_pb_aff_client_clicked2();
void on_pb_aff_client_clicked3();
void on_pushButton_2_clicked();

//recherche rdv
void on_pb_aff_rdv_clicked();//code
void on_pb_aff_rdv_clicked2();//doctor
void on_pb_aff_rdv_clicked3();//id
void on_pushButton_45_clicked();//back
void on_Rechercher_clicked();//recherche
void on_pushButton_46_clicked();//back
void on_Trie_clicked();//trie

void on_pushButton_47_clicked();//back
void on_Rechercher_2_clicked();//recherche
void on_pushButton_48_clicked();//back
void on_Trie_2_clicked();//trie
//text to speech
// ~SpeekAjouter();
void speak();//
void stop();//
void setRate(int);//
void setPitch(int);//
void setVolume(int volume);//
void stateChanged(QTextToSpeech::State state);//
void engineSelected(int index);//
// void languageSelected(int language);
void voiceSelected(int index);//
void localeChanged(const QLocale &locale);
void languageSelectedfr();//
void languageSelecteden();//

void ajouterpatienten(QString q);//
void ajouterpatientfr(QString q);//
void modifierpatientfr();
void modifierpatienten();
void supprimerpatientfr(QString q);
void supprimerpatienten(QString q);
void afficherpatientfr();
void afficherpatienten();

void catlanguageSelectedfr();//
void catlanguageSelecteden();//
void planguageSelectedfr();//
void planguageSelecteden();//

//stat
/*int Statistique_partie2() ;
int Statistique_partie3() ;
int Statistique_partie4() ;
void paintEvent(QPaintEvent *) ;*/


//historique
void ouvrirrdv();
void on_pushButton_8_clicked();
//time
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
    QTextToSpeech *m_speech;
    QVector<QVoice> m_voices;

    int etat=0;
   QString valeur,sexe;
  // QMediaPlayer* player;
   QTimer *timer;
   QString champ="";
   QMediaPlayer *click;

};

#endif // MAINWINDOW_H
