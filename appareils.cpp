#include "appareils.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QSqlQueryModel>
#include <QMessageBox>
#include "mainwindow.h"
Appareils::Appareils()
{
TypeApp="";
EtatApp="";
NomApp="";
NumSerie=0;
}
void Appareils::setNumSerie(int NumSerie)
{
    this->NumSerie=NumSerie;

}
int Appareils::getNumSerie()
{
    return(NumSerie);
}
Appareils::Appareils(int NumSerie,QString NomApp,QString EtatApp,QString TypeApp)
{
    this->NumSerie=NumSerie;
    this->NomApp=NomApp;
    this->EtatApp=EtatApp;
    this->TypeApp=TypeApp;
}
QSqlQueryModel* Appareils:: AfficherAppareil()
 {
     QSqlQueryModel* model=new QSqlQueryModel();
      model->setQuery("SELECT* FROM APPAREILS");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("Numserie"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("NomApp"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatApp"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("TypeApp"));
     return  model;
 }
bool Appareils::AjouterAppareil()
{
    QSqlQuery query;
    QString NumSerie_string=QString::number(NumSerie);
          query.prepare("INSERT INTO APPAREILS (NUMSERIE,NOMAPP,TYPEAPP,ETATAPP)"
                        "VALUES (:NumSerie, :NomApp, :TypeApp, :EtatApp)");
          query.bindValue(":NumSerie", NumSerie_string);
          query.bindValue(":NomApp", NomApp);
          query.bindValue(":TypeApp", TypeApp);
          query.bindValue(":EtatApp", EtatApp);
         return query.exec();
}
 bool Appareils::SupprimerAppareil(int NumSerie)
  {
      QSqlQuery query;
      query.prepare("DELETE FROM APPAREILS WHERE NUMSERIE =:NUMSERIE");
      query.bindValue(":NUMSERIE",NumSerie);
      return query.exec();
  }
bool Appareils::ModifierAppareil()
{
    QSqlQuery query;
    query.prepare("DELETE FROM APPAREILS WHERE NUMSERIE =:NUMSERIE");
    query.bindValue(":NUMSERIE",NumSerie);
    query.exec();
QString NumSerie_string=QString::number(NumSerie);
query.prepare("INSERT INTO APPAREILS (NUMSERIE,NOMAPP,TYPEAPP,ETATAPP)"
              "VALUES (:NumSerie, :NomApp, :TypeApp, :EtatApp)");
query.bindValue(":NumSerie", NumSerie_string);
query.bindValue(":NomApp", NomApp);
query.bindValue(":TypeApp", TypeApp);
query.bindValue(":EtatApp", EtatApp);
return query.exec();}
QSqlQueryModel* Appareils:: AfficherAppASC()
 {
     QSqlQueryModel* model=new QSqlQueryModel();
      model->setQuery("SELECT* FROM APPAREILS ORDER BY NumSerie ASC");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("NumSerie"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("NomApp"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatApp"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("TypeApp"));
     return  model;
 }
QSqlQueryModel* Appareils:: AfficherAppDES()
 {
     QSqlQueryModel* model=new QSqlQueryModel();
      model->setQuery("SELECT* FROM APPAREILS ORDER BY NumSerie DESC");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("NumSerie"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("NomApp"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatApp"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("TypeApp"));
     return  model;
}
QSqlQueryModel* Appareils:: AfficherAppASC1()
 {
     QSqlQueryModel* model=new QSqlQueryModel();
      model->setQuery("SELECT* FROM APPAREILS ORDER BY NomApp ASC");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("NumSerie"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("NomApp"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatApp"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("TypeApp"));
     return  model;
}
QSqlQueryModel* Appareils:: AfficherAppDES1()
 {
     QSqlQueryModel* model=new QSqlQueryModel();
      model->setQuery("SELECT* FROM APPAREILS ORDER BY NomApp DESC");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("NumSerie"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("NomApp"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatApp"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("TypeApp"));
     return  model;
}
QSqlQueryModel* Appareils:: AfficherAppASC2()
 {
     QSqlQueryModel* model=new QSqlQueryModel();
      model->setQuery("SELECT* FROM APPAREILS ORDER BY EtatApp ASC");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("NumSerie"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("NomApp"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatApp"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("TypeApp"));
     return  model;
 }
QSqlQueryModel* Appareils:: AfficherAppDES2()
 {
     QSqlQueryModel* model=new QSqlQueryModel();
      model->setQuery("SELECT* FROM APPAREILS ORDER BY EtatApp DESC");
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("NumSerie"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("NomApp"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatApp"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("TypeApp"));
     return  model;
}
QSqlQueryModel* Appareils::Afficher_recherche(int NumSerie){
    QSqlQuery query;
    query.prepare("select * from APPAREILS where NUMSERIE = :NumSerie");
    query.bindValue(":NumSerie", NumSerie);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NumSerie"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NomApp"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatApp"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TypeApp"));
        return model;
    }
QSqlQueryModel* Appareils::Afficher_recherche1(QString NomApp){
    QSqlQuery query;
    query.prepare("select * from APPAREILS where NOMAPP = :NomApp");
    query.bindValue(":NomApp", NomApp);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NumSerie"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NomApp"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatApp"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TypeApp"));
        return model;
    }
QSqlQueryModel* Appareils::Afficher_recherche2(QString EtatApp){
    QSqlQuery query;
    query.prepare("select * from APPAREILS where ETATAPP = :EtatApp");
    query.bindValue(":EtatApp", EtatApp);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NumSerie"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NomApp"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("EtatApp"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TypeApp"));
        return model;
    }
