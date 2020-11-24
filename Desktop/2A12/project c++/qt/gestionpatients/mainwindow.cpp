#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "patient.h"
#include "rdv.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tab_patients->setModel(tmppatients.afficher());
    ui->tab_rdv->setModel(tmprdv.afficher());
}

MainWindow::~MainWindow()
{
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

      ui->tab_patients->setModel(tmppatients.afficher());//refresh
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
    QString time_rdv=ui->Date_traitment->text();
    rdv r(coderdv,medecin,date_rdv,service,id_p);

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
        bool test=tmppatients.supprimer(id);
        if(test)
        {ui->tab_patients->setModel(tmppatients.afficher());//refresh
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

