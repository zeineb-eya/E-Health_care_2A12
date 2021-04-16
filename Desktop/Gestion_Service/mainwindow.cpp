#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "reclamation.h"
#include "annonce.h"
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <QPrinter>
#include <QPrintDialog>


MainWindow::MainWindow(QWidget *parent) :
     QMainWindow(parent) ,
     ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tab_annonce->setModel(tmpannonce.afficher_an());
    ui->tab_reclamation->setModel(tmpreclamation.afficher_rec());
    //sound


    click = new QMediaPlayer();
    click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/DeliveryCompany/Click.mp3"));

    connect(ui->pb_ajouter_an, SIGNAL(clicked(bool)), this, SLOT(on_pb_ajouter_an_clicked())); //ajout a
    connect(ui->pb_ajouter_rec, SIGNAL(clicked(bool)), this, SLOT(on_pb_ajouter_rec_clicked())); //ajout r

    connect(ui->pb_supprimer_an, SIGNAL(clicked(bool)), this, SLOT(on_pb_supprimer_an_clicked())); //supp a
    connect(ui->pb_supprimer_rec, SIGNAL(clicked(bool)), this, SLOT(on_pb_supprimer_rec_clicked())); //supp r

    connect(ui->pb_modifier_an, SIGNAL(clicked(bool)), this, SLOT(on_pb_modifier_an_clicked())); //modifier r
    connect(ui->pb_modifier_rec, SIGNAL(clicked(bool)), this, SLOT(on_pb_modifier_rec_clicked())); //modifier p

    connect(ui->pb_afficher_reclamation, SIGNAL(clicked(bool)), this, SLOT(on_pb_afficher_reclamation_clicked())); //aff rechercher r
    connect(ui->pb_afficher_reclamation_2, SIGNAL(clicked(bool)), this, SLOT(on_pb_afficher_reclamationnom_clicked())); //aff rechercher r
    connect(ui->pb_afficher_reclamation_3, SIGNAL(clicked(bool)), this, SLOT(on_pb_afficher_reclamationdate_clicked())); //aff rechercher r
    connect(ui->pb_afficher_annonce,SIGNAL(clicked(bool)), this, SLOT(on_pb_afficher_annonce_clicked())); //aff rechercher an
    connect(ui->pb_afficher_annonce_2,SIGNAL(clicked(bool)), this, SLOT(on_pb_afficher_annoncenom_clicked())); //aff rechercher an
    connect(ui->pb_afficher_annonce_3,SIGNAL(clicked(bool)), this, SLOT(on_pb_afficher_annoncedate_clicked())); //aff rechercher an


    connect(ui->pb_asc_tri_rec, SIGNAL(clicked(bool)), this, SLOT(on_pb_tri_asc_rec_clicked()));  //tri asc rec
    connect(ui->pb_desc_tri_rec, SIGNAL(clicked(bool)), this, SLOT(on_pb_tri_desc_rec_clicked())); //tri desc rec

    connect(ui->pb_tri_CodeAscendant, SIGNAL(clicked(bool)), this, SLOT(on_pb_tri_CodeAscendant_clicked()));  //tri asc an
    connect(ui->pb_tri_CodeDescendant, SIGNAL(clicked(bool)), this, SLOT(on_pb_tri_CodeDescendant_clicked())); //tri desc an
    connect(ui->pb_tri_NomCroissant, SIGNAL(clicked(bool)), this, SLOT(on_pb_tri_NomCroissant_clicked()));
    connect(ui->pb_tri_NomDeCroissant, SIGNAL(clicked(bool)), this, SLOT(on_pb_tri_NomDeCroissant_clicked()));
    connect(ui->pb_tri_DateAscendant, SIGNAL(clicked(bool)), this, SLOT(on_pb_tri_DateAscendant_clicked()));
    connect(ui->pb_tri_DateDescendant, SIGNAL(clicked(bool)), this, SLOT(on_pb_tri_DateDescendant_clicked()));

    connect(ui->pb_print1_rec, SIGNAL(clicked(bool)), this, SLOT(on_pb_print1_rec_clicked())); // print afficher reclam
    connect(ui->pb_print1_an, SIGNAL(clicked(bool)), this, SLOT(on_pb_print1_an_clicked())); // print afficher ann


    connect(ui->pb_tri_NomCroissant_rec, SIGNAL(clicked(bool)), this, SLOT(on_pb_tri_NomCroissant_rec_clicked()));
    connect(ui->pb_tri_NomDeCroissant_rec, SIGNAL(clicked(bool)), this, SLOT(on_pb_tri_NomDeCroissant_rec_clicked()));
    connect(ui->pb_tri_DateAscendant_rec, SIGNAL(clicked(bool)), this, SLOT(on_pb_tri_DateAscendant_rec_clicked()));
    connect(ui->pb_tri_DateDescendant_rec, SIGNAL(clicked(bool)), this, SLOT(on_pb_tri_DateDescendant_rec_clicked()));
    //stack widget trie annonce
    connect(ui->pushButton_46, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_46_clicked()));
    connect(ui->Trie, SIGNAL(clicked(bool)), this, SLOT(on_Trie_clicked()));
    //stack widget trie reclamation
    connect(ui->pushButton_47, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_47_clicked()));
    connect(ui->Trie_2, SIGNAL(clicked(bool)), this, SLOT(on_Trie_2_clicked()));
    //stack widget recherche annonce
    connect(ui->pushButton_45, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_45_clicked()));
    connect(ui->Rechercher, SIGNAL(clicked(bool)), this, SLOT(on_Rechercher_clicked()));
    //stack widget recherche reclamation
    connect(ui->pushButton_48, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_48_clicked()));
    connect(ui->Rechercher_2, SIGNAL(clicked(bool)), this, SLOT(on_Rechercher_2_clicked()));
    //QUIT

    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->pushButton_24, SIGNAL(clicked()), this, SLOT(close()));

    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->pushButton_11, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->pushButton_30, SIGNAL(clicked()), this, SLOT(close()));

  /****************************************************************************************************************/

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timefct()));
    timer->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}





