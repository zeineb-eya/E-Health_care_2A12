#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "chambres.h"
#include "appareils.h"
#include <QMessageBox>
#include <QDialog>
#include <QSqlQueryModel>
#include<QSqlQuery>
#include <limits>
#include <QPrinter>
#include <QPrintDialog>
#include <QPropertyAnimation>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{    ui->setupUi(this);
    animation =new QPropertyAnimation(ui->pushButton_5,"geometry");
    animation->setDuration(10000);
    animation->setStartValue(ui->pushButton_5->geometry());
    animation->setEndValue(QRect(220,120,361,71));
    animation->start();
    animation1 =new QPropertyAnimation(ui->pushButton_6,"geometry");
    animation1->setDuration(10000);
    animation1->setStartValue(ui->pushButton_6->geometry());
    animation1->setEndValue(QRect(220,210,361,71));
    animation1->start();

    ui->Tab_C->setModel(C.AfficherChambre());
    ui->Num_C->setValidator(new QIntValidator(-1, 5, this));
    ui->NUMlits->setValidator(new QIntValidator(1,4, this));
    ui->NUMetage->setValidator(new QIntValidator(101, 522, this));
    ui->NUMEsupp->setValidator(new QIntValidator(-1, 5, this));
    ui->NUMCsupp->setValidator(new QIntValidator(101, 522, this));
    ui->NUMCsupp_2->setValidator(new QIntValidator(-1,5,this));
    ui->etage->setValidator(new QIntValidator(101,522,this));
    ui->Tab_A->setModel(A.AfficherAppareil());
    ui->NUMSERIE->setValidator(new QIntValidator(1000,9999));

     click = new QMediaPlayer();
         click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));




}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    QString NomDepartement=ui->Departementbox->text();
    QString TypeC=ui->TypeBox->text();
    QString EtatC=ui->EtatBox->text();
    QString ElementsManquants=ui->EMBOX->text();
    int NumChambre=ui->Num_C->text().toInt();
    int NumEtage=ui->NUMetage->text().toInt();
    int NbLitsC=ui->NUMlits->text().toInt();

    Chambres C(NomDepartement, TypeC, EtatC, ElementsManquants, NumChambre ,NumEtage ,NbLitsC);
    bool test=C.AjouterChambre();
    QMessageBox msgBox;

    if(test)
       {  msgBox.setText("Ajout avec succes.");
         ui->Tab_C->setModel(C.AfficherChambre());}
     else
         msgBox.setText("Echec d'ajout");
         msgBox.exec();
   }



//void MainWindow::on_Tab_chambres_currentChanged(int index)
//{
  // ui->Tab_C->setModel(C.AfficherChambre());

//};

void MainWindow::on_pushButton_3_clicked()
{click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
Chambres CC;
QMessageBox msg;
     CC.setNumChambre(ui->Tab_C->model()->data(ui->Tab_C->model()->index(rowSelected,0)).toInt());
   bool test=false;
   test=C.SupprimerChambre(CC.getNumChambre());


         if(test)
            { msg.setText("Suppression avec succes.");
          ui->Tab_C->setModel(C.AfficherChambre());}
          else { msg.setText("Echec de suppresion");
           msg.exec();}
}


void MainWindow::on_pushButton_2_clicked()
{};

void MainWindow::on_Supprimer_clicked()
{    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
     click->play();
     qDebug()<<click ->errorString(); QMessageBox msgBox;
    Chambres CC;
    CC.setNumChambre(ui->NUMCsupp->text().toInt());

       bool test=CC.SupprimerChambre(CC.getNumChambre());


       if(test)
          { msgBox.setText("Suppression avec succes.");
       ui->Tab_C->setModel(C.AfficherChambre());
       }
       else
           msgBox.setText("Echec de suppression");
           msgBox.exec();}


