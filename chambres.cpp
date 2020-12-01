#include "chambres.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QSqlQueryModel>
#include <QMessageBox>
#include "mainwindow.h"
Chambres::Chambres()
{
     NomDepartement="";
     TypeC="";
     EtatC="";
     ElementsManquants="";
     NumEtage=0;
     NumChambre=0;
     NbLitsC=0;

}
Chambres::Chambres(QString NomDepartement, QString TypeC, QString EtatC, QString ElementsManquants,int NumEtage,int NumChambre, int NbLitsC)
{

    this->NomDepartement=NomDepartement;
    this->TypeC=TypeC;
    this->EtatC=EtatC;
    this->ElementsManquants=ElementsManquants;
    this->NumEtage=NumEtage;
    this->NumChambre=NumChambre;
    this->NbLitsC=NbLitsC;
}
void Chambres::setNomDepartement(QString NomDepartement){this->NomDepartement=NomDepartement; }
void Chambres::setTypeC(QString TypeC){this->TypeC=TypeC;}
void Chambres::setetatC(QString EtatC){this->EtatC=EtatC;}
void Chambres::setElementsManquants(QString ElementsManquants){this->ElementsManquants=ElementsManquants;}
void Chambres::setNumEtage(int NumEtage){this->NumEtage=NumEtage;}
void Chambres::setNumChambre(int NumChambre){this->NumChambre=NumChambre;}
void Chambres::setNbLitsC(int NbLitsC){this->NbLitsC=NbLitsC;}
QString Chambres::getNomDepartement(){return(NomDepartement);}
QString Chambres::getTypeC(){return(TypeC);}
QString Chambres::getetatC(){return(EtatC);}
QString Chambres::getElementsManquants(){return(ElementsManquants);}
int Chambres::getNumEtage(){return(NumEtage);}
int Chambres::getNumChambre(){return(NumChambre);}
int Chambres::getNbLitsC(){return(NbLitsC);}
bool Chambres ::RechercherChambre(int NumChambre){
    QSqlQuery query;
    QString NumChambre_string = QString::number(NumChambre);
    query.prepare("SELECT id FROM CHAMBRES WHERE NUMCHAMBRE = :NUMCHAMBRE");
    query.bindValue(":NUMCHAMBRE", NumChambre_string);
    query.exec();

    if(query.size()!=NumChambre){return false;}
    else return true;
}

