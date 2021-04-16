#include "mainwindow.h"
#include <QMediaPlayer>
#include "patient.h"
#include "rdv.h"
#include <QMediaPlaylist>
#include <QDate>
#include <QTime>
#include <QTimer>
#include <QProgressBar>
#include <QStatusBar>
#include <QWidget>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //eya
    ui->setupUi(this);
    ui->tab_patients->setModel(tmppatient.afficher());
    ui->tab_rdv->setModel(tmprdv.afficher());
    ouvrirrdv();

    //sound
    click = new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
    //nour
    ui->tableView->setModel(Etmp.afficher());
    ui->tableView_2->setModel(etmpp.afficherS());
// controle de saisie nour
    ui->idd->setValidator(new QIntValidator(0,999999,this));
    ui->idss->setValidator(new QIntValidator(0,999999,this));
     ui->id_mod->setValidator(new QIntValidator(0,999999,this));
     ui->id_modfier->setValidator(new QIntValidator(0,999999,this));
     //skander
     mMediaPlayer= new QMediaPlayer(this);
     connect(mMediaPlayer, &QMediaPlayer::positionChanged , [&](qint64 pos) {ui->avance_3->setValue(pos);});
     connect(mMediaPlayer, &QMediaPlayer::durationChanged, [&](qint64 dur){ui->avance_3->setMaximum(dur);});
     QPixmap pix("C:/Users/hp/Desktop/E-Health_care_2A12-main/Desktop/2A12/project c++/qt/E-Clinic/téléchargement.jpg");
     int w=ui->label_pic_3->width();
     int h=ui->label_pic_3->height();
     ui->label_pic_3->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
     ui->tab_categories_3->setModel(tmpcategories.afficher());
     ui->tab_fctcmn_3->setModel(tmpfct.afficher());
     //chedy
         //ui->setupUi(this);

         ui->lineEdit_id_elemnt->setValidator(new QIntValidator(0,99999999,this));
             ui->lineEdit_sup_id_element->setValidator(new QIntValidator(0,99999999,this));
             ui->lineEdit_5->setValidator(new QIntValidator(0,99999999,this));
             ui->lineEdit_qt_element->setValidator(new QIntValidator(0,99999999,this));
             ui->lineEdit_Modifier->setValidator(new QIntValidator(0,99999999,this));
             ui->lineEdit_ID_SupprimerMenu->setValidator(new QIntValidator(0,99999999,this));

    // Connect all signals and slots
    connect(ui->cancelButton, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->cancelButton_2, SIGNAL(clicked()), this, SLOT(close()));

    connect(ui->pb_ajouter, SIGNAL(clicked(bool)), this, SLOT(on_pb_ajouter_clicked())); //ajout p
    connect(ui->pb_ajouter_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_ajouter_clicked2())); //ajout r

    connect(ui->afficher, SIGNAL(clicked(bool)), this, SLOT(on_pb_afficher_clicked1()));
    connect(ui->afficher_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_afficher_clicked2()));


    connect(ui->supprimerp, SIGNAL(clicked(bool)), this, SLOT(on_pb_supprimer_clicked())); //supp p
    connect(ui->supprimerr, SIGNAL(clicked(bool)), this, SLOT(on_pb_supprimer_clicked2())); //sup r

    connect(ui->pb_modifierrdv, SIGNAL(clicked(bool)), this, SLOT(on_pb_modifier_clicked())); //modifier r
    connect(ui->pb_modifier_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_modifier_clicked_2())); //modifier p
    connect(ui->pushButton_1, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_2_clicked())); // print
//trie rdv
    connect(ui->pb_asc_tri, SIGNAL(clicked(bool)), this, SLOT(on_pb_asc_tri_clicked()));
    connect(ui->pb_desc_tri, SIGNAL(clicked(bool)), this, SLOT(on_pb_desc_tri_clicked()));
    connect(ui->pb_asc_tri_3, SIGNAL(clicked(bool)), this, SLOT(on_pb_asc_triID_clicked()));
    connect(ui->pb_desc_tri_3, SIGNAL(clicked(bool)), this, SLOT(on_pb_desc_triID_clicked()));
    connect(ui->pb_asc_tri_4, SIGNAL(clicked(bool)), this, SLOT(on_pb_asc_triDoc_clicked()));
    connect(ui->pb_desc_tri_4, SIGNAL(clicked(bool)), this, SLOT(on_pb_desc_triDoc_clicked()));

//trie patient
    connect(ui->pb_asc_tri_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_asc_tri_clicked_2()));
    connect(ui->pb_desc_tri_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_desc_tri_clicked_2()));
    connect(ui->pb_asc_tri_5, SIGNAL(clicked(bool)), this, SLOT(on_pb_asc_triTYPE_clicked_2()));
    connect(ui->pb_desc_tri_5, SIGNAL(clicked(bool)), this, SLOT(on_pb_desc_triTYPE_clicked_2()));
    connect(ui->pb_asc_tri_6, SIGNAL(clicked(bool)), this, SLOT(on_pb_asc_tri_clicked_6()));
    connect(ui->pb_desc_tri_6, SIGNAL(clicked(bool)), this, SLOT(on_pb_desc_tri_clicked_6()));


//recherche par id patient
    connect(ui->pb_aff_client, SIGNAL(clicked(bool)), this, SLOT(on_pb_aff_client_clicked()));
    connect(ui->pb_aff_client_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_aff_client_clicked2()));
    connect(ui->pb_aff_client_3, SIGNAL(clicked(bool)), this, SLOT(on_pb_aff_client_clicked3()));
//recherche par coderdv
     connect(ui->pb_aff_rdv, SIGNAL(clicked(bool)), this, SLOT(on_pb_aff_rdv_clicked()));
connect(ui->pb_aff_rdv_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_aff_rdv_clicked2()));
connect(ui->pb_aff_rdv_3, SIGNAL(clicked(bool)), this, SLOT(on_pb_aff_rdv_clicked3()));

connect(ui->pushButton_45, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_45_clicked()));
connect(ui->pushButton_46, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_46_clicked()));
connect(ui->pushButton_47, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_47_clicked()));
connect(ui->pushButton_48, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_48_clicked()));

connect(ui->Rechercher, SIGNAL(clicked(bool)), this, SLOT(on_Rechercher_clicked()));
connect(ui->Rechercher_2, SIGNAL(clicked(bool)), this, SLOT(on_Rechercher_2_clicked()));
connect(ui->Trie, SIGNAL(clicked(bool)), this, SLOT(on_Trie_clicked()));
connect(ui->Trie_2, SIGNAL(clicked(bool)), this, SLOT(on_Trie_2_clicked()));

//connect(ui->speakButton_4, SIGNAL(clicked(bool)), this, SLOT(speak()));
//connect(ui->stopButton_4, SIGNAL(clicked(bool)), this, SLOT(stop()));


//connect(ui->verify, SIGNAL(clicked(bool)), this, SLOT(verify()));//update
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timefct()));
    timer->start(1000);
    //connect(ui->rechercherp, SIGNAL(clicked(bool)), this, SLOT(on_recherche_tri_textChanged(const QString &arg1)));
    //connect(ui->rechercherr, SIGNAL(clicked(bool)), this, SLOT(on_recherche_tri_textChanged2(const QString &arg1)));


    /*client_ = NULL;

    // Connect all signals and slots
    connect(ui->pushButtonSend, SIGNAL(clicked(bool)), this, SLOT(sendEmail()));
    connect(ui->pushButtonClear, SIGNAL(clicked(bool)), this, SLOT(clearFields()));*/