void MainWindow::on_pushButton_4_clicked()
{click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();

    QSqlQuery query;
     int NumChambre1=ui->NUMCsupp_2->text().toInt();
  int NumEtage1=ui->etage->text().toInt();
  int NbLitsC1=ui->lits->text().toInt();
 QString ElementsManquants1=ui->elements->text();
 QString EtatC1=ui->etat->text();
 QString NomDepartement1=ui->dep->text();
 QString type1=ui->type->text();
          Chambres C(NomDepartement1, type1, EtatC1, ElementsManquants1, NumChambre1 ,NumEtage1 ,NbLitsC1);

         bool test=C.ModifierChambre();
         QMessageBox msgBox;

         if(test)
            { msgBox.setText("Modification avec succes.");
         ui->Tab_C->setModel(C.AfficherChambre());
         }
         else
             msgBox.setText("Echec de Modification");
             msgBox.exec();
                 };



void MainWindow::on_pushButton_5_clicked()
{click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_7_clicked()
{click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_10_clicked()
{click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_8_clicked()
{click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_6_clicked()
{click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    ui->Tab_A->setModel(A.AfficherAppareil());
}

void MainWindow::on_pushButton_11_clicked()
{click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QString NomApp=ui->NOMAPP->text();
    QString TypeApp=ui->TYPEAPP->text();
    QString EtatApp=ui->ETATAPP->text();

    int NumSerie=ui->NUMSERIE->text().toInt();


    Appareils A(NumSerie,NomApp,TypeApp,EtatApp);
    bool test=A.AjouterAppareil();
    QMessageBox msgBox;

    if(test)
       {  msgBox.setText("Ajout avec succes.");
         ui->Tab_A->setModel(A.AfficherAppareil());}
     else
         msgBox.setText("Echec d'ajout");
         msgBox.exec();
}


void MainWindow::on_pushButton_12_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); QMessageBox msgBox;
       Appareils AA;
       AA.setNumSerie(ui->suppapp->text().toInt());

          bool test=AA.SupprimerAppareil(AA.getNumSerie());



          if(test)
             { msgBox.setText("Suppression avec succes.");
          ui->Tab_A->setModel(A.AfficherAppareil());
          }
          else
              msgBox.setText("Echec de suppression");
              msgBox.exec();}


void MainWindow::on_modifierApp_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); QString NomApp=ui->NOMAPP_2->text();
    QString TypeApp=ui->TYPEAPP_2->text();
    QString EtatApp=ui->ETATAPP_2->text();

    int NumSerie=ui->NUMSERIE_2->text().toInt();


    Appareils A(NumSerie,NomApp,TypeApp,EtatApp);
    bool test=A.ModifierAppareil();
    QMessageBox msgBox;

    if(test)
       {  msgBox.setText("Modification avec succes .");
         ui->Tab_A->setModel(A.AfficherAppareil());}
     else
         msgBox.setText("Echec de modification");
         msgBox.exec();
}

void MainWindow::on_pushButton_13_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_14_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_15_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_16_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_17_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->Tab_A->setModel(A.TriAppASC());
}

void MainWindow::on_pushButton_18_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();ui->Tab_A->setModel(A.TriAppDES());
}

void MainWindow::on_pushButton_19_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->Tab_A->setModel(A.TriAppASC1());
}

void MainWindow::on_pushButton_20_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->Tab_A->setModel(A.TriAppDES1());
}

void MainWindow::on_pushButton_21_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->triwidget1->setCurrentIndex(1);
    ui->triwidget2->setCurrentIndex(1);
    ui->triwidget3->setCurrentIndex(1);

}

void MainWindow::on_pushButton_22_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();  ui->triwidget1->setCurrentIndex(0);

}

void MainWindow::on_pushButton_24_clicked()
{click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->triwidget2->setCurrentIndex(0);
     ui->triwidget1->setCurrentIndex(0);
     ui->triwidget3->setCurrentIndex(1);
}

void MainWindow::on_pushButton_23_clicked()
{click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->triwidget2->setCurrentIndex(1);

}

void MainWindow::on_pushButton_28_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->triwidget3->setCurrentIndex(0);
    ui->triwidget1->setCurrentIndex(0);
    ui->triwidget2->setCurrentIndex(1);
}

void MainWindow::on_pushButton_27_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();ui->triwidget3->setCurrentIndex(1);
}

void MainWindow::on_pushButton_29_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();ui->widgetTRI->setCurrentIndex(0);
}

void MainWindow::on_pushButton_30_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();ui->widgetTRI->setCurrentIndex(1);
}

