#include "rdv.h"
#include <QDebug>
#include "connexion.h"
rdv::rdv(){
    coderdv=0;
    medecin="";
  date_rdv="";
  service="";
   id_p=0;
   time_rdv="";

}

rdv::rdv(int coderdv,QString medecin,QString date_rdv,QString service, int id_p)
{this->coderdv=coderdv; this->medecin=medecin; this->date_rdv=date_rdv; this->service=service; this->id_p=id_p; }


int rdv::getcoderdv(){return coderdv;}
QString rdv::getmedecin(){return  medecin;}
QString rdv::getservice(){return service;}
QString rdv::getdate_rdv(){return date_rdv;}
QString rdv::get_time_rdv(){return time_rdv;}
int rdv::getid_p(){return id_p;}

void rdv::setcoderdv(int coderdv){this->coderdv=coderdv;}
void rdv::setmedecin(QString medecin){this->medecin=medecin;}
void rdv::setservice(QString service){this->service=service;}
void rdv::setdate_rdv(QString date_rdv){this->date_rdv=date_rdv;}
void rdv::settime_rdv(QString time_rdv ){this->time_rdv=time_rdv;}
void rdv::setid_p(int id_p){this->id_p=id_p;}



bool rdv::ajouter()
{

    QSqlQuery query;
  QString coderdv_string= QString::number(coderdv);
         query.prepare("INSERT INTO rdv (coderdv, date_rdv, time_rdv, medecin,  service, id_p) "
                       "VALUES (:coderdv, :daterdv, :TIMERDV, :doctor, :service, id)");
         query.bindValue(":coderdv",coderdv_string);
         query.bindValue(":daterdv", date_rdv);
         query.bindValue(":TIMERDV", date_rdv);
         query.bindValue(":doctor", medecin);
         query.bindValue(":service", service);
         query.bindValue(":id",id_p);
        return query.exec();

}
bool rdv::supprimer(int coderdv)
{

    QSqlQuery query;
    QString coderdv_string= QString::number(coderdv);
    query.prepare("Delete from rdv where coderdv = :coderdv ");
    query.bindValue(":coderdv", coderdv_string);
    return    query.exec();


}
QSqlQueryModel* rdv::afficher()
{
  QSqlQueryModel* model=new QSqlQueryModel();


   model->setQuery("SELECT* FROM rdv");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("coderdv"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("daterdv"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("TIMERDV"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("doctor"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("service"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("id"));


  return  model;
}

/*bool rdv::modifier_rdv(){

        QSqlQuery query;
         QString coderdv_string= QString::number(coderdv);
        query.prepare("update rdv set date_rdv=:daterdv, time_rdv=:TIMERDV, medecin=:doctor,  service=:service, id_p:=id where coderdv=:coderdv");

        query.bindValue(":coderdv",coderdv_string);
        query.bindValue(":daterdv", date_rdv);
        query.bindValue(":TIMERDV", date_rdv);
        query.bindValue(":doctor", medecin);
        query.bindValue(":service", service);
        query.bindValue(":id",id_p);


        return    query.exec();


}

QSqlQueryModel * rdv::afficher_liste_rdv(){

QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select reference from rdv");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("coderdv"));


    return model;

}
void rdv::chercher (){

QSqlQuery query1;
QString coderdv_string= QString::number(coderdv);
QString id_p_string= QString::number(id_p);
query1.prepare("select date_rdv, time_rdv, medecin,  service, id_p from rdv where coderdv=:coderdv");
query1.bindValue(":coderdv",coderdv_string);

query1.exec();
while(query1.next())
{
date_rdv = query1.value(0).toString();
time_rdv = query1.value(1).toString();
medecin = query1.value(2).toString();
service = query1.value(3).toString();
id_p_string = query1.value(4).toString();
}
}

QSqlQueryModel * rdv::recherche (QString champ ,QString valeur,int etat){
    QSqlQueryModel * model=new QSqlQueryModel();
    QSqlQuery query;
    if(etat==0){
    query.prepare("SELECT * FROM rdv  where ("+champ+" LIKE :valeur) order by reference");}
    else
    {
         query.prepare("SELECT * FROM rdv  where ("+champ+" LIKE :valeur) order by reference desc");
    }
    valeur="%"+valeur+"%";
    query.bindValue(":valeur",valeur);
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("coderdv"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("daterdv"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TIMERDV"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("doctor"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("service"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("id"));
    return  model;

}
*/
