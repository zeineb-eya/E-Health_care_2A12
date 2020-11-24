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
    connect(ui->pb_ajouter, SIGNAL(clicked(bool)), this, SLOT(on_pb_ajouter_clicked()));
    connect(ui->pb_ajouter_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_ajouter_clicked2()));

    connect(ui->supprimerp, SIGNAL(clicked(bool)), this, SLOT(on_pb_supprimer_clicked()));
    connect(ui->supprimerr, SIGNAL(clicked(bool)), this, SLOT(on_pb_supprimer_clicked2()));

    connect(ui->modifier_p, SIGNAL(clicked(bool)), this, SLOT(on_modifier_p_clicked()));
    connect(ui->modifier_p_2, SIGNAL(clicked(bool)), this, SLOT(on_modifier_p_clicked2()));
connect(ui->pushButton_1, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_2_clicked()));

    connect(ui->rechercherp, SIGNAL(clicked(bool)), this, SLOT(on_recherche_tri_textChanged(const QString &arg1)));
    connect(ui->rechercherr, SIGNAL(clicked(bool)), this, SLOT(on_recherche_tri_textChanged2(const QString &arg1)));

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


void MainWindow::on_modifier_p_clicked()
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


}

void MainWindow::on_recherche_tri_textChanged(const QString &arg1)
{
    ui->tab_patients->setModel(tmppatient.recherche(champ,arg1,etat));
   valeur=arg1;
}


void MainWindow::on_modifier_p_clicked2()
{



     //tmprdv.setid_p(ui->Nom_2->text());
     //tmprdv.setcoderdv(ui->Nom_2->text());
     tmprdv.setmedecin(ui->Docteur_3->text());
     tmprdv.setdate_rdv(ui->dateEdit_5->text());
     tmprdv.settime_rdv(ui->timeEdit_2->text());
     tmprdv.setservice(ui->Service_3->text());

}

void MainWindow::on_recherche_tri_textChanged2(const QString &arg1)
{
    ui->tab_rdv->setModel(tmprdv.recherche(champ,arg1,etat));
   valeur=arg1;
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