//Annonces:



void MainWindow::on_pb_ajouter_an_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();



        //ctrl saisie
        //QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
        QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);
    int codean = ui->codeA->text().toInt();
    ui->codeA->setValidator(new QIntValidator(0,999,this));
    ui->codeA->setValidator(validator_int);
    QString noman = ui->noman->text();
    QString descriptionan = ui->descriptionan->text();
    QString datean= ui->datean->text();

  Annonce a(codean,noman,descriptionan,datean);
  bool test=a.ajouter_an();
  ui->tab_annonce->setModel(tmpannonce.afficher_an());   //refresh

  if(test){
      foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
         le->clear();
      }

    QMessageBox::information(this, QObject::tr("Ajouter une Annonce"),
    QObject::tr("Annonce ajouté.\n"
                "Click Cancel to exit."), QMessageBox::Cancel);

  }else
      QMessageBox::critical(this, QObject::tr("Ajouter une Annonce"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pb_supprimer_an_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();

    int codean = ui->codeSuppr->text().toInt();
    bool test=tmpannonce.supprimer_an(codean);
    ui->tab_annonce->setModel(tmpannonce.afficher_an());//refresh

    if(test){

        foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
             le->clear();}

        QMessageBox::information(this, QObject::tr("Supprimer une Annonce"),
                QObject::tr("Annonce supprimé.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

    }else
        QMessageBox::information(this, QObject::tr("Supprimer une Annonce"),
                QObject::tr("Erreur !.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
void MainWindow::on_pb_modifier_an_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();



        //ctrl saisie
        //QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
        QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);




    int codean = ui->codean_2->text().toInt();
    ui->codean_2->setValidator(new QIntValidator(0,999,this));
      ui->codean_2->setValidator(validator_int);
        QString noman = ui->noman_2->text();
        QString descriptionan = ui->descriptionan_2->text();
        QString datean = ui->datean_2->text();

        Annonce a(codean,noman, descriptionan,datean);
        bool test=a.modifier_an(codean);

        ui->tab_annonce->setModel(tmpannonce.afficher_an());   //refresh

        if(test ){

            foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
               le->clear();
            }

          QMessageBox::information(this, QObject::tr("Modifier une annonce"),
          QObject::tr("Annonce modifiée.\n"
                      "Click Cancel to exit."), QMessageBox::Cancel);
      }
        else
            QMessageBox::critical(this, QObject::tr("Modifier une Annonce"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pb_afficher_an_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    ui->tab_annonce->setModel(tmpannonce.afficher_an());
}

// stac widget trie annonce
void MainWindow::on_pushButton_46_clicked()
{
    ui->widgettrie->setCurrentIndex(0);
}
void MainWindow::on_Trie_clicked()
{
    ui->widgettrie->setCurrentIndex(1);
}

void MainWindow::on_pb_tri_CodeAscendant_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    ui->tab_annonce->setModel(tmpannonce.trier_an());
}

void MainWindow::on_pb_tri_CodeDescendant_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    ui->tab_annonce->setModel(tmpannonce.trier_desc_an());
}

  void MainWindow::on_pb_tri_NomCroissant_clicked(){
      //button sound
          click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
          click->play();
          qDebug()<<click ->errorString();

              ui->tab_annonce->setModel(tmpannonce.tri_NomCroissant());
  }
  void MainWindow::on_pb_tri_NomDeCroissant_clicked(){
      //button sound
          click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
          click->play();
          qDebug()<<click ->errorString();

              ui->tab_annonce->setModel(tmpannonce.tri_NomDeCroissant());
  }

  void MainWindow::on_pb_tri_DateAscendant_clicked(){
      //button sound
          click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
          click->play();
          qDebug()<<click ->errorString();

          ui->tab_annonce->setModel(tmpannonce.tri_DateAscendant());
}
  void MainWindow::on_pb_tri_DateDescendant_clicked(){
      //button sound
          click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
          click->play();
          qDebug()<<click ->errorString();

          ui->tab_annonce->setModel(tmpannonce.tri_DateDescendant());
}

/* ****************************************************************************** */ /*recherche li f main w cpp */
  //stack widget recherche annonce
  void MainWindow::on_pushButton_45_clicked()
  {
      ui->widgetrecherche->setCurrentIndex(0);
  }
  void MainWindow::on_Rechercher_clicked()
  {
      ui->widgetrecherche->setCurrentIndex(1);
  }
void MainWindow::on_pb_afficher_annonce_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    int codean = ui->lineEdit_code_an->text().toInt();
    ui->tab_annonce->setModel(tmpannonce.afficher_annonce(codean));
}
void MainWindow::on_pb_afficher_annoncenom_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    QString noman = ui->lineEdit_code_an_2->text();
    ui->tab_annonce->setModel(tmpannonce.afficher_annoncenom(noman));
}