bool Chambres::AjouterChambre()
{
    QSqlQuery query;

    QString NumChambre_string=QString::number(NumChambre);
    QString NumEtage_string=QString::number(NumEtage);
    QString NbLitsC_string=QString::number(NbLitsC);

          query.prepare("INSERT INTO CHAMBRES (NOMDEPARTEMENT,TYPEC,ETATC,ELEMENTSMANQUANTS,NUMCHAMBRE,NUMETAGE,NBLITS)"
                        "VALUES (:NomDepartement, :TypeC, :EtatC, :ElementsManquants, :NumChambre, :NumEtage, :NbLits)");
          query.bindValue(":NumChambre", NumChambre_string);
          query.bindValue(":NumEtage", NumEtage_string);
          query.bindValue(":NbLits", NbLitsC_string);
          query.bindValue(":NomDepartement", NomDepartement);
          query.bindValue(":TypeC", TypeC);
          query.bindValue(":EtatC", EtatC);
          query.bindValue(":ElementsManquants", ElementsManquants);

         return query.exec();


}
QSqlQueryModel* Chambres::AfficherChambre()
{
  QSqlQueryModel* model=new QSqlQueryModel();
   model->setQuery("SELECT* FROM CHAMBRES");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("NomDepartement"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("TypeC"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatC"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("ElementsManquants"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("NumChambre"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("NumEtage"));
   model->setHeaderData(6, Qt::Horizontal, QObject::tr("NbLits"));
  return  model;
}

bool Chambres::SupprimerChambre(int NumChambre)
{
QSqlQuery query;
query.prepare("DELETE FROM CHAMBRES WHERE NUMCHAMBRE =:NUMCHAMBRE");
query.bindValue(":NUMCHAMBRE",NumChambre);
return query.exec();}
bool Chambres::ModifierChambre()
{
    QSqlQuery query;
    query.prepare("DELETE FROM CHAMBRES WHERE NUMCHAMBRE =:NUMCHAMBRE");
    query.bindValue(":NUMCHAMBRE",NumChambre);
    query.exec();
    QString NumChambre_string=QString::number(NumChambre);
    QString NumEtage_string=QString::number(NumEtage);
    QString NbLitsC_string=QString::number(NbLitsC);

          query.prepare("INSERT INTO CHAMBRES (NOMDEPARTEMENT,TYPEC,ETATC,ELEMENTSMANQUANTS,NUMCHAMBRE,NUMETAGE,NBLITS)"
                        "VALUES (:NomDepartement, :TypeC, :EtatC, :ElementsManquants, :NumChambre, :NumEtage, :NbLits)");
          query.bindValue(":NumChambre", NumChambre_string);
          query.bindValue(":NumEtage", NumEtage_string);
          query.bindValue(":NbLits", NbLitsC_string);
          query.bindValue(":NomDepartement", NomDepartement);
          query.bindValue(":TypeC", TypeC);
          query.bindValue(":EtatC", EtatC);
          query.bindValue(":ElementsManquants", ElementsManquants);

         return query.exec();



       /*QSqlQuery query;
       QString NumChambre_string=QString::number(NumChambre);
       QString NumEtage_string=QString::number(NumEtage);
       QString NbLitsC_string=QString::number(NbLitsC);

       query.prepare(" UPDATE CHAMBRES set NomDepartement = :NomDepartement,EtatC = :EtatC,TypeC = :TypeC,ElementsManquants = :ElementsManquants,NbLits = :NbLits,NumEtage=:NumEtage WHERE  NUMCHAMBRE = :NUMCHAMBRE");
                          query.bindValue(":NumChambre", NumChambre_string);
                          query.bindValue(":NomDepartement", NomDepartement);
                          query.bindValue(":EtatC", EtatC);
                          query.bindValue(":TypeC", TypeC);
                          query.bindValue(":ElementsManquants", ElementsManquants);
                          query.bindValue(":NbLits", NbLitsC_string);
                          query.bindValue(":NumEtage", NumEtage_string);

                         return query.exec();*/



}
QSqlQueryModel* Chambres::AfficherCASC()
{
  QSqlQueryModel* model=new QSqlQueryModel();
   model->setQuery("SELECT* FROM CHAMBRES ORDER BY NumChambre ASC");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("NomDepartement"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("TypeC"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatC"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("ElementsManquants"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("NumChambre"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("NumEtage"));
   model->setHeaderData(6, Qt::Horizontal, QObject::tr("NbLits"));
  return  model;
}
QSqlQueryModel* Chambres::AfficherCDES()
{
  QSqlQueryModel* model=new QSqlQueryModel();
   model->setQuery("SELECT* FROM CHAMBRES ORDER BY NumChambre DESC");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("NomDepartement"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("TypeC"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatC"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("ElementsManquants"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("NumChambre"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("NumEtage"));
   model->setHeaderData(6, Qt::Horizontal, QObject::tr("NbLits"));
  return  model;
}
QSqlQueryModel* Chambres::AfficherCASC1()
{
  QSqlQueryModel* model=new QSqlQueryModel();
   model->setQuery("SELECT* FROM CHAMBRES ORDER BY NumEtage ASC");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("NomDepartement"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("TypeC"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatC"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("ElementsManquants"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("NumChambre"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("NumEtage"));
   model->setHeaderData(6, Qt::Horizontal, QObject::tr("NbLits"));
  return  model;
}
QSqlQueryModel* Chambres::AfficherCDES1()
{
  QSqlQueryModel* model=new QSqlQueryModel();
   model->setQuery("SELECT* FROM CHAMBRES ORDER BY NumEtage DESC");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("NomDepartement"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("TypeC"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatC"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("ElementsManquants"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("NumChambre"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("NumEtage"));
   model->setHeaderData(6, Qt::Horizontal, QObject::tr("NbLits"));
  return  model;
}
QSqlQueryModel* Chambres::AfficherCASC2()
{
  QSqlQueryModel* model=new QSqlQueryModel();
   model->setQuery("SELECT* FROM CHAMBRES ORDER BY NbLits ASC");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("NomDepartement"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("TypeC"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatC"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("ElementsManquants"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("NumChambre"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("NumEtage"));
   model->setHeaderData(6, Qt::Horizontal, QObject::tr("NbLits"));
  return  model;
}
QSqlQueryModel* Chambres::AfficherCDES2()
{
  QSqlQueryModel* model=new QSqlQueryModel();
   model->setQuery("SELECT* FROM CHAMBRES ORDER BY NbLits DESC");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("NomDepartement"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("TypeC"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatC"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("ElementsManquants"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("NumChambre"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("NumEtage"));
   model->setHeaderData(6, Qt::Horizontal, QObject::tr("NbLits"));
  return  model;
}
 QSqlQueryModel* Chambres::Afficher_recherche3(int NumChambre)
 {

     QSqlQuery query;
     query.prepare("select * from CHAMBRES where NUMCHAMBRE = :NumChambre");
     query.bindValue(":NumChambre", NumChambre);
     QSqlQueryModel* model= new QSqlQueryModel();
     query.exec();
     model->setQuery(query);
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("NomDepartement"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("TypeC"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatC"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("ElementsManquants"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("NumChambre"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("NumEtage"));
     model->setHeaderData(6, Qt::Horizontal, QObject::tr("NbLits"));
    return  model;
 }
 QSqlQueryModel* Chambres::Afficher_recherche13(QString NomDepartement)
 {

     QSqlQuery query;
     query.prepare("select * from CHAMBRES where NOMDEPARTEMENT = :NomDepartement");
     query.bindValue(":NomDepartement", NomDepartement);
     QSqlQueryModel* model= new QSqlQueryModel();
     query.exec();
     model->setQuery(query);
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("NomDepartement"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("TypeC"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatC"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("ElementsManquants"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("NumChambre"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("NumEtage"));
     model->setHeaderData(6, Qt::Horizontal, QObject::tr("NbLits"));
    return  model;
 }
 QSqlQueryModel* Chambres::Afficher_recherche23(QString EtatC)
 {

     QSqlQuery query;
     query.prepare("select * from CHAMBRES where ETATC = :EtatC");
     query.bindValue(":EtatC", EtatC);
     QSqlQueryModel* model= new QSqlQueryModel();
     query.exec();
     model->setQuery(query);
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("NomDepartement"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("TypeC"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatC"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("ElementsManquants"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("NumChambre"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("NumEtage"));
     model->setHeaderData(6, Qt::Horizontal, QObject::tr("NbLits"));
    return  model;
 }
