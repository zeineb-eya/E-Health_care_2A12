#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTextToSpeech>
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QMainWindow>
//eya
#include "patient.h"
#include "rdv.h"
//nour
#include "medecin.h"
#include "service.h"
//skander
#include "facturesetcommandes.h"
#include "categories.h"
// chedy
#include "element.h"
#include "menu.h"
////////////////////
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


void catlanguageSelectedfr();//
void catlanguageSelecteden();//
void planguageSelectedfr();//
void planguageSelecteden();//




//historique
void ouvrirrdv();
void on_pushButton_8_clicked();
//time
void timefct();

//nour
void on_ajm_clicked(); // bouton ajouter medecin
void on_sm_clicked(); // bouton supprimer medecin
void on_ajs_clicked(); // bouton ajouter service
void on_ss_clicked();  // bouton supprimer service
void on_im_clicked();  //imprimer medecin

void on_impression_clicked();
void on_rechercher_textChanged(const QString &arg1);
void on_lineEdit_2_textChanged(const QString &arg1);
void on_pushButton_300_clicked();
void on_modifierm_clicked();
void on_tm_clicked();



void on_select_clicked();

void on_select_s_clicked();

void on_modifier_service_clicked();

//void on_tm_clicked();
void on_ts_clicked();

void on_modifiermed_clicked();
//skander
void myfunction();
void on_pb_ajouter7_clicked();
void on_pb_ajouter8_clicked();
void on_pb_supprimerr3_clicked();
void on_pb_supprimerp3_clicked();
void on_pb_modifier6_clicked();
void on_pb_modifier7_clicked();
//void on_pb_quitter2_clicked();
void on_pushButton_9_clicked();
void on_pushButton_10_clicked();
void on_pushButton_11_clicked();
void on_pb_aff_categorie_clicked();
void on_pb_aff_fctcmn_clicked();

//void sendEmail();
//void clearFields();
//void onStatus(Status::e status, QString errorMessage);
// void  createEmail();
//void on_pushButton_3_clicked();

void on_choisir_clicked();

void on_play_clicked();

void on_pause_clicked();

void on_stop_clicked();

void on_mute_clicked();

void on_volume_valueChanged(int value);

//void on_sendEmail_clicked();
//chedy
void on_pushButton_AjouterMenu_clicked();

  void on_pushButton_AfficherMenu_clicked();

  void on_Supprimer_menu_clicked();

  void on_Modifier_menu_clicked();

  void on_pushButton_AjouterElem_clicked();

  void on_pushButton_AfficherElem_clicked();

  void on_modifier_element_clicked();

  void on_supprimer_elemnt_clicked();
  //void on_pushButton_10_clicked();

  void on_pushButton_12_clicked();

  void on_pushButton_13_clicked();


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
   //nour
   Medecin Etmp ;
   service etmpp ;
   //skander
       QMediaPlayer *mMediaPlayer;
       categories tmpcategories;
       fctcmn tmpfct;
       // chedy
            menu tmpMenu;
               element tmpElem;
};

#endif // MAINWINDOW_H