void MainWindow::on_pb_afficher_annoncedate_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    QString datean = ui->lineEdit_code_an_3->text();
    ui->tab_annonce->setModel(tmpannonce.afficher_annoncedate(datean));
}

//print1 Annonce Afficher:

void MainWindow::on_pb_print1_an_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();

    QPrinter printer;
    printer.setPrinterName("desired printer name");
    QPrintDialog dialog(&printer,this);
    if (dialog.exec() == QDialog::Rejected) return ;
    ui->tab_annonce->render(&printer);
}

//Reclamations:

void MainWindow::on_pb_ajouter_rec_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();

        //ctrl saisie
        //QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
        QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);



        int numrec = ui->numR->text().toInt();

    ui->numR->setValidator(new QIntValidator(0,999,this));
      ui->numR->setValidator(validator_int);


    QString nomrec = ui->lineEdit_nomR->text();
    QString descriptionrec = ui->lineEdit_descriptionR->text();
    QString daterec = ui->dateR->text();

  Reclamation a(numrec,nomrec,descriptionrec,daterec);
  bool test=a.ajouter_rec();
  ui->tab_reclamation->setModel(tmpreclamation.afficher_rec());   //refresh

  if(test){
      foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
         le->clear();
      }

    QMessageBox::information(this, QObject::tr("Ajouter une Reclamation"),
    QObject::tr("Reclamation ajouté.\n"
                "Click Cancel to exit."), QMessageBox::Cancel);

  }else
      QMessageBox::critical(this, QObject::tr("Ajouter une Reclamation"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pb_supprimer_rec_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();

    int numrec = ui->lineEdit_2->text().toInt();
    bool test=tmpreclamation.supprimer_rec(numrec);
    ui->tab_reclamation->setModel(tmpreclamation.afficher_rec());//refresh

    if(test){

        foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
             le->clear();}

        QMessageBox::information(this, QObject::tr("Supprimer une Reclamation"),
                QObject::tr("Reclamation supprimé.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

    }else
        QMessageBox::information(this, QObject::tr("Supprimer une Reclamation"),
                QObject::tr("Erreur !.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);

}
void MainWindow::on_pb_modifier_rec_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/DeliveryCompany/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();

        //ctrl saisie
        //QValidator *validator_String=new QRegExpValidator(QRegExp("[A-Za-z]+"),this);
        QValidator *validator_int=new QRegExpValidator(QRegExp("[0-9]+"),this);


        int numrec = ui->codeR2->text().toInt();


    ui->codeR2->setValidator(new QIntValidator(0,999,this));
      ui->codeR2->setValidator(validator_int);

        QString nomrec = ui->lineEdit_nomR2->text();
        QString descriptionrec = ui->lineEdit_descriptionR2->text();
        QString daterec = ui->dateR2->text();

        Reclamation a(numrec,nomrec, descriptionrec,daterec);
        bool test=a.modifier_rec(numrec);

        ui->tab_reclamation->setModel(tmpreclamation.afficher_rec());   //refresh

        if(test ){

            foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
               le->clear();
            }

          QMessageBox::information(this, QObject::tr("Modifier une reclamation"),
          QObject::tr("Reclamation modifiée.\n"
                      "Click Cancel to exit."), QMessageBox::Cancel);
      }
        else
            QMessageBox::critical(this, QObject::tr("Modifier une Reclamation"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pb_afficher_rec_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    ui->tab_reclamation->setModel(tmpreclamation.afficher_rec());
}

void MainWindow::on_pushButton_47_clicked()
{
    ui->widgettrie_2->setCurrentIndex(0);
}
void MainWindow::on_Trie_2_clicked()
{
    ui->widgettrie_2->setCurrentIndex(1);
}

void MainWindow::on_pb_asc_tri_rec_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    ui->tab_reclamation->setModel(tmpreclamation.trier_rec());
}

void MainWindow::on_pb_desc_tri_rec_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    ui->tab_reclamation->setModel(tmpreclamation.trier_desc_rec());
}

void MainWindow::on_pb_tri_NomCroissant_rec_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
            ui->tab_reclamation->setModel(tmpreclamation.tri_NomCroissant_rec());
}
void MainWindow::on_pb_tri_NomDeCroissant_rec_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
            ui->tab_reclamation->setModel(tmpreclamation.tri_NomDeCroissant_rec());
}

