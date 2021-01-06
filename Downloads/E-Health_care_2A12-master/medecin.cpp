#include "medecin.h"


Medecin:: Medecin(int idd,QString n,QString p,QString s,QString t )
{
    nom = n;
    prenom = p;
    id = idd ;
    specialite = s;
    tel= t;
}
bool Medecin :: ajouter()
{
QSqlQuery query ;
QString res = QString :: number (id);
// prepare() : prend la requete en parametre pour la preparer a l'execution
query.prepare("insert into medecin (id, nom,prenom,specialite,tel)""values (:id,:nom,:prenom,:specialite,:tel)");
//creation des variables liées
query.bindValue(":id",res);
query.bindValue(":nom",nom);
query.bindValue(":prenom",prenom);
query.bindValue(":specialite",specialite);
query.bindValue(":tel",tel);
return query.exec(); //exec() : envoie la requete pour l'executer

}

bool Medecin :: supprimer(int id)
{QSqlQuery query ;
   QString res = QString :: number (id);
   query.prepare("delete from medecin where id = :id");
   query.bindValue(":id",res);
   return  query.exec();
}

QSqlQueryModel * Medecin :: afficher ()
{   QSqlQueryModel * model = new QSqlQueryModel() ;
    model->setQuery("select * from medecin  "); // afficher tous les attributs de la classe medecin // au lieu de * on peut ecrire id,nom,prenom
   /* model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Prenom"));
     model->setHeaderData(3,Qt::Horizontal,QObject::tr("specialite"));
      model->setHeaderData(4,Qt::Horizontal,QObject::tr("tel"));*/
    return model;


}


QSqlQueryModel * Medecin::rechercher(const QString &x)
{
 /*   QSqlQuery query;
    QString res = QString::number(idd);
    query.prepare("SELECT ID FROM Medecin WHERE idd = :id");
    query.bindValue(":id", res);
    query.exec();

    if(query.size()!=id){return false;}
    else return true;*/



        QSqlQueryModel * model = new QSqlQueryModel();

        model->setQuery("select * from medecin where ((id || nom || prenom || specialite || tel ) LIKE '%"+x+"%')");

        return model;
    }

QSqlQueryModel *  Medecin::trier(const QString &critere, const QString &mode )
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from Medecin order by "+critere+" "+mode+"");

    return model;
}

bool Medecin::modifier(int id,QString nom, QString prenom,QString specialite, QString tel )
{
    QSqlQuery query;
    //QString res= QString::number(id);
    //QString cin1= QString::number(cin);
    //QString numero= QString::number(num);


    query.prepare("update medecin set id=:id, nom=:nom,prenom=:prenom,specialite=:specialite,tel=:tel where id=:id");
    query.bindValue(":id", id);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":specialite", specialite);
    query.bindValue(":tel",tel);



    return query.exec();
}


