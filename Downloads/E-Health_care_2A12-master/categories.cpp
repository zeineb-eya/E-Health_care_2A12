#include "categories.h"
#include <QSqlQuery>
#include <QDebug>
#include "connexion.h"
categories::categories()
{
id=0; encaissements=""; chiffres="";
gains=""; depenses=""; salaires="";

}

//info categories
categories::categories(int id,QString encaissements,QString chiffres,QString gains,QString depenses,QString salaires)
{   this->id=id;
    this->encaissements=encaissements;
    this->chiffres=chiffres;
    this->gains=gains;
    this->depenses=depenses;
    this->salaires=salaires;

}


int categories::getid(){return id;}
QString categories::getencaissements(){return  encaissements;}
QString categories::getchiffres(){return  chiffres;}
QString categories::getgains(){return  gains;}
QString categories::getdepenses(){return  depenses;}
QString categories::getsalaires(){return  salaires;}


void categories::setid(int id){this->id=id;}
void categories::setencaissements(QString encaissements){this->encaissements=encaissements;}
void categories::setchiffres(QString chiffres){this->chiffres=chiffres;}
void categories::setgains(QString gains){this->gains=gains;}
void categories::setdepenses(QString depenses){this->depenses=depenses;}
void categories::setsalaires(QString salaires){this->salaires=salaires;}


bool categories::ajouter()
{

  QSqlQuery query;
  QString id_string= QString::number(id);

  query.prepare("INSERT INTO CATEGORIES (ID, ENCAISSEMENTS, CHIFFRES, GAINS, DEPENSES, SALAIRES)"
                           "VALUES (:id, :encaissements, :chiffres, :gains, :depenses, :salaires)");

         query.bindValue(":id",id_string);
         query.bindValue(":encaissements", encaissements);
         query.bindValue(":chiffres", chiffres);
         query.bindValue(":gains", gains);
         query.bindValue(":depenses", depenses);
         query.bindValue(":salaires", salaires);




        return query.exec();

}







bool categories::supprimer(int id)
{


        QSqlQuery query;
        QString id_string= QString::number(id);
        query.prepare("Delete from categories where ID = :id ");
        query.bindValue(":id", id_string);
        return    query.exec();


}






QSqlQueryModel* categories::afficher()
{
  QSqlQueryModel* model=new QSqlQueryModel();


   model->setQuery("SELECT* FROM categories");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("encaissements"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("chiffres"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("gains"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("depenses"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("salaires"));

  return  model;
}
bool categories::modifier_categories()
{

        QSqlQuery query;
        QString id_string= QString::number(id);

        query.prepare("UPDATE categories set encaissements=:encaissements, chiffres=:chiffres, gains=:gains, depenses=:depenses, salaires=:salaires where id=:id");


        query.bindValue(":id",id_string);
        query.bindValue(":encaissements", encaissements);
        query.bindValue(":chiffres", chiffres);
        query.bindValue(":gains", gains);
        query.bindValue(":depenses", depenses);
        query.bindValue(":salaires", salaires);

        return    query.exec();


}
QSqlQueryModel * categories::afficher_liste_categories(){

QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select id from categories");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));


    return model;

}



/*bool categories::search(int id){
    QSqlQuery query;
    QString res = QString::number(id);
    query.prepare("SELECT id FROM CATEGORIES WHERE id = :id");
    query.bindValue(":id", res);
    query.exec();

    if(query.size()!=id){return false;}
    else return true;


}*/

QSqlQueryModel *categories::rechercher(QString chaine){


    QSqlQueryModel * model =new QSqlQueryModel();

   QSqlQuery query ;
       model->setQuery("SELECT* FROM CATEGORIES WHERE id like '%"+chaine+"' OR id like '%"+chaine+"'");
       model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
       model->setHeaderData(1,Qt::Horizontal,QObject::tr("encaissements"));
       model->setHeaderData(2,Qt::Horizontal,QObject::tr("chiffres"));
       model->setHeaderData(3,Qt::Horizontal,QObject::tr("gains"));
       model->setHeaderData(4,Qt::Horizontal,QObject::tr("depenses"));
       model->setHeaderData(5,Qt::Horizontal,QObject::tr("salaires"));

    return model;

}

/*QSqlQueryModel* categories::afficher_asc()//tri asc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from PATIENTS ORDER BY id");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("sexe"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("tel"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("nomp_a_prevenir"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("prenomp_a_prevenir"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("telp_a_prevenir"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("adresse"));
    model->setHeaderData(9, Qt::Horizontal, QObject::tr("situation_familliale"));
    model->setHeaderData(10, Qt::Horizontal, QObject::tr("assurance_medical"));
    model->setHeaderData(11, Qt::Horizontal, QObject::tr("code_assurance"));
    model->setHeaderData(12, Qt::Horizontal, QObject::tr("date_naissance"));
    model->setHeaderData(13, Qt::Horizontal, QObject::tr("typepatient"));

        return model;
    }*/

/*QSqlQueryModel* patient::afficher_desc() //trie desc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from PATIENTS ORDER BY id DESC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("sexe"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("tel"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("nomp_a_prevenir"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("prenomp_a_prevenir"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("telp_a_prevenir"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("adresse"));
    model->setHeaderData(9, Qt::Horizontal, QObject::tr("situation_familliale"));
    model->setHeaderData(10, Qt::Horizontal, QObject::tr("assurance_medical"));
    model->setHeaderData(11, Qt::Horizontal, QObject::tr("code_assurance"));
    model->setHeaderData(12, Qt::Horizontal, QObject::tr("date_naissance"));
    model->setHeaderData(13, Qt::Horizontal, QObject::tr("typepatient"));

        return model;
    }*/
    QSqlQueryModel* categories::afficher_idcategories(int id){
    QSqlQuery query;
    query.prepare("select * from CATEGORIES where ID = :id");
    query.bindValue(":id", id);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("encaissements"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("chiffres"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("gains"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("depenses"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("salaires"));

        return model;
    }
    QSqlQueryModel *  categories::trier(const QString &critere, const QString &mode )
    {
        QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from CATEGORIES order by "+critere+" "+mode+"");

        return model;
    }