void MainWindow::on_pb_tri_DateAscendant_rec_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
        ui->tab_reclamation->setModel(tmpreclamation.tri_DateAscendant_rec());
}
void MainWindow::on_pb_tri_DateDescendant_rec_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();

        ui->tab_reclamation->setModel(tmpreclamation.tri_DateDescendant_rec());
}
/* ****************************************************************************** */ /*recherche li f main w cpp */
//stack widget recherche reclamation
void MainWindow::on_pushButton_48_clicked()
{
    ui->widgetrecherche_2->setCurrentIndex(0);
}
void MainWindow::on_Rechercher_2_clicked()
{
    ui->widgetrecherche_2->setCurrentIndex(1);
}
void MainWindow::on_pb_afficher_reclamation_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    int numrec = ui->lineEdit_num_Rec->text().toInt();
    ui->tab_reclamation->setModel(tmpreclamation.afficher_reclamation(numrec));
}
void MainWindow::on_pb_afficher_reclamationnom_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    QString nomrec = ui->lineEdit_num_Rec_2->text();
    ui->tab_reclamation->setModel(tmpreclamation.afficher_reclamationnom(nomrec));
}
void MainWindow::on_pb_afficher_reclamationdate_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();
    QString daterec = ui->lineEdit_num_Rec_3->text();
    ui->tab_reclamation->setModel(tmpreclamation.afficher_reclamationdate(daterec));
}


//print1 Recalm Afficher:

void MainWindow::on_pb_print1_rec_clicked(){
    //button sound
        click->setMedia(QUrl::fromLocalFile("C:/Users/HP/Desktop/Gestion_Service/Click.mp3"));
        click->play();
        qDebug()<<click ->errorString();

    QPrinter printer;
    printer.setPrinterName("desired printer name");
    QPrintDialog dialog(&printer,this);
    if (dialog.exec() == QDialog::Rejected) return ;
    ui->tab_reclamation->render(&printer);
}



void MainWindow::timefct()
{
    QTime time  = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->temps->setText(time_text);
    ui->temps_2->setText(time_text);

}

