#include "mainwindow.h"
#include <QMediaPlayer>
#include "patient.h"
#include "rdv.h"
#include <QMediaPlaylist>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tab_patients->setModel(tmppatient.afficher());
    ui->tab_rdv->setModel(tmprdv.afficher());


    //sound
    click = new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));


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
    click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Click.mp3"));
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





/*void MainWindow::verify()
{
    QString medecin= ui->doc->text();
    int id_p =ui->idp->text().toInt() ;
    bool test=tmprdv.exist(medecin,id_p) ;
    ui->tab_rdv->setModel(tmprdv.afficher()) ;
    if(test){
         ui->tab_rdv->setModel(tmprdv.afficher()) ;   //refresh

         QMessageBox::information(this, QObject::tr("update rdv"),
         QObject::tr("rdv updated.\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);


     }
       else
          QMessageBox::critical(this, QObject::tr("update rdv"),
                       QObject::tr("Erreur !.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);
}*/












/*void MainWindow::sendEmail()
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


Email MainWindow::createEmail()
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


void MainWindow::clearFields()
{
    ui->lineEditEmailCredentials->clear();
    ui->lineEditPasswordCredentials->clear();
    ui->lineEditEmailFrom->clear();
    ui->lineEditEmailTo->clear();
    ui->lineEditSubject->clear();
    ui->textEditContent->clear();
}


void MainWindow::onStatus(Status::e status, QString errorMessage)
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
}
*/