void MainWindow::on_pushButton_25_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->Tab_A->setModel(A.TriAppASC2());
}

void MainWindow::on_pushButton_26_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->Tab_A->setModel(A.TriAppDES2());
}

void MainWindow::on_pushButton_44_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();ui->widgetTRI_2->setCurrentIndex(0);
}

void MainWindow::on_pushButton_43_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->widgetTRI_2->setCurrentIndex(1);
}

void MainWindow::on_pushButton_31_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->triwidget1_2->setCurrentIndex(1);
    ui->triwidget2_2->setCurrentIndex(1);
    ui->triwidget3_2->setCurrentIndex(1);
}

void MainWindow::on_pushButton_34_clicked()
{click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->triwidget1_2->setCurrentIndex(0);
}

void MainWindow::on_pushButton_33_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();ui->Tab_C->setModel(C.TriCASC());//numchalmbre tri asc
}

void MainWindow::on_pushButton_32_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->Tab_C->setModel(C.TriCDES());
}

void MainWindow::on_pushButton_38_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->triwidget2_2->setCurrentIndex(0);
      ui->triwidget3_2->setCurrentIndex(1);
      ui->triwidget1_2->setCurrentIndex(0);
}

void MainWindow::on_pushButton_37_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->triwidget2_2->setCurrentIndex(1);
}

void MainWindow::on_pushButton_35_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->Tab_C->setModel(C.TriCASC1());
}

void MainWindow::on_pushButton_36_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->Tab_C->setModel(C.TriCDES1());
}

void MainWindow::on_pushButton_42_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->triwidget3_2->setCurrentIndex(0);
}

void MainWindow::on_pushButton_41_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();ui->triwidget3_2->setCurrentIndex(1);
}

void MainWindow::on_pushButton_39_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); ui->Tab_C->setModel(C.TriCASC2());
}

void MainWindow::on_pushButton_40_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();ui->Tab_C->setModel(C.TriCDES2());
}

void MainWindow::on_Reccherche_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString(); int NumSerie=ui->RechercherNom->text().toInt();
    ui->Tab_A->setModel(A.Afficher_recherche(NumSerie));
}

void MainWindow::on_Rechercher_clicked()
{click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    ui->widgetrecherche->setCurrentIndex(1);
}


void MainWindow::on_Reccherche_2_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();QString NomApp=ui->RechercherNom_2->text();
    ui->Tab_A->setModel(A.Afficher_recherche1(NomApp));
}

void MainWindow::on_pushButton_45_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();ui->widgetrecherche->setCurrentIndex(0);
}

void MainWindow::on_Reccherche_3_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();QString EtatApp=ui->RechercherNom_3->text();
    ui->Tab_A->setModel(A.Afficher_recherche2(EtatApp));
}

void MainWindow::on_RechercherAPP_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();ui->widgetRechercherAPP->setCurrentIndex(1);
}

void MainWindow::on_pushButton_46_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();ui->widgetRechercherAPP->setCurrentIndex(0);
}

void MainWindow::on_RechercherCNum_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();    int NumChambre=ui->Chambre->text().toInt();
    ui->Tab_C->setModel(C.Afficher_recherche3(NumChambre));
}

void MainWindow::on_RechercherCNum_2_clicked()
{click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QString NomDepartement=ui->Chambre_2->text();
    ui->Tab_C->setModel(C.Afficher_recherche13(NomDepartement));
}

void MainWindow::on_RechercherCNum_3_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();QString EtatC=ui->Chambre_3->text();
    ui->Tab_C->setModel(C.Afficher_recherche23(EtatC));
}

void MainWindow::on_Print_clicked()
{click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
    click->play();
    qDebug()<<click ->errorString();
    QPrinter printer;
    printer.setPrinterName("desired printer name");
    QPrintDialog dialog(&printer,this);
    if (dialog.exec() == QDialog::Rejected) return ;
    ui->Tab_C->render(&printer);
}

void MainWindow::on_printtt_clicked()
{
    click->setMedia(QUrl::fromLocalFile("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
        QPrinter printer;
    printer.setPrinterName("desired printer name");
    QPrintDialog dialog(&printer,this);
    if (dialog.exec() == QDialog::Rejected) return ;
    ui->Tab_A->render(&printer);
}