//historique
connect(ui->pushButton_8, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_8_clicked()));


connect(ui->pb_supprimerr3, SIGNAL(clicked(bool)), this, SLOT(on_pb_supprimerr3_clicked()));
connect(ui->pb_supprimerp3, SIGNAL(clicked(bool)), this, SLOT(on_pb_supprimerp3_clicked()));

connect(ui->pb_modifier6, SIGNAL(clicked(bool)), this, SLOT(on_pb_modifier6_clicked()));
connect(ui->pb_modifier7, SIGNAL(clicked(bool)), this, SLOT(on_pb_modifier7_clicked()));
//connect(ui->pb_quitter2, SIGNAL(clicked(bool)), this, SLOT(on_pb_quitter2_clicked()));

connect(ui->pb_ajouter7, SIGNAL(clicked(bool)), this, SLOT(on_pb_ajouter7_clicked()));
connect(ui->pb_ajouter8, SIGNAL(clicked(bool)), this, SLOT(on_pb_ajouter8_clicked()));
connect(ui->pushButton_9, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_9_clicked()));
connect(ui->pushButton_10, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_10_clicked()));
connect(ui->pushButton_11, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_11_clicked()));
connect(ui->pb_aff_categorie_3, SIGNAL(clicked(bool)), this, SLOT(on_pb_aff_categorie_clicked()));
connect(ui->pb_aff_fctcmn_3, SIGNAL(clicked(bool)), this, SLOT(on_pb_aff_fctcmn_clicked()));
//connect(ui->sendEmail_3, SIGNAL(clicked(bool)), this, SLOT(on_sendEmail_clicked()));
//connect(ui->clearFields_3, SIGNAL(clicked(bool)), this, SLOT(clearFields()));
//connect(ui->pushButton_3, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_3_clicked()));
//connect(ui->pushButton_3, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_3_clicked()));
connect(ui->choisir_3, SIGNAL(clicked(bool)), this, SLOT(on_choisir_clicked()));
connect(ui->play_3, SIGNAL(clicked(bool)), this, SLOT(on_play_clicked()));
connect(ui->pause_3, SIGNAL(clicked(bool)), this, SLOT(on_pause_clicked()));
connect(ui->stop_3, SIGNAL(clicked(bool)), this, SLOT(on_stop_clicked()));
connect(ui->mute_3, SIGNAL(clicked(bool)), this, SLOT(on_mute_clicked()));
connect(ui->volume_3, SIGNAL(clicked(bool)), this, SLOT(on_volume_valueChanged(int value)));
//chedi


    // Connect all signals and slots
    connect(ui->pb_ajouter, SIGNAL(clicked(bool)), this, SLOT(on_pb_ajouter_clicked())); //ajout c
    connect(ui->pb_ajouter_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_ajouter_clicked2())); //ajout fc

    connect(ui->pb_supprimerp3, SIGNAL(clicked(bool)), this, SLOT(on_pb_supprimerp_clicked())); //supp c
    connect(ui->pb_supprimerr3, SIGNAL(clicked(bool)), this, SLOT(on_pb_supprimerr_clicked())); //sup fc

    connect(ui->pb_modifier_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_modifier_clicked())); //modifier fc
    connect(ui->pb_modifier_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_modifier2_clicked_())); //modifier c
    connect(ui->pushButton_11, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_1_clicked())); // print
    connect(ui->pushButton_9, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_2_clicked())); // print


    connect(ui->pb_aff_categorie_3, SIGNAL(clicked(bool)), this, SLOT(on_pb_aff_categorie_clicked()));//recherche par id categorie

   // categories_ = NULL;

  /*  connect all signals and slots;*/
    //connect(ui->sendEmail_3, SIGNAL(clicked(bool)), this, SLOT(sendEmail()));
    //connect(ui->clearFields_3, SIGNAL(clicked(bool)), this, SLOT(clearFields()));

}

MainWindow::~MainWindow()
{
    //client_->deleteLater();
    delete ui;
}

