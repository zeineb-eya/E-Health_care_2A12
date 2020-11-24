#include "mainwindow.h"

#include "patient.h"
#include "rdv.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tab_patients->setModel(tmppatient.afficher());
    ui->tab_rdv->setModel(tmprdv.afficher());


    // Connect all signals and slots
    connect(ui->pb_ajouter, SIGNAL(clicked(bool)), this, SLOT(on_pb_ajouter_clicked())); //ajout p
    connect(ui->pb_ajouter_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_ajouter_clicked2())); //ajout r

    connect(ui->supprimerp, SIGNAL(clicked(bool)), this, SLOT(on_pb_supprimer_clicked())); //supp p
    connect(ui->supprimerr, SIGNAL(clicked(bool)), this, SLOT(on_pb_supprimer_clicked2())); //sup r

    connect(ui->pb_modifier_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_modifier_clicked())); //modifier p
    connect(ui->pb_modifier, SIGNAL(clicked(bool)), this, SLOT(on_pb_modifier_clicked_2())); //modifier r
    connect(ui->pushButton_1, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_2_clicked())); // print

    connect(ui->pb_asc_tri, SIGNAL(clicked(bool)), this, SLOT(on_pb_asc_tri_clicked()));
    connect(ui->pb_desc_tri, SIGNAL(clicked(bool)), this, SLOT(on_pb_desc_tri_clicked()));
    connect(ui->pb_asc_tri_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_asc_tri_clicked_2()));
    connect(ui->pb_desc_tri_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_desc_tri_clicked_2()));



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


