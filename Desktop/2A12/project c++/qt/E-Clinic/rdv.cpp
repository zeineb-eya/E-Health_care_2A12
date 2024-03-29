#include "rdv.h"
#include <QSqlQuery>
#include <QDebug>
#include "connexion.h"
rdv::rdv(){
    coderdv=0;
    medecin="";
  date_rdv="";
  time_rdv="";
  service="";
   id_p=0;


}

rdv::rdv(int coderdv, QString medecin, QString date_rdv, QString time_rdv, QString service, int id_p)
{this->coderdv=coderdv; this->medecin=medecin; this->date_rdv=date_rdv; this->time_rdv=time_rdv; this->service=service; this->id_p=id_p; }


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
  QString id_p_string= QString::number(id_p);

  query.prepare("INSERT INTO rdv (CODERDV, DOCTOR, DATERDV, TIMERDV,  SERVICE, ID) "
                         "VALUES (:coderdv, :medecin, :date_rdv, :time_rdv,  :service, :id_p)");
         query.bindValue(":coderdv",coderdv_string);
         query.bindValue(":medecin", medecin);
         query.bindValue(":date_rdv", date_rdv);
         query.bindValue(":time_rdv", time_rdv);
         query.bindValue(":service", service);
         query.bindValue(":id_p",id_p_string);
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

   model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODERDV"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("DOCTOR"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATERDV"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("TIMERDV"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("SERVICE"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("ID"));




  return  model;
}

bool rdv::modifier_rdv(){

        QSqlQuery query;
         QString coderdv_string= QString::number(coderdv);
         QString id_p_string= QString::number(id_p);
        query.prepare("UPDATE rdv SET DOCTOR=:medecin, DATERDV=:date_rdv, TIMERDV=:time_rdv,  SERVICE=:service, ID:=id_p WHERE CODERDV=:coderdv");

        query.bindValue(":coderdv",coderdv_string);
        query.bindValue(":medecin", medecin);
        query.bindValue(":date_rdv", date_rdv);
        query.bindValue(":time_rdv", time_rdv);
        query.bindValue(":service", service);
        query.bindValue(":id_p",id_p_string);


        return    query.exec();


}

bool rdv::modifier_r(){

        QSqlQuery query;
        QString coderdv_string= QString::number(coderdv);
        QString id_p_string= QString::number(id_p);

        query.prepare("UPDATE rdv set doctor=:medecin, daterdv=:date_rdv, timerdv=:time_rdv, service=:service, id=:id_p where coderdv=:coderdv");


        query.bindValue(":coderdv",coderdv_string);
        query.bindValue(":medecin", medecin);
        query.bindValue(":date_rdv", date_rdv);
        query.bindValue(":time_rdv", time_rdv);
        query.bindValue(":service", service);
        query.bindValue(":id_p",id_p_string);

        return    query.exec();


}

/*QSqlQueryModel * rdv::afficher_liste_rdv(){

QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select reference from rdv");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("coderdv"));


    return model;

}*/


bool rdv::search(int coderdv){
    QSqlQuery query;
    QString res = QString::number(coderdv);
    query.prepare("SELECT coderdv FROM rdv WHERE coderdv = :coderdv");
    query.bindValue(":coderdv", res);
    query.exec();

    if(query.size()!=coderdv){return false;}
    else return true;


}
bool rdv::searchdoc(QString medecin){
    QSqlQuery query;
    //QString res = QString::number(coderdv);
    query.prepare("SELECT doctor FROM rdv WHERE doctor = :medecin");
    query.bindValue(":medecin", medecin);
    query.exec();

    if(query.size()!=medecin){return false;}
    else return true;


}
bool rdv::searchID(int id_p){
    QSqlQuery query;
    //QString res = QString::number(coderdv);
    query.prepare("SELECT daterdv FROM rdv WHERE ID = :id_p");
    query.bindValue(":id_p", id_p);
    query.exec();

    if(query.size()!=id_p){return false;}
    else return true;


}

QSqlQueryModel* rdv::afficher_asc()//tri asc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from rdv ORDER BY coderdv");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODERDV"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DOCTOR"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATERDV"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TIMERDV"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("SERVICE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ID"));


        return model;
    }

QSqlQueryModel* rdv::afficher_desc() //trie desc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from rdv ORDER BY coderdv DESC");


    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODERDV"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DOCTOR"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATERDV"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TIMERDV"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("SERVICE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ID"));

        return model;
    }
QSqlQueryModel * rdv::afficher_idCroissant()
{   QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from rdv ORDER BY ID");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODERDV"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DOCTOR"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATERDV"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TIMERDV"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("SERVICE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ID"));

    return model;
}
QSqlQueryModel * rdv::afficher_idDecroissant()
{   QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from rdv ORDER BY ID desc");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODERDV"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DOCTOR"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATERDV"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TIMERDV"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("SERVICE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ID"));

    return model;
}

QSqlQueryModel * rdv::afficher_DocCroissant()
{   QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from rdv ORDER BY DOCTOR");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODERDV"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("DOCTOR"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATERDV"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("TIMERDV"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("SERVICE"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("ID"));
    return model;
}
QSqlQueryModel * rdv::afficher_DocDecroissant()
{   QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from rdv ORDER BY DOCTOR desc");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODERDV"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("DOCTOR"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATERDV"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("TIMERDV"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("SERVICE"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("ID"));
    return model;
}

/*bool rdv::exist(QString medecin,int id_p) {
    QSqlQuery querry;
    querry.prepare("UPDATE rdv SET ID=ID+:id_p where DOCTOR=:medecin") ;
    querry.bindValue(":id_p",id_p);
    querry.bindValue(":medecin",medecin);
    return querry.exec() ;
}*/
//recherche par id
QSqlQueryModel* rdv::afficher_coderdv(int coderdv){
    QSqlQuery query;
    query.prepare("select * from rdv where coderdv = :coderdv");
    query.bindValue(":coderdv", coderdv);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODERDV"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DOCTOR"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATERDV"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TIMERDV"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("SERVICE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ID"));
        return model;
    }

QSqlQueryModel* rdv::afficher_doc(QString medecin){
    QSqlQuery query;
    query.prepare("select * from rdv where doctor = :medecin");
    query.bindValue(":medecin", medecin);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODERDV"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DOCTOR"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATERDV"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TIMERDV"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("SERVICE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ID"));
        return model;
    }
QSqlQueryModel* rdv::afficher_ID(int id_p){
    QSqlQuery query;
    query.prepare("select * from rdv where ID = :id_p");
    query.bindValue(":id_p", id_p);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODERDV"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DOCTOR"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATERDV"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("TIMERDV"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("SERVICE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ID"));
        return model;
    }