void MainWindow::on_pushButton_45_clicked()
{
    ui->widgetrecherche->setCurrentIndex(0);
}
void MainWindow::on_Rechercher_clicked()
{
    ui->widgetrecherche->setCurrentIndex(1);
}
void MainWindow::on_pushButton_46_clicked()
{
    ui->widgettrie->setCurrentIndex(0);
}
void MainWindow::on_Trie_clicked()
{
    ui->widgettrie->setCurrentIndex(1);
}
void MainWindow::on_pushButton_47_clicked()
{
    ui->widgetrecherche_2->setCurrentIndex(0);
}
void MainWindow::on_Rechercher_2_clicked()
{
    ui->widgetrecherche_2->setCurrentIndex(1);
}
void MainWindow::on_pushButton_48_clicked()
{
    ui->widgettrie_2->setCurrentIndex(0);
}
void MainWindow::on_Trie_2_clicked()
{
    ui->widgettrie_2->setCurrentIndex(1);
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void MainWindow::on_pb_ajouter_clicked()
{   //button sound
    click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    //QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
    //QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);
    int id = ui->ID->text().toInt();
    ui->ID->setValidator(new QIntValidator(0,99999999,this));
    QString nom = ui->Nom->text();
    QString prenom = ui->Prenom->text();
    QString sexe = ui->Sexe->text();
    int tel = ui->Tel->text().toInt();
    QString nompap = ui->Nompap->text();
    QString prenompap = ui->Prenompap->text();
    int telpap = ui->Telpap->text().toInt();
    QString adresse = ui->Adresse->text();
    QString situationf = ui->SituationF->text();
    QString assurancemed = ui->AssuranceMed->text();
    QString codeassurance = ui->CodeAssurance->text();
    QString date_naissance = ui->Datenaissance->text();
    QString typep = ui->TypePatients->text();




 patient p(id,nom,prenom,sexe,tel,nompap,prenompap,telpap,adresse,situationf,assurancemed,codeassurance,date_naissance,typep);
 bool test=p.ajouter();

 QMessageBox msgBox;
ui->tab_patients->setModel(tmppatient.afficher());//refresh
 if(test)
   {
     foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
        le->clear();
     }
     msgBox.setText("Ajout avec succes.");
      ui->tab_patients->setModel(tmppatient.afficher());//refresh
     QMessageBox::information(nullptr, QObject::tr("Ajouter un patient"),
                       QObject::tr("patient ajouté.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);


 }
 else
 QMessageBox::critical(nullptr, QObject::tr("Ajouter un patient"),
                 QObject::tr("Erreur !.\n"
                             "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pb_ajouter_clicked2()
{
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();

    //RDV
    int coderdv=ui->CodeRDV->text().toInt();
    ui->CodeRDV->setValidator(new QIntValidator(0,999,this));
    QString medecin=ui->Docteur->text();
    QString date_rdv=ui->datea->text();
    QString time_rdv=ui->timea->text();
    QString service=ui->Servicea->text();
    int id_p=ui->ID_3a->text().toInt();
    ui->ID_3a->setValidator(new QIntValidator(0,99999999,this));
     rdv r(coderdv, medecin, date_rdv, time_rdv, service, id_p);

    bool test=r.ajouter();
    QMessageBox msgBox;
ui->tab_rdv->setModel(tmprdv.afficher());//refresh
    if(test)
      { foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
            le->clear();
         }
        QFile file("C:/Users/HP/Desktop/E-Clinic/Historique/HistoriqueRDV.txt");
        if (!file.open(QIODevice::WriteOnly | QIODevice::Append |QIODevice::Text))
            return;
        QTextStream cout(&file);
        QString coderdv_string= QString::number(coderdv);
        QString id_p_string= QString::number(id_p);
        QString message2="\n Rendez-vous a été ajoutée sous le code :"+coderdv_string+" et sous l'id du patient : "+id_p_string+"";
        cout << message2;
        msgBox.setText("Ajout avec succes.");

        ui->tab_rdv->setModel(tmprdv.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Ajouter un rendez-vous"),
                          QObject::tr("rendez-vous ajouté.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
    QMessageBox::critical(nullptr, QObject::tr("Ajouter un rendez-vous"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pb_afficher_clicked1(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    ui->tab_patients->setModel(tmppatient.afficher());
}

void MainWindow::on_pb_afficher_clicked2(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    ui->tab_rdv->setModel(tmprdv.afficher());
}

void MainWindow::on_pb_supprimer_clicked()
{//button sound
    click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();


        int id = ui->ID_5->text().toInt();
        bool test=tmppatient.supprimer(id);
        ui->tab_patients->setModel(tmppatient.afficher());//refresh
        if(test)
        {foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                le->clear();
             }
            ui->tab_patients->setModel(tmppatient.afficher());//refresh
            QMessageBox::information(nullptr, QObject::tr("Supprimer un patient"),
                        QObject::tr("patient supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un patient"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);


}
void MainWindow::on_pb_supprimer_clicked2()
{//button sound
    click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/E-Clinic/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();

    int coderdv = ui->CodeRDV_2->text().toInt();
    bool test=tmprdv.supprimer(coderdv);
    QMessageBox msgBox;
    ui->tab_rdv->setModel(tmprdv.afficher());//refresh
    if(test)
       {foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
            le->clear();
         }
        QFile file("C:/Users/HP/Desktop/E-Clinic/Historique/HistoriqueRDV.txt");
        if (!file.open(QIODevice::WriteOnly | QIODevice::Append |QIODevice::Text))
            return;
        QTextStream cout(&file);
        QString coderdv_string= QString::number(coderdv);
        QString message2="\n Rendez-vous a été supprimer sous le code :"+coderdv_string+"";
        cout << message2;
        ui->tab_rdv->setModel(tmprdv.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un rendez-vous"),
                    QObject::tr("rendez-vous supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
    QMessageBox::critical(nullptr, QObject::tr("Supprimer un rendez-vous"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_pb_modifier_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();

    // QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
       QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);

    int coderdv=ui->CodeRDV_3->text().toInt();
    ui->CodeRDV_3->setValidator(new QIntValidator(0,999,this));
    ui->CodeRDV_3->setValidator(validator_int);
    QString medecin=ui->Docteur_3->text();
  //ui->Docteur_3->setValidator(validator_String);
    QString date_rdv=ui->datem->text();
  //ui->datem->setValidator(validator_String);
    QString time_rdv=ui->timem->text();
   //ui->timem->setValidator(validator_String);
    QString service=ui->Service_3->text();
  //ui->Service_3->setValidator(validator_String);
    int id_p=ui->ID_4m->text().toInt();
     ui->ID_4m->setValidator(validator_int);
      ui->ID_4m->setValidator(new QIntValidator(0,99999999,this));

      rdv r(coderdv, medecin, date_rdv, time_rdv, service, id_p);
      bool test=r.modifier_r();

      ui->tab_rdv->setModel(tmprdv.afficher());   //refresh

      QMessageBox msgBox;
              ui->tab_rdv->setModel(tmprdv.afficher());   //refresh


              if(test /*&& r.search(coderdv)==true*/){
                  foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                     le->clear();
                  }
                  QFile file("C:/Users/HP/Desktop/E-Clinic/Historique/HistoriqueRDV.txt");
                  if (!file.open(QIODevice::WriteOnly | QIODevice::Append |QIODevice::Text))
                      return;
                  QTextStream cout(&file);
                  QString coderdv_string= QString::number(coderdv);
                  QString id_p_string= QString::number(id_p);
                  QString message2="\n Rendez-vous a été modifier sous le code :"+coderdv_string+" et sous l'id du patient : "+id_p_string+"";
                  cout << message2;
                  msgBox.setText("modifier avec succes.");
                   ui->tab_rdv->setModel(tmprdv.afficher());   //refresh

                   QMessageBox::information(this, QObject::tr("Modifier un rdv"),
                   QObject::tr("rdv modifiée.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);


               }
                 else
                    QMessageBox::critical(this, QObject::tr("Modifier un rdv"),
                                 QObject::tr("Erreur !.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
}
void MainWindow::on_pb_modifier_clicked_2(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();

    QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
    QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);


    int id = ui->ID_2->text().toInt();
    ui->ID_2->setValidator(new QIntValidator(0,99999999,this));
    ui->ID_2->setValidator(validator_int);
    QString nom = ui->Nom_2->text();
    ui->Nom_2->setValidator(validator_String);
    QString prenom = ui->Prenom_2->text();
    ui->Prenom_2->setValidator(validator_String);
    QString sexe = ui->Sexe_2->text();
    ui->Sexe_2->setValidator(validator_String);
    int tel = ui->Tel_2->text().toInt();
    ui->Tel_2->setValidator(validator_int);
    QString nompap = ui->Nompap_2->text();
    ui->Nompap_2->setValidator(validator_String);
    QString prenompap = ui->Prenompap_2->text();
    ui->Prenompap_2->setValidator(validator_String);
    int telpap = ui->Telpap_2->text().toInt();
    ui->Telpap_2->setValidator(validator_int);
    QString adresse = ui->Adresse_2->text();
    ui->Adresse_2->setValidator(validator_String);
    QString situationf = ui->SituationF_2->text();
    ui->SituationF_2->setValidator(validator_String);
    QString assurancemed = ui->AssuranceMed_2->text();
    ui->AssuranceMed_2->setValidator(validator_String);
    QString codeassurance = ui->CodeAssurance_2->text();
    ui->CodeAssurance_2->setValidator(validator_String);
    QString date_naissance = ui->Datenaissance_2->text();
    ui->Datenaissance_2->setValidator(validator_String);
    QString typep = ui->TypePatients_2->text();
    ui->TypePatients_2->setValidator(validator_String);





patient p(id,nom,prenom,sexe,tel,nompap,prenompap,telpap,adresse,situationf,assurancemed,codeassurance,date_naissance,typep);
        bool test=p.modifier_patient();
QMessageBox msgBox;
        ui->tab_patients->setModel(tmppatient.afficher());   //refresh



        if(test /*&& p.search(id)==true*/){
            foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
               le->clear();
            }
            msgBox.setText("modifier avec succes.");
             ui->tab_patients->setModel(tmppatient.afficher());   //refresh

             QMessageBox::information(this, QObject::tr("Modifier un patient"),
             QObject::tr("patient modifiée.\n"
                         "Click Cancel to exit."), QMessageBox::Cancel);


         }
           else
              QMessageBox::critical(this, QObject::tr("Modifier un patient"),
                           QObject::tr("Erreur !.\n"
                                       "Click Cancel to exit."), QMessageBox::Cancel);
}
//tri rdv

void MainWindow::on_pb_asc_tri_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    ui->tab_rdv->setModel(tmprdv.afficher_asc());
}

void MainWindow::on_pb_desc_tri_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    ui->tab_rdv->setModel(tmprdv.afficher_desc());
}


void MainWindow::on_pb_asc_triID_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    ui->tab_rdv->setModel(tmprdv.afficher_idCroissant());
}

void MainWindow::on_pb_desc_triID_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    ui->tab_rdv->setModel(tmprdv.afficher_idDecroissant());
}
void MainWindow::on_pb_asc_triDoc_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    ui->tab_rdv->setModel(tmprdv.afficher_DocCroissant());
}

void MainWindow::on_pb_desc_triDoc_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    ui->tab_rdv->setModel(tmprdv.afficher_DocDecroissant());
}


//tri patient
void MainWindow::on_pb_asc_tri_clicked_2(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    //ui->tmppatient_tri->setModel(tmppatient.afficher_asc());
        ui->tab_patients->setModel(tmppatient.afficher_asc());

}

void MainWindow::on_pb_desc_tri_clicked_2(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    //ui->tmppatient_tri->setModel(tmppatient.afficher_desc());
        ui->tab_patients->setModel(tmppatient.afficher_desc());
}
void MainWindow::on_pb_asc_triTYPE_clicked_2(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    //ui->tmppatient_tri->setModel(tmppatient.afficher_asctype());
        ui->tab_patients->setModel(tmppatient.afficher_asctype());
}

void MainWindow::on_pb_desc_triTYPE_clicked_2(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();

    //ui->tmppatient_tri->setModel(tmppatient.afficher_desctype());
        ui->tab_patients->setModel(tmppatient.afficher_desctype());
}
void MainWindow::on_pb_asc_tri_clicked_6(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    //ui->tmppatient_tri->setModel(tmppatient.afficher_asc());
        ui->tab_patients->setModel(tmppatient.afficher_ascassu());

}

void MainWindow::on_pb_desc_tri_clicked_6(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    //ui->tmppatient_tri->setModel(tmppatient.afficher_desc());
        ui->tab_patients->setModel(tmppatient.afficher_descassu());
}

//print
void MainWindow::on_pushButton_2_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();

    QPrinter printer;
    printer.setPrinterName("desired printer name");
    QPrintDialog dialog(&printer,this);
    if (dialog.exec() == QDialog::Rejected) return ;
    ui->tab_patients->render(&printer);
}
void MainWindow::on_pb_aff_client_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    int id = ui->lineEdit_aff_idpatient->text().toInt();
   // ui->tab_aff_patient->setModel(tmppatient.afficher_idpatient(id));
    ui->tab_patients->setModel(tmppatient.afficher_idpatient(id));
}
void MainWindow::on_pb_aff_client_clicked2(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    QString nom = ui->lineEdit_aff_nompatient->text();
   // ui->tab_aff_patient->setModel(tmppatient.afficher_idpatient(id));
    ui->tab_patients->setModel(tmppatient.afficher_nompatient(nom));
}
void MainWindow::on_pb_aff_client_clicked3(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
        QString prenom = ui->lineEdit_aff_prenompatient->text();
       // ui->tab_aff_patient->setModel(tmppatient.afficher_idpatient(id));
        ui->tab_patients->setModel(tmppatient.afficher_nompatient(prenom));
}

void MainWindow::on_pb_aff_rdv_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    int coderdv = ui->lineEdit_aff_coderdv->text().toInt();
    ui->tab_rdv->setModel(tmprdv.afficher_coderdv(coderdv));
}
void MainWindow::on_pb_aff_rdv_clicked2(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    QString medecin = ui->lineEdit_aff_doc->text();
    ui->tab_rdv->setModel(tmprdv.afficher_doc(medecin));
}
void MainWindow::on_pb_aff_rdv_clicked3(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    int id_p = ui->lineEdit_aff_ID->text().toInt();
    ui->tab_rdv->setModel(tmprdv.afficher_ID(id_p));
}

void MainWindow::timefct()
{
    QTime time  = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->label->setText(time_text);
    ui->label_2->setText(time_text);

}

//text to speech
void MainWindow::speak()
{
    m_speech->say(ui->plainTextEdit->toPlainText());
}



void MainWindow::stop()
{
    m_speech->stop();
}

void MainWindow::setRate(int rate)
{
    m_speech->setRate(rate / 10.0);
}

void MainWindow::setPitch(int pitch)
{
    m_speech->setPitch(pitch / 10.0);
}

void MainWindow::setVolume(int volume)
{
    m_speech->setVolume(volume / 100.0);
}

void MainWindow::stateChanged(QTextToSpeech::State state)
{
    /*if (state == QTextToSpeech::Speaking) {
        ui.statusbar->showMessage("Speech started...");
    } else if (state == QTextToSpeech::Ready)
        ui.statusbar->showMessage("Speech stopped...", 2000);
    else if (state == QTextToSpeech::Paused)
        ui.statusbar->showMessage("Speech paused...");
    else
        ui.statusbar->showMessage("Speech error!");*/

    ui->pauseButton_4->setEnabled(state == QTextToSpeech::Speaking);
    ui->resumeButton_4->setEnabled(state == QTextToSpeech::Paused);
    ui->stopButton_4->setEnabled(state == QTextToSpeech::Speaking || state == QTextToSpeech::Paused);
}

void MainWindow::engineSelected(int index)
{
    QString engineName = ui->engine_4->itemData(index).toString();
    delete m_speech;
    if (engineName == "default")
        m_speech = new QTextToSpeech(this);
    else
        m_speech = new QTextToSpeech(engineName, this);
    //disconnect(ui.language, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &SpeekAjouter::languageSelected);
    ui->language_4->clear();
    // Populate the languages combobox before connecting its signal.
    const QVector<QLocale> locales = m_speech->availableLocales();
    QLocale current = m_speech->locale();
    for (const QLocale &locale : locales) {
        QString name(QString("%1 (%2)")
                     .arg(QLocale::languageToString(locale.language()))
                     .arg(QLocale::countryToString(locale.country())));
        QVariant localeVariant(locale);
        ui->language_4->addItem(name, localeVariant);
        if (locale.name() == current.name())
            current = locale;
    }
    setRate(ui->rate_4->value());
    setPitch(ui->pitch_4->value());
    setVolume(ui->volume_4->value());
    connect(ui->stopButton_4, &QPushButton::clicked, m_speech, &QTextToSpeech::stop);
    connect(ui->pauseButton_4, &QPushButton::clicked, m_speech, &QTextToSpeech::pause);
    connect(ui->resumeButton_4, &QPushButton::clicked, m_speech, &QTextToSpeech::resume);

    connect(m_speech, &QTextToSpeech::stateChanged, this, &MainWindow::stateChanged);
    connect(m_speech, &QTextToSpeech::localeChanged, this, &MainWindow::localeChanged);

    //connect(ui.language, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &SpeekAjouter::languageSelected);
    localeChanged(current);
}

/*void SpeekAjouter::languageSelected(int language)
{
    QLocale locale = ui.language->itemData(language).toLocale();
    m_speech->setLocale(locale);
    qDebug() << language ;
}*/
void MainWindow::languageSelectedfr()
{
    QLocale locale = ui->language_4->itemData(0).toLocale();
    m_speech->setLocale(locale);

}
void MainWindow::languageSelecteden()
{
    QLocale locale = ui->language_4->itemData(1).toLocale();
    m_speech->setLocale(locale);

}
void MainWindow::catlanguageSelectedfr()
{
    QLocale locale = ui->language_4->itemData(0).toLocale();
    m_speech->setLocale(locale);

}
void MainWindow::catlanguageSelecteden()
{
    QLocale locale = ui->language_4->itemData(1).toLocale();
    m_speech->setLocale(locale);

}

void MainWindow::planguageSelectedfr()
{
    QLocale locale = ui->language_4->itemData(0).toLocale();
    m_speech->setLocale(locale);

}
void MainWindow::planguageSelecteden()
{
    QLocale locale = ui->language_4->itemData(1).toLocale();
    m_speech->setLocale(locale);

}

void MainWindow::voiceSelected(int index)
{
    m_speech->setVoice(m_voices.at(index));
}

void MainWindow::localeChanged(const QLocale &locale)
{
    QVariant localeVariant(locale);
    ui->language_4->setCurrentIndex(ui->language_4->findData(localeVariant));

    disconnect(ui->voice_4, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &MainWindow::voiceSelected);
    ui->voice_4->clear();

    m_voices = m_speech->availableVoices();
    QVoice currentVoice = m_speech->voice();
    for (const QVoice &voice : qAsConst(m_voices)) {
        ui->voice_4->addItem(QString("%1 - %2 - %3").arg(voice.name())
                          .arg(QVoice::genderName(voice.gender()))
                          .arg(QVoice::ageName(voice.age())));
        if (voice.name() == currentVoice.name())
            ui->voice_4->setCurrentIndex(ui->voice_4->count() - 1);
    }
    connect(ui->voice_4, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &MainWindow::voiceSelected);
}

//historique
void MainWindow::ouvrirrdv()
{
    QFile file ("C:/Users/HP/Desktop/E-Clinic/Historique/HistoriqueRDV.txt");
    if (!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0,"info",file.errorString());
    }
    QTextStream in (&file);
   ui->rdv_Historique->setText(in.readAll());

}
//recherche Historique
void MainWindow::on_pushButton_8_clicked()
{
    QString searchString = ui->Recherche_Historique->text();
    QTextDocument *document = ui->rdv_Historique->document();
   ouvrirrdv();
    bool found = false;

    document->undo();

    if (searchString.isEmpty()) {
        QMessageBox::information(this, tr("Empty Search Field"),
                                 tr("The search field is empty. "
                                    "Please enter a word and click Find."));
    } else {
        QTextCursor highlightCursor(document);
        QTextCursor cursor(document);

        cursor.beginEditBlock();


        QTextCharFormat plainFormat(highlightCursor.charFormat());
        QTextCharFormat colorFormat = plainFormat;
        colorFormat.setForeground(Qt::red);

        while (!highlightCursor.isNull() && !highlightCursor.atEnd()) {
            highlightCursor = document->find(searchString, highlightCursor,
                                             QTextDocument::FindWholeWords);

            if (!highlightCursor.isNull()) {
                found = true;
                highlightCursor.movePosition(QTextCursor::WordRight,
                                             QTextCursor::KeepAnchor);
                highlightCursor.mergeCharFormat(colorFormat);

            }
        }


        cursor.endEditBlock();

        if (found == false) {
            QMessageBox::information(this, tr("Word Not Found"),
                                     tr("Sorry, the word cannot be found."));
        }
    }
}



//***************************************************************************************************************************************************
//nour

void MainWindow::on_ajm_clicked() // bouton ajouter
{



        click->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Documents/2eme_annee/projet c++/try/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
        //recuperation des 3 informations saisies dans les 3 champs
        int id=ui->idd->text().toInt();

        QString nom=ui->nom->text();
        QString prenom=ui->prenom->text();
        QString specialite=ui->specialite->text();
        QString tel=ui->tel->text();
        Medecin M(id,nom,prenom,specialite,tel) ;// instancier un objet de la classe medecin en utulisant les info saisies dans l'interface
        bool test=M.ajouter();
        if (test)
          { ui->tableView->setModel(Etmp.afficher()); // actualiser

            QMessageBox :: information (nullptr, QObject::tr("OK"),
            QObject::tr("Ajout effectué\n" "Click cancel to exist\n"), QMessageBox::Cancel);

          }
        else
          {  QMessageBox::critical(nullptr , QObject::tr("NOT OK"),
                                 QObject::tr("Ajout non effectué.\n""Click cancel to exist.")
                                 ,QMessageBox::Cancel);

          }

}

void MainWindow::on_sm_clicked()  // bouton supprimer
{
  /*  QPushButton button("Oops! vous venez de perdre un medecin!");
       button.show();

       QPropertyAnimation animation(&button, "geometry");
       animation.setDuration(3000);
       animation.setStartValue(QRect(500, 500, 200, 30));
       animation.setEndValue(QRect(600, 400, 300, 50));



       animation.start();*/
       click->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Documents/2eme_annee/projet c++/try/Click.mp3"));
       click->play();
       qDebug()<<click ->errorString();

       int id=ui->lineEdit_4->text().toInt();
       bool test=Etmp.supprimer(id);
       if (test)
         {  ui->tableView->setModel(Etmp.afficher());

           QMessageBox :: information (nullptr, QObject::tr("OK"),
           QObject::tr("Suppression effectué\n" "Click cancel to exist\n"), QMessageBox::Cancel);

         }
       else
         {  QMessageBox::critical(nullptr , QObject::tr("NOT OK"),
                                QObject::tr("Suppression non effectué.\n""Click cancel to exist.")
                                ,QMessageBox::Cancel);

         }

}



void MainWindow::on_ajs_clicked() // bouton ajouter service
{  click->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Documents/2eme_annee/projet c++/try/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    //recuperation des 3 informations saisies dans les 3 champs
  int ids=ui->idss->text().toInt();
  ui->idd->setValidator(new QIntValidator(0,99999999,this));


    QString type=ui->type->text();
    QDate date=ui->dateEdit->date();
    QString heure=ui->heure->text();
    QString nom_med=ui->nommed->text();
    QString nom_pat=ui->nompat->text();
    int prix=ui->prix->text().toInt();
    service S(ids,type,date,heure,nom_med,nom_pat,prix) ;// instancier un objet de la classe service en utulisant les info saisies dans l'interface
    bool test=S.ajouterS();
    if (test)
      { ui->tableView_2->setModel(etmpp.afficherS()); // actualiser

        QMessageBox :: information (nullptr, QObject::tr("OK"),
        QObject::tr("Ajout effectué\n" "Click cancel to exist\n"), QMessageBox::Cancel);

      }
    else
      {  QMessageBox::critical(nullptr , QObject::tr("NOT OK"),
                             QObject::tr("Ajout non effectué.\n""Click cancel to exist.")
                             ,QMessageBox::Cancel);

      }

}

void MainWindow::on_ss_clicked() // bouton supprimer service
{  click->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Documents/2eme_annee/projet c++/try/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    int ids=ui->lineEdit_5->text().toInt();
        bool test=etmpp.supprimerS(ids);
        if (test)
          {  ui->tableView_2->setModel(etmpp.afficherS());

            QMessageBox :: information (nullptr, QObject::tr("OK"),
            QObject::tr("Suppression effectué\n" "Click cancel to exist\n"), QMessageBox::Cancel);

          }
        else
          {  QMessageBox::critical(nullptr , QObject::tr("NOT OK"),
                                 QObject::tr("Suppression non effectué.\n""Click cancel to exist.")
                                 ,QMessageBox::Cancel);

          }



}


void MainWindow::on_im_clicked() //imprimer medecin
{ click->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Documents/2eme_annee/projet c++/try/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QPrinter printer;
    printer.setPrinterName ("le nom de l'imprimante");
    QPrintDialog dialog(&printer,this);
    if (dialog.exec()== QDialog::Rejected)return;
    ui->tableView->render(&printer);
}




void MainWindow::on_impression_clicked() //imprimer service
{ click->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Documents/2eme_annee/projet c++/try/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QPrinter printer;
    printer.setPrinterName ("le nom de l'imprimante");
    QPrintDialog dialog(&printer,this);
    if (dialog.exec()== QDialog::Rejected)return;
    ui->tableView_2->render(&printer);
}

void MainWindow::on_rechercher_textChanged(const QString &arg1) //rechercher medecin
{


        if(ui->rechercher->text() == "")
            {
                ui->tableView->setModel(Etmp.afficher());
            }
            else
            {
                 ui->tableView->setModel(Etmp.rechercher(ui->rechercher->text()));
            }

}



void MainWindow::on_lineEdit_2_textChanged(const QString &arg1) //rechercher service
{

    if(ui->lineEdit_2->text() == "")
        {
            ui->tableView_2->setModel(etmpp.afficherS());
        }
        else
        {
             ui->tableView_2->setModel(etmpp.rechercherS(ui->lineEdit_2->text()));
        }

}

void MainWindow::on_pushButton_300_clicked() //trier service
{ /* click->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Documents/2eme_annee/projet c++/try/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QString critere=ui->tris_2->currentText();
        QString mode;
         if (ui->asc1->isChecked()==true)
    {
             mode="ASC";
    }
         else if(ui->desc1->isChecked()==true)
         {
             mode="DESC";
         }
      ui->tableView_2->setModel(etmpp.trierS(critere,mode));

*/
}

void MainWindow::on_modifierm_clicked() // modifier m
{


    click->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Documents/2eme_annee/projet c++/try/Click.mp3"));
       click->play();
       qDebug()<<click ->errorString();
       int id = ui->id_modfier->text().toInt();
       QString nom = ui->nom_modifier->text();
       QString prenom= ui->prenom_modifier->text();
       QString specialite= ui->specialie_modifier->text();

       QString tel =ui->tel_modifier->text() ;

       Medecin m(id,nom,prenom,specialite,tel);
       bool test =Etmp.modifier(id,nom,prenom,specialite,tel);

       if(test)
       {ui->tableView->setModel(Etmp.afficher());
           QMessageBox::information(nullptr, QObject::tr("modifier un medecin"),
                                    QObject::tr("medecin  modifié.\n"
                                                "Click Cancel to exit."), QMessageBox::Cancel);

       }
       else
           QMessageBox::critical(nullptr, QObject::tr("Modifier un medecin"),
                                 QObject::tr("Erreur !.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);

}




void MainWindow::on_tm_clicked() //trier medecin
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Documents/2eme_annee/projet c++/try/Click.mp3"));
       click->play();
       qDebug()<<click ->errorString();
       QString critere=ui->Trier->currentText();
           QString mode;
            if (ui->asc->isChecked()==true)
       {
                mode="ASC";
       }
            else if(ui->desc->isChecked()==true)
            {
                mode="DESC";
            }
         ui->tableView->setModel(Etmp.trier(critere,mode));


}

void MainWindow::on_select_clicked() //select medecin
{
     click->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Documents/2eme_annee/projet c++/try/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
        int row=ui->tableView->selectionModel()->currentIndex().row();
        QString id=ui->tableView->model()->index(row,0).data().toString(); //row = ligne / 0 : colonne
        QString nom=ui->tableView->model()->index(row,1).data().toString();
        QString prenom=ui->tableView->model()->index(row,2).data().toString();
        QString specialite=ui->tableView->model()->index(row,3).data().toString();
        QString tel=ui->tableView->model()->index(row,4).data().toString();

        if(row==-1)
        {
            QMessageBox ::information(nullptr,QObject::tr("modifier un medecin"),
                                              QObject::tr("aucune selection.\n"
                                                  "click ok to exit"),QMessageBox::Ok);
        }
        else
        {
            ui->id_modfier->setText(id);
            ui->nom_modifier->setText(nom);
            ui->prenom_modifier->setText(prenom);
            ui->specialie_modifier->setText(specialite);
          ui->tel_modifier->setText(tel);
        }
}

void MainWindow::on_select_s_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Documents/2eme_annee/projet c++/try/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
        int row=ui->tableView_2->selectionModel()->currentIndex().row();
        QString ids=ui->tableView_2->model()->index(row,0).data().toString(); //row = ligne / 0 : colonne
        QString type=ui->tableView_2->model()->index(row,1).data().toString();
        QDate date=ui->tableView_2->model()->index(row,2).data().toDate();
        QString heure=ui->tableView_2->model()->index(row,3).data().toString();
        QString nom_med=ui->tableView_2->model()->index(row,4).data().toString();
        QString nom_pat=ui->tableView_2->model()->index(row,5).data().toString();
        QString prix=ui->tableView_2->model()->index(row,6).data().toString();

        if(row==-1)
        {
            QMessageBox ::information(nullptr,QObject::tr("modifier un service"),
                                              QObject::tr("aucune selection.\n"
                                                  "click ok to exit"),QMessageBox::Ok);
        }
        else
        {
            ui->id_mod->setText(ids);
            ui->type_mod->setText(type);
            ui->date_mod->setDate(date);
            ui->heure_mod->setText(heure);
          ui->nomm_mod->setText(nom_med);
          ui->nomp_mod->setText(nom_pat);
          ui->prix_mod->setText(prix);
}
}



void MainWindow::on_modifier_service_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Documents/2eme_annee/projet c++/try/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
        int ids = ui->id_mod->text().toInt();
        QString type = ui->type_mod->text();
        QDate date= ui->date_mod->date();
        QString heure= ui->heure_mod->text();

        QString nom_med =ui->nomm_mod->text() ;
        QString nom_pat =ui->nomp_mod->text() ;
        int prix = ui->prix_mod->text().toInt();



        service s (ids,type,date,heure,nom_med,nom_pat,prix);
        bool test =etmpp.modifierS(ids,type,date,heure,nom_med,nom_pat,prix);

        if(test)
        {ui->tableView_2->setModel(etmpp.afficherS());
            QMessageBox::information(nullptr, QObject::tr("modifier un service"),
                                     QObject::tr("service  modifié.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Modifier un service"),
                                  QObject::tr("Erreur !.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
}




void MainWindow::on_ts_clicked() //trier service
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Documents/2eme_annee/projet c++/try/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
        QString critere=ui->tris_2->currentText();
            QString mode;
             if (ui->asc1->isChecked()==true)
        {
                 mode="ASC";
        }
             else if(ui->desc1->isChecked()==true)
             {
                 mode="DESC";
             }
          ui->tableView_2->setModel(etmpp.trierS(critere,mode));
}

void MainWindow::on_modifiermed_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/LENOVO/Documents/2eme_annee/projet c++/try/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
        int id = ui->id_modfier->text().toInt();
        QString nom = ui->nom_modifier->text();
        QString prenom= ui->prenom_modifier->text();
        QString specialite= ui->specialie_modifier->text();

        QString tel =ui->tel_modifier->text() ;

        Medecin m(id,nom,prenom,specialite,tel);
        bool test =Etmp.modifier(id,nom,prenom,specialite,tel);

        if(test)
        {ui->tableView->setModel(Etmp.afficher());
            QMessageBox::information(nullptr, QObject::tr("modifier un medecin"),
                                     QObject::tr("medecin  modifié.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Modifier un medecin"),
                                  QObject::tr("Erreur !.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
}
/***************************************************************************************************************************************************/
//skander
void MainWindow::myfunction()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->label_date_time_3->setText(time_text);
}
void MainWindow::on_pb_ajouter7_clicked()
{
    //QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
    //QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);
    int ID=ui->ID->text().toInt();
    QString encaissements=ui->encaissements_5->text();
    QString chiffres=ui->chiffres_5->text();
    QString gains=ui->gains_5->text();
    QString depenses=ui->depenses_5->text();
    QString salaires=ui->salaires_5->text();



 categories c(ID,encaissements,chiffres,gains,depenses,salaires);

 bool test1=c.ajouter();

 QMessageBox msgBox;

 if(test1)
   {  msgBox.setText("Ajout avec succes.");

      ui->tab_categories_3->setModel(tmpcategories.afficher());//refresh
     QMessageBox::information(nullptr, QObject::tr("Ajouter une categorie"),
                       QObject::tr("categorie ajouté.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);


 }
 else
     QMessageBox::critical(nullptr, QObject::tr("Ajouter une categorie"),
                 QObject::tr("Erreur !.\n"
                             "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pb_ajouter8_clicked()
{
    //fact/comm
    int idfc=ui->idfc_3->text().toInt();
    int qte=ui->qte_3->text().toInt();
    int pu=ui->pu_3->text().toInt();
    int pt=ui->pt_3->text().toInt();
    QString art=ui->art_3->text();
    QString tp=ui->tp_3->text();
    fctcmn r(idfc,art,qte,pu,pt,tp);

    bool test3=r.ajouter();
    QMessageBox msgBox;

    if(test3)
      {  msgBox.setText("Ajout avec succes.");

        ui->tab_fctcmn_3->setModel(tmpfct.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Ajouter une facture ou commande"),
                          QObject::tr("fact/comm ajouté.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Ajouter une factures ou commande"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pb_supprimerr3_clicked()
{


        int ID_66 = ui->ID_68->text().toInt();
        bool test3=tmpfct.supprimer(ID_66);
        if(test3)
        {ui->tab_fctcmn_3->setModel(tmpfct.afficher());//refresh
            QMessageBox::information(nullptr, QObject::tr("Supprimer unefacture ou une commande"),
                        QObject::tr("fact/comm supprimé.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Supprimer une facture ou une commande"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);


}
void MainWindow::on_pb_supprimerp3_clicked()
{

    int ID_5 = ui->ID_5->text().toInt();
    bool test1=tmpcategories.supprimer(ID_5);
    QMessageBox msgBox;
    if(test1)
       {ui->tab_categories_3->setModel(tmpcategories.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer une categorie"),
                    QObject::tr("categorie supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une categorie"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}


void MainWindow::on_pb_modifier6_clicked(){


    QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
    QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);

    int ID_12 = ui->ID_12->text().toInt();
    ui->ID_12->setValidator(validator_int);

    QString encaissements_6 = ui->encaissements_6->text();
    ui->encaissements_6->setValidator(validator_String);

    QString chiffres_6 = ui->chiffres_6->text();
    ui->chiffres_6->setValidator(validator_String);

    QString gains_6 = ui->gains_6->text();
    ui->gains_6->setValidator(validator_String);

    QString depenses_6 = ui->depenses_6->text();
    ui->depenses_6->setValidator(validator_String);

    QString salaires_6 = ui->salaires_6->text();
    ui->salaires_6->setValidator(validator_String);


    categories c(ID_12, encaissements_6, chiffres_6, gains_6, depenses_6, salaires_6);
    bool test=c.modifier_categories();

    ui->tab_categories_3->setModel(tmpcategories.afficher());   //refresh


        if(test){
                ui->tab_categories_3->setModel(tmpcategories.afficher());   //refresh

                QMessageBox::information(this, QObject::tr("Modifier une categorie"),
                QObject::tr("categorie modifiée.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


            }
              else
                  QMessageBox::critical(this, QObject::tr("Modifier une categorie"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
}


void MainWindow::on_pb_modifier7_clicked(){

    QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
    QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);


    int idfc_24 = ui->idfc_24->text().toInt();
    ui->idfc_24->setValidator(validator_int);

    QString art_24 = ui->art_24->text();
    ui->art_24->setValidator(validator_String);

    int qte_24 = ui->qte_24->text().toInt();
    ui->qte_24->setValidator(validator_int);

    int pu_24 = ui->pu_24->text().toInt();
    ui->pu_24->setValidator(validator_int);

    int pt_24 = ui->pt_24->text().toInt();
    ui->pt_24->setValidator(validator_int);

    QString tp_24 = ui->tp_24->text();
    ui->tp_24->setValidator(validator_String);



        fctcmn r(idfc_24, art_24, qte_24, pu_24, pt_24, tp_24);
        bool test=r.modifier_fctcmn();

        ui->tab_fctcmn_3->setModel(tmpfct.afficher());   //refresh
        if(test){
                ui->tab_fctcmn_3->setModel(tmpfct.afficher());   //refresh

                QMessageBox::information(this, QObject::tr("Modifier une facture ou une commande"),
                QObject::tr("fact/comm modifiée.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


            }
              else
                  QMessageBox::critical(this, QObject::tr("Modifier une facture ou une commande"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);



}

/*void MainWindow::on_pb_modifier_2_clicked(){


    QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
    QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);

    int idfc_22 = ui->idfc_22->text().toInt();
    ui->idfc_22->setValidator(validator_int);

    QString art_22 = ui->art_22->text();
    ui->art_22->setValidator(validator_String);

    int qte_22 = ui->qte_22->text().toInt();
    ui->qte_22->setValidator(validator_int);

    int pu_22 = ui->pu_22->text().toInt();
    ui->pu_22->setValidator(validator_int);

    int pt_22 = ui->pt_22->text().toInt();
    ui->pt_22->setValidator(validator_int);

    QString tp_22 = ui->tp_22->text();
    ui->tp_22->setValidator(validator_String);


    fctcmn r(idfc_22, art_22, qte_22, pu_22, pt_22, tp_22);
    bool test=r.modifier_fctcmn();

    ui->tab_fctcmn->setModel(tmpfct.afficher());   //refresh


        if(test){
                ui->tab_fctcmn->setModel(tmpfct.afficher());   //refresh

                QMessageBox::information(this, QObject::tr("Modifier une facture ou une commande"),
                QObject::tr("fact/comm modifiée.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


            }
              else
                  QMessageBox::critical(this, QObject::tr("Modifier une facture ou une commande"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
}*/


void MainWindow::on_pushButton_9_clicked(){

    QPrinter printer;
    printer.setPrinterName("desired printer name");
    QPrintDialog dialog(&printer,this);
    if (dialog.exec() == QDialog::Rejected) return ;
    ui->tab_categories_3->render(&printer);
}
void MainWindow::on_pushButton_11_clicked(){

    QPrinter printer;
    printer.setPrinterName("desired printer name");
    QPrintDialog dialog(&printer,this);
    if (dialog.exec() == QDialog::Rejected) return ;
    ui->tab_fctcmn_3->render(&printer);
}
void MainWindow::on_pb_aff_fctcmn_clicked()
{
    QString chaine;
    chaine=ui->lineEdit_aff_idfctcmn_3->text();
    fctcmn r;

    QSqlQueryModel * model =new QSqlQueryModel();
    model = r.rechercher(chaine);
    ui->tab_aff_fctcmn_3->setModel(model);

}
void MainWindow::on_pb_aff_categorie_clicked()
{
    QString chaine;
    chaine=ui->lineEdit_aff_idcategories_3->text();
    categories c;

    QSqlQueryModel * model =new QSqlQueryModel();
    model = c.rechercher(chaine);
    ui->tab_aff_categories_3->setModel(model);

}

 /*void SMTPClient::sendEmail()
{
    // Create the email object
    Email email = createEmail();
    // Create the SMTPClient
    client_ = new SMTPClient(ui->lineEditHost->text(),
                             ui->spinBoxPort->value());
    // Connection used to receive the results
    connect(client_, SIGNAL(status(Status::e, QString)),
            this, SLOT(onStatus(Status::e, QString)), Qt::UniqueConnection);
    // Try to send the email
    client_->sendEmail(email);
}
Email SMTPClient::createEmail()
{
    // Create the credentials EmailAddress
    EmailAddress credentials(ui->lineEditEmailCredentials->text(),
                             ui->lineEditPasswordCredentials->text());
    // Create the from EmailAddress
    EmailAddress from(ui->lineEditEmailFrom->text());
    // Create the to EmailAddress
    EmailAddress to(ui->lineEditEmailTo->text());
    // Create the email
    Email email(credentials,
                from,
                to,
                ui->lineEditSubject->text(),
                ui->textEditContent->toPlainText());
    return email;
}
void SMTPClient::clearFields()
{
    ui->lineEditEmailCredentials->clear();
    ui->lineEditPasswordCredentials->clear();
    ui->lineEditEmailFrom->clear();
    ui->lineEditEmailTo->clear();
    ui->lineEditSubject->clear();
    ui->textEditContent->clear();
}
void print::onStatus(Status::e status, QString errorMessage)
{
    // Show a message based on the Status
    switch (status)
    {
    case Status::Success:
        QMessageBox::information(NULL, tr("SMTPClient"), tr("Message successfully sent!"));
        break;
    case Status::Failed:
    {
        QMessageBox::warning(NULL, tr("SMTPClient"), tr("Could not send the message!"));
        qCritical() << errorMessage;
    }
        break;
    default:
        break;
    }
    // Delete the client pointer
    client_->deleteLater();
}*/

void MainWindow::on_choisir_clicked()
{
    QString filename= QFileDialog::getOpenFileName(this, "choisir");
    if (filename.isEmpty()){
        return;}
    mMediaPlayer->setMedia(QUrl::fromLocalFile(filename));
    mMediaPlayer->setVolume(ui->volume_3->value());
    on_play_clicked();

}


void MainWindow::on_play_clicked()
{
    mMediaPlayer->play();
}

void MainWindow::on_pause_clicked()
{
    mMediaPlayer->pause();
}

void MainWindow::on_stop_clicked()
{
    mMediaPlayer->stop();
}

void MainWindow::on_mute_clicked()
{
    if (ui->mute_3->text()=="Mute"){
    mMediaPlayer->setMuted(true);
    ui->mute_3->setText("Unmute");}
    else {mMediaPlayer->setMuted(false);
        ui->mute_3->setText("Mute");}
}


void MainWindow::on_volume_valueChanged(int value)
{
mMediaPlayer->setVolume(value);
}

void MainWindow::on_pushButton_10_clicked()
{
    QString critere=ui->Trier->currentText();
        QString mode;
         if (ui->asc->isChecked()==true)
    {
             mode="ASC";
    }
         else if(ui->desc->isChecked()==true)
         {
             mode="DESC";
         }
      ui->tab_categories_3->setModel(tmpcategories.trier(critere,mode));

}
/************************************************************************************************************************************/
//chedi
void MainWindow::on_pushButton_AjouterMenu_clicked()
{
    if(ui->lineEdit->text()!="" && ui->lineEdit_2->text()!="" && ui->lineEdit_3->text()!="")
    {

        menu m(ui->lineEdit->text(),ui->lineEdit_2->text(),ui->lineEdit_3->text());

        bool testajouter=m.ajouterMenu();
                                if(testajouter)
                                {
                                    qDebug()<<" Ajouter Avec Succes ";
                                    ui->lineEdit->clear();ui->lineEdit_2->clear();ui->lineEdit_3->clear();
                                }else
                                    qDebug()<<"Errur ajouter Menu";


    }
}

void MainWindow::on_pushButton_AfficherMenu_clicked()
{

   ui->tabMenu->setModel(tmpMenu.afficherMenu());

}



void MainWindow::on_Supprimer_menu_clicked()
{
    if(ui->lineEdit_ID_SupprimerMenu->text()!="")
    {
        bool test=tmpMenu.supprimerMenu(ui->lineEdit_ID_SupprimerMenu->text().toInt());
              if (test)
              {
                  ui->tabMenu->setModel(tmpMenu.afficherMenu());//refrech
                  ui->lineEdit_ID_SupprimerMenu->clear();
              }


    }
}

void MainWindow::on_Modifier_menu_clicked()
{
    if(ui->lineEdit_Modifier->text()!="")
    {
        menu m(ui->lineEdit_12->text(),ui->lineEdit_13->text(),ui->lineEdit_14->text());

        bool testModifier=m.modifierMenu(ui->lineEdit_Modifier->text().toInt());
            if(testModifier)
            {   m.afficherMenu();
                ui->lineEdit_Modifier->clear();ui->lineEdit_12->clear();ui->lineEdit_13->clear();
                ui->lineEdit_14->clear();


            }


    }
}




//************************************************************* Gerer Elements ************************************************


void MainWindow::on_pushButton_AjouterElem_clicked()
{
    if(ui->lineEdit_4->text() !="" && ui->lineEdit_5->text() !="" )
    {
        element e(ui->lineEdit_4->text(),ui->lineEdit_5->text());
        bool testAjouterElem(e.ajouterElement());
        if(testAjouterElem)
        {
            qDebug()<<" Ajouter Avec Succes ";
            ui->lineEdit_4->clear();ui->lineEdit_5->clear();
        }else
            qDebug()<<"Errur ajouter Element";

    }
}


void MainWindow::on_pushButton_AfficherElem_clicked()
{
    ui->tabelm->setModel(tmpElem.afficherElement());

}

void MainWindow::on_modifier_element_clicked()
{
    if(ui->lineEdit_id_elemnt->text()!="")
    {
        element e(ui->lineEdit_nom_element->text(),ui->lineEdit_qt_element->text());
        bool testModifier=e.modifierElement(ui->lineEdit_id_elemnt->text().toInt());
            if(testModifier)
            {
                ui->lineEdit_id_elemnt->clear();ui->lineEdit_nom_element->clear();ui->lineEdit_qt_element->clear();
            }
    }
}

void MainWindow::on_supprimer_elemnt_clicked()
{
    if(ui->lineEdit_sup_id_element->text()!="")
    {
        bool test=tmpElem.supprimerElement(ui->lineEdit_sup_id_element->text().toInt());
              if (test)
              {
                  ui->tabelm->setModel(tmpElem.afficherElement());//refrech
                  ui->lineEdit_sup_id_element->clear();
              }

    }
}




void MainWindow::on_pushButton_12_clicked()
{
    QString critere=ui->Trier_5->currentText();
        QString mode;
         if (ui->asc->isChecked()==true)
    {
             mode="ASC";
    }
         else if(ui->desc->isChecked()==true)
         {
             mode="DESC";
         }
      ui->tabelm->setModel(tmpElem.trier(critere,mode));
}

void MainWindow::on_pushButton_13_clicked()
{
    QPrinter printer;
    printer.setPrinterName("desired printer name");
    QPrintDialog dialog(&printer,this);
    if (dialog.exec() == QDialog::Rejected) return ;
    ui->tabelm->render(&printer);
}

