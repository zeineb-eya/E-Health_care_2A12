#include "service.h"
#include <QDateEdit>

service:: service(int ID,QString t , QDate d , QString h, QString m, QString p,int pr)
{    type = t ;
     date = d;
     heure = h;
     nom_med = m;
     nom_pat =p ;
      ids=ID ;
       prix = pr;
}

bool service :: ajouterS ()
{QSqlQuery query ;
QString ress = QString :: number (ids);
QString resss = QString :: number (prix);
// prepare() : prend la requete en parametre pour la preparer a l'execution
query.prepare("insert into service (ids, type,dates,heure,nom_med,nom_pat,prix)""values (:ids,:type,:date,:heure,:nom_med,:nom_pat,:prix)");
//creation des variables liées
query.bindValue(":ids",ress);
query.bindValue(":type",type);
query.bindValue(":date",date);
query.bindValue(":heure",heure);
query.bindValue(":nom_med",nom_med);
query.bindValue(":nom_pat",nom_pat);
query.bindValue(":prix",resss);

return query.exec(); //exec() : envoie la requete pour l'executer
}
bool service :: supprimerS(int ids)
{QSqlQuery query ;
   QString ress = QString :: number (ids);
   query.prepare("delete from service where ids = :ids");
   query.bindValue(":ids",ress);
   return  query.exec();
}

QSqlQueryModel * service :: afficherS ()
{   QSqlQueryModel * model = new QSqlQueryModel() ;
    model->setQuery("select * from service  "); // afficher tous les attributs de la classe service // au lieu de * on peut ecrire id,nom,prenom
  /*  model->setHeaderData(0,Qt::Horizontal,QObject::tr("ids"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("type"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("date"));
     model->setHeaderData(3,Qt::Horizontal,QObject::tr("heure"));
      model->setHeaderData(4,Qt::Horizontal,QObject::tr("nom_med"));
      model->setHeaderData(5,Qt::Horizontal,QObject::tr("nom_pat"));
      model->setHeaderData(6,Qt::Horizontal,QObject::tr("prix"));*/


    return model;

}
QSqlQueryModel * service ::rechercherS(const QString &x)
{
    QSqlQueryModel * model = new QSqlQueryModel();

        model->setQuery("select * from service where ((ids || type || dates || heure || nom_med || nom_pat || prix ) LIKE '%"+x+"%')");
 return model;
    }
QSqlQueryModel *  service ::trierS(const QString &critere, const QString &mode )
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from service order by "+critere+" "+mode+"");

    return model;
}

bool service::modifierS(int ids,QString type, QDate date,QString heure, QString nom_med, QString nom_pat, int prix )
{
    QSqlQuery query;



    query.prepare("update service set ids=:ids, type=:type,dates=:date,heure=:heure,nom_med=:nom_med, nom_pat=:nom_pat, prix=:prix where ids=:ids");
    query.bindValue(":ids", ids);
    query.bindValue(":type",type);
    query.bindValue(":date",date);
    query.bindValue(":heure", heure);
    query.bindValue(":nom_med",nom_med);
    query.bindValue(":nom_pat",nom_pat);
    query.bindValue(":prix",prix);


    return query.exec();
}