void MainWindow::on_pb_ajouter_clicked()
{   //IP
    int id=ui->ID->text().toInt();
    int tel=ui->Tel->text().toInt();
    int telpap=ui->Telpap->text().toInt();
    QString nom=ui->Nom->text();
    QString prenom=ui->Prenom->text();
    QString sexe=ui->Sexe->text();
    QString date_naissance=ui->Datenaissance->text();
    QString typep=ui->TypePatients->text();
    QString adresse=ui->Adresse->text();
    QString situationf=ui->SituationF->text();
    QString assurancemed=ui->AssuranceMed->text();
    QString codeassurance=ui->CodeAssurance->text();
    QString nompap=ui->Nompap->text();
    QString prenompap=ui->Prenompap->text();

    QString datepres=ui->Date_Prescription->text();
    QString note=ui->NotePres->text();
    QString designationexb=ui->DesiEB->text();
    QString resultatexb=ui->resEB->text();
    QString designationexr=ui->DesiER->text();
    QString resultatexr=ui->resER->text();
    QString chirurigien=ui->Chirurigien->text();
    QString anesthesist=ui->anesthesist->text();
    QString dateadm=ui->Date_admission->text();
    QString typeadm=ui->Type_A->text();
    QString motifadm=ui->Motif_A->text();
    QString nomacc=ui->NomAc->text();
    QString prenomacc=ui->PrenomAC->text();
    QString lienpar=ui->Lien_P->text();
    QString dateent=ui->Date_entree->text();
    QString datesor=ui->Date_sortie->text();
    QString motifsor=ui->motif_S->text();
    QString resultatsor=ui->Resu_S->text();
    QString datedec=ui->Date_deces->text();
    QString motifdec=ui->motifDEC->text();
    QString datetrait=ui->Date_traitment->text();
    QString medadm=ui->NomMed->text();

 patient p(id,tel,telpap,nom,prenom,nompap,prenompap,adresse,situationf,assurancemed,codeassurance, typep, date_naissance,sexe,datepres,note,designationexr,resultatexr,designationexb,resultatexb,chirurigien,anesthesist,dateadm,typeadm,motifadm,nomacc,prenomacc,lienpar,dateent,datesor,motifsor,resultatsor,datedec,motifdec,datetrait,medadm);

 bool test=p.ajouter();

 QMessageBox msgBox;

 if(test)
   {  msgBox.setText("Ajout avec succes.");

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
    //RDV
    int coderdv=ui->CodeRDV->text().toInt();
    int id_p=ui->ID_3->text().toInt();
    QString medecin=ui->Docteur->text();
    QString service=ui->Service->text();
    QString date_rdv=ui->dateEdit_4->text();
    QString time_rdv=ui->timeEdit->text();
    rdv r(coderdv,medecin,date_rdv,time_rdv,service,id_p);

    bool test3=r.ajouter();
    QMessageBox msgBox;

    if(test3)
      {  msgBox.setText("Ajout avec succes.");

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

void MainWindow::on_pb_supprimer_clicked()
{


        int id = ui->ID_5->text().toInt();
        bool test=tmppatient.supprimer(id);
        if(test)
        {ui->tab_patients->setModel(tmppatient.afficher());//refresh
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
{

    int coderdv = ui->CodeRDV_2->text().toInt();
    bool test3=tmprdv.supprimer(coderdv);
    QMessageBox msgBox;
    if(test3)
       {ui->tab_rdv->setModel(tmprdv.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un rendez-vous"),
                    QObject::tr("rendez-vous supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un rendez-vous"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}


/*void MainWindow::on_modifier_p_clicked()
{

    tmppatient.setnom(ui->Nom_2->text());
    tmppatient.setprenom(ui->Prenom_2->text());
   // tmppatient.settel(ui->Tel_2->text());
   // tmppatient.settelpap(ui->Telpap_2->text());
    tmppatient.setsexe(ui->Sexe_2->text());
    tmppatient.setadresse(ui->Adresse_2->text());
    tmppatient.setsituationf(ui->SituationF_2->text());
    tmppatient.setassurancemed(ui->AssuranceMed_2->text());
    tmppatient.setcodeassurance(ui->CodeAssurance_2->text());
    tmppatient.setnompap(ui->Nompap_2->text());
    tmppatient.setprenompap(ui->Prenompap_2->text());
    tmppatient.settypep(ui->TypePatients_2->text());
    tmppatient.setdate_naissance(ui->Datenaissance_2->text());
    tmppatient.setdatecon(ui->Date_consultaion_2->text());
    tmppatient.settypecon(ui->TypeC_2->text());
    tmppatient.setdatepres(ui->Date_Prescription_2->text());
    tmppatient.setnote(ui->NotePres2->text());
    tmppatient.setdatetrait(ui->Date_traitment_2->text());
    tmppatient.setdesignationexb(ui->DesiEB_2->text());
    tmppatient.setresultatexb(ui->resEB_2->text());
    tmppatient.setdesignationexr(ui->DesiER_2->text());
    tmppatient.setresultatexr(ui->resER_2->text());
    tmppatient.setchirurigien(ui->Chirurigien_2->text());
    tmppatient.setanesthesist(ui->anesthesist_2->text());
    tmppatient.setdateadm(ui->Date_admission_2->text());
    tmppatient.settypeadm(ui->Type_A_2->text());
    tmppatient.setmotifadm(ui->Motif_A_2->text());
    tmppatient.setmedadm(ui->NomMed_2->text());
    tmppatient.setnomacc(ui->NomAc_2->text());
    tmppatient.setprenomacc(ui->PrenomAC_2->text());
    tmppatient.setlienpar(ui->Lien_P_2->text());
    tmppatient.setdateent(ui->Date_entree_2->text());
    tmppatient.setdatesor(ui->Date_sortie_2->text());
    tmppatient.setmotifsor(ui->motif_S_2->text());
    tmppatient.setresultatsor(ui->Resu_S_2->text());
    tmppatient.setdatedec(ui->Date_deces_2->text());
    tmppatient.setmotifdec(ui->motifDEC_2->text());


}*/

/*void MainWindow::on_recherche_tri_textChanged(const QString &arg1)
{
    ui->tab_patients->setModel(tmppatient.recherche(champ,arg1,etat));
   valeur=arg1;
}*/


/*void MainWindow::on_modifier_p_clicked2()
{



     //tmprdv.setid_p(ui->Nom_2->text());
     //tmprdv.setcoderdv(ui->Nom_2->text());
     tmprdv.setmedecin(ui->Docteur_3->text());
     tmprdv.setdate_rdv(ui->dateEdit_5->text());
     tmprdv.settime_rdv(ui->timeEdit_2->text());
     tmprdv.setservice(ui->Service_3->text());

}*/

void MainWindow::on_pb_modifier_clicked(){

    QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
    QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);


    int coderdv = ui->CodeRDV_3->text().toInt();
    ui->CodeRDV_3->setValidator(validator_int);

    int id_p = ui->ID_4->text().toInt();
    ui->ID_4->setValidator(validator_int);

    QString medecin = ui->Docteur_3->text();
    ui->Docteur_3->setValidator(validator_String);

    QString date_rdv = ui->dateEdit_5->text();
    ui->dateEdit_5->setValidator(validator_String);

    QString service = ui->Service_3->text();
    ui->Service_3->setValidator(validator_String);

    QString time_rdv = ui->timeEdit_2->text();
    ui->timeEdit_2->setValidator(validator_String);



        rdv r(coderdv, medecin, service, date_rdv, time_rdv, id_p);
        bool test=r.modifier_rdv(coderdv);

        ui->tab_rdv->setModel(tmprdv.afficher());   //refresh



        if(test && r.search(coderdv)==true){


            foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
               le->clear();
            }

          QMessageBox::information(this, QObject::tr("Modifier une annonce"),
          QObject::tr("Annonce modifiée.\n"
                      "Click Cancel to exit."), QMessageBox::Cancel);


      }
        else
            QMessageBox::critical(this, QObject::tr("Modifier une annonce"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}
void MainWindow::on_pb_modifier_clicked_2(){

    QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
    QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);

    int id = ui->ID_2->text().toInt();
    ui->ID_2->setValidator(validator_int);

    int tel = ui->Tel_2->text().toInt();
    ui->Tel_2->setValidator(validator_int);

    int telpap = ui->Telpap_2->text().toInt();
    ui->Telpap_2->setValidator(validator_int);


    QString nom = ui->Nom_2->text();
    ui->Nom_2->setValidator(validator_String);

    QString prenom = ui->Prenom_2->text();
    ui->Prenom_2->setValidator(validator_String);

    QString sexe = ui->Sexe_2->text();
    ui->Sexe_2->setValidator(validator_String);

    QString adresse = ui->Adresse_2->text();
    ui->Adresse_2->setValidator(validator_String);

    QString situationf = ui->SituationF_2->text();
    ui->SituationF_2->setValidator(validator_String);

    QString assurancemed = ui->AssuranceMed_2->text();
    ui->AssuranceMed_2->setValidator(validator_String);

    QString codeassurance = ui->CodeAssurance_2->text();
    ui->CodeAssurance_2->setValidator(validator_String);

    QString nompap = ui->Nompap_2->text();
    ui->Nompap_2->setValidator(validator_String);

    QString prenompap = ui->Prenompap_2->text();
    ui->Prenompap_2->setValidator(validator_String);

    QString typep = ui->TypePatients_2->text();
    ui->TypePatients_2->setValidator(validator_String);

    QString date_naissance = ui->Datenaissance_2->text();
    ui->Datenaissance_2->setValidator(validator_String);

    QString lienpar = ui->Lien_P_2->text();
    ui->Lien_P_2->setValidator(validator_String);

    QString medadm = ui->NomMed_2->text();
    ui->NomMed_2->setValidator(validator_String);

    QString dateent = ui->Date_entree_2->text();
    ui->Date_entree_2->setValidator(validator_String);

    QString datetrait = ui->Date_traitment_2->text();
    ui->Date_traitment_2->setValidator(validator_String);

    /*QString designation = ui->timeEdit_2->text();
    ui->timeEdit_2->setValidator(validator_String);*/

    QString datesor= ui->Date_sortie_2->text();
    ui->Date_sortie_2->setValidator(validator_String);

    QString motifsor = ui->motif_S_2->text();
    ui->motif_S_2->setValidator(validator_String);

    QString resultatsor = ui->Resu_S_2->text();
    ui->Resu_S_2->setValidator(validator_String);

    QString datedec = ui->Date_deces_2->text();
    ui->Date_deces_2->setValidator(validator_String);

    QString motifdec = ui->motifDEC_2->text();
    ui->motifDEC_2->setValidator(validator_String);

    QString datecon = ui->Date_consultaion_2->text();
    ui->Date_consultaion_2->setValidator(validator_String);

    QString typecon = ui->TypeC_2->text();
    ui->TypeC_2->setValidator(validator_String);

    QString datepres = ui->Date_Prescription_2->text();
    ui->Date_Prescription_2->setValidator(validator_String);

    QString note = ui->NotePres2->text();
    ui->NotePres2->setValidator(validator_String);

    QString designationexr = ui->DesiER_2->text();
    ui->DesiER_2->setValidator(validator_String);

    QString resultatexr = ui->resER_2->text();
    ui->resER_2->setValidator(validator_String);

    QString designationexb = ui->DesiEB_2->text();
    ui->DesiEB_2->setValidator(validator_String);

    QString resultatexb = ui->resEB_2->text();
    ui->resEB_2->setValidator(validator_String);

    QString chirurigien = ui->Chirurigien_2->text();
    ui->Chirurigien_2->setValidator(validator_String);

    QString anesthesist = ui->anesthesist_2->text();
    ui->anesthesist_2->setValidator(validator_String);

    QString dateadm = ui->Date_admission_2->text();
    ui->Date_admission_2->setValidator(validator_String);

    QString typeadm = ui->Type_A_2->text();
    ui->Type_A_2->setValidator(validator_String);

    QString motifadm = ui->Motif_A_2->text();
    ui->Motif_A_2->setValidator(validator_String);

    QString nomacc = ui->NomAc_2->text();
    ui->NomAc_2->setValidator(validator_String);

    QString prenomacc = ui->PrenomAC_2->text();
    ui->PrenomAC_2->setValidator(validator_String);

patient p(id,tel,telpap,nom,prenom,nompap,prenompap,adresse,situationf,assurancemed,codeassurance, typep, date_naissance,sexe,datepres,note,designationexr,resultatexr,designationexb,resultatexb,chirurigien,anesthesist,dateadm,typeadm,motifadm,nomacc,prenomacc,lienpar,dateent,datesor,motifsor,resultatsor,datedec,motifdec,datetrait,medadm);
        bool test=p.modifier_patient(id);

        ui->tab_patients->setModel(tmppatient.afficher());   //refresh



        if(test && p.search(id)==true){


            foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
               le->clear();
            }

          QMessageBox::information(this, QObject::tr("Modifier une annonce"),
          QObject::tr("Annonce modifiée.\n"
                      "Click Cancel to exit."), QMessageBox::Cancel);


      }
        else
            QMessageBox::critical(this, QObject::tr("Modifier une annonce"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}
/*void MainWindow::on_recherche_tri_textChanged2(const QString &arg1)
{
    ui->tab_rdv->setModel(tmprdv.recherche(champ,arg1,etat));
   valeur=arg1;
}*/
void MainWindow::on_pb_asc_tri_clicked(){
    ui->tmprdv_tri->setModel(tmprdv.afficher_asc());
}

void MainWindow::on_pb_desc_tri_clicked(){
    ui->tmprdv_tri->setModel(tmprdv.afficher_desc());
}
void MainWindow::on_pb_asc_tri_clicked_2(){
    ui->tmppatient_tri->setModel(tmprdv.afficher_asc());
}

void MainWindow::on_pb_desc_tri_clicked_2(){
    ui->tmppatient_tri->setModel(tmprdv.afficher_desc());
}

void MainWindow::on_pushButton_2_clicked(){

    QPrinter printer;
    printer.setPrinterName("desired printer name");
    QPrintDialog dialog(&printer,this);
    if (dialog.exec() == QDialog::Rejected) return ;
    ui->tab_patients->render(&printer);
}

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
