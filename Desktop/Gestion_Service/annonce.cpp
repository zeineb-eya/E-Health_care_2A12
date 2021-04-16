#include "annonce.h"
#include <QDebug>
#include<QString>
#include "connexion.h"

Annonce::Annonce(){
    codean=0;
    noman="";
    descriptionan="";
    datean="";

}

Annonce::Annonce(int codean, QString noman, QString descriptionan, QString datean ){
    this->codean=codean;
    this->noman=noman;
    this->descriptionan=descriptionan;
    this->datean=datean;
}

int Annonce::get_codean(){return  codean;}
QString Annonce::get_noman(){return  noman;}
QString Annonce::get_descriptionan(){return  descriptionan;}
QString Annonce::get_datean(){return datean;}

void Annonce::set_codean(int codean){this->codean=codean;}
void Annonce::set_noman(int  noman){this-> noman= noman;}
void Annonce::set_descriptionan(int descriptionan){this->descriptionan=descriptionan;}
void Annonce::set_datean(QString datean){this->datean=datean;}




bool Annonce::ajouter_an(){
    QSqlQuery query;
    QString res= QString::number(codean);
    query.prepare("INSERT INTO ANNONCE(CODEAN,NOMAN,DESCRIPTIONAN,DATEAN) "
                        "VALUES (:codean,:noman,:descriptionan,:datean)");
    query.bindValue(":codean", res);
    query.bindValue(":noman", noman);
    query.bindValue(":descriptionan", descriptionan);
    query.bindValue(":datean", datean);

    return    query.exec();
}


QSqlQueryModel* Annonce::afficher_an(){
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from ANNONCE");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODEAN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMAN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONAN"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEAN"));

        return model;
    }


bool Annonce::supprimer_an(int codean){
    QSqlQuery query;
    QString res= QString::number(codean);
    query.prepare("Delete from ANNONCE where CODEAN =:codean ");
    query.bindValue(":codean", res);
    return    query.exec();
}


bool Annonce::modifier_an(int codean){
    QSqlQuery query;
    QString res= QString::number(codean);
    query.prepare("UPDATE ANNONCE SET noman=:noman ,DESCRIPTIONAN=:descriptionan ,DATEREC=:datean WHERE NUMAN=:numan ");

    query.bindValue(":codean", res);
    query.bindValue(":noman", noman);
    query.bindValue(":descriptionan", descriptionan);
    query.bindValue(":datean", datean);

    return    query.exec();
}

//affich recherche
//par code
QSqlQueryModel* Annonce::afficher_annonce(int codean){
    QSqlQuery query;
    QString res= QString::number(codean);
    query.prepare("SELECT * FROM ANNONCE WHERE CODEAN=:codean ");
    query.bindValue(":codean", res);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODEAN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMAN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONAN"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEAN"));

        return model;

    }
//par nom
QSqlQueryModel* Annonce::afficher_annoncenom(QString noman){
    QSqlQuery query;
    //QString res= QString::number(codean);
    query.prepare("SELECT * FROM ANNONCE WHERE noman=:noman ");
    query.bindValue(":noman", noman);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODEAN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMAN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONAN"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEAN"));

        return model;

    }
//par date
QSqlQueryModel* Annonce::afficher_annoncedate(QString datean){
    QSqlQuery query;
    //QString res= QString::number(codean);
    query.prepare("SELECT * FROM ANNONCE WHERE datean=:datean ");
    query.bindValue(":datean", datean);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODEAN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMAN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONAN"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEAN"));

        return model;

    }

bool Annonce::search(int codean){
    QSqlQuery query;
    QString res = QString::number(codean);
    query.prepare("SELECT CODEAN FROM ANNONCE WHERE CODEAN=:codean");
    query.bindValue(":codean", res);
    query.exec();

    if(query.size()!=codean){return false;}
    else return true;
}


//Tri selon codean
QSqlQueryModel* Annonce::trier_an()
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from ANNONCE order by CODEAN");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr(" CODEAN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMAN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONAN"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEAN"));

        return model;
}

QSqlQueryModel* Annonce::trier_desc_an()
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from ANNONCE order by CODEAN desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODEAN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMAN"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONAN"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEAN"));

        return model;
}

//tri al nom :
QSqlQueryModel* Annonce::tri_NomCroissant()
{
    QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("select * from ANNONCE order BY NOMAN ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODEAN"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMAN"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONAN"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEAN"));
        return model;
    }



QSqlQueryModel* Annonce::tri_NomDeCroissant()
{
    QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("select * from ANNONCE order BY NOMAN desc ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODEAN"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMAN"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONAN"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEAN"));
        return model;
    }


 QSqlQueryModel* Annonce::tri_DateAscendant()
 {
     QSqlQueryModel * model= new QSqlQueryModel();

         model->setQuery("select * from ANNONCE order BY DATEAN ");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODEAN"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMAN"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONAN"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEAN"));
         return model;
 }


 QSqlQueryModel* Annonce::tri_DateDescendant()
 {
     QSqlQueryModel * model= new QSqlQueryModel();

         model->setQuery("select * from ANNONCE order BY DATEAN desc ");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("CODEAN"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMAN"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONAN"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEAN"));
         return model;
 }


/*bool Annonce::ajouter_an(){
    QSqlQuery query;
    QString res= QString::number(codean);
    query.prepare("INSERT INTO ANNONCE(codean, noman, descriptionan, datean) "
                        "VALUES (:codean, :noman, :descriptionan, :datean)");
    query.bindValue(":codean", res);
    query.bindValue(":noman",  noman);
    query.bindValue(":descriptionan", descriptionan);
    query.bindValue(":datean", datean);

    return query.exec();
}


QSqlQueryModel* Annonce::afficher_an(){
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from ANNONCE");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("codean"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("noman"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("descriptionan"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("datean"));
        return model;
    }*/
//original te3 tri ascendant aady lowl bilkol

/*QSqlQueryModel* Annonce::afficher_asc(){
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from ANNONCE ORDER BY DATE ASCEC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code annonce"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Description"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date"));
        return model;
    }*/

/*QSqlQueryModel* Annonce::afficher_codean_asc(){
        QSqlQueryModel* model= new QSqlQueryModel();
        model->setQuery("select * from ANNONCE ORDER BY DATE  ASCEC");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("codean"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("noman"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("descriptionan"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("datean"));
            return model;
  }
QSqlQueryModel* Annonce::afficher_desc(){
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from ANNONCE ORDER BY DATE DESC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("codean"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("noman"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("descriptionan"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("datean"));
        return model;
    }*/

//Tri 2 selon date
/*QSqlQueryModel* Annonce::afficher_asc(){
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from ANNONCE ORDER BY DATE ASCEC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code annonce"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Description"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date"));
        return model;
    }

QSqlQueryModel* Annonce::afficher_desc(){
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from ANNONCE ORDER BY DATE DESC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code annonce"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Destination"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date"));
        return model;
    }
*/

//aff recher selon codean

/*QSqlQueryModel* Annonce:: afficher_annonce(int codean){
    QSqlQuery query;
    query.prepare("select * from ANNONCE where CODEAN =:codean");
    query.bindValue(":codean", codean);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("codean"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("noman"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("descriptionan"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("datean"));
        return model;
    }

bool Annonce::search(int codean){
    QSqlQuery query;
    QString res = QString::number(codean);
    query.prepare("SELECT CODEAN FROM ANNONCE WHERE CODEAN =:codean");
    query.bindValue(":codean", res);
    query.exec();

    if(query.size()!=codean){return false;}
    else return true;
}

bool Annonce::supprimer_an(int codean){
    QSqlQuery query;
    QString res= QString::number(codean);
    Annonce a;
        query.prepare("Delete from ANNONCE where CODEAN =:codean");
        query.bindValue(":codean", res);
        return query.exec();

}

bool Annonce::modifier_an(int codean){
    QSqlQuery query;
    QString res= QString::number(codean);
        query.prepare("UPDATE ANNONCE set NOMAN=:noman, DESCRIPTIONAN=:descriptionan, DATEAN=:datean WHERE CODEAN= :codean ");
        query.bindValue(":codean", res);
        query.bindValue(":noman", noman);
        query.bindValue(":descriptionan", descriptionan);
        query.bindValue(":datean", datean);

        return    query.exec();
}

*/


/*annonce::annonce()
{
    code=0;
    nom="";
    description="";
    date="";
}

annonce::annonce(int code,QString nom,QString description,QString date)
{
  this->code=code;
  this->nom=nom;
  this->description=description;
  this->date=date;
}

int annonce::get_code(){return  code;}
QString annonce::get_nom(){return  nom;}
QString annonce::get_description(){return description;}
QString annonce::get_date(){return date;}


bool annonce::ajouter()
{
QSqlQuery query;
QString res= QString::number(code);
query.prepare("INSERT INTO annonce (ID, NOM, DESCRIPTION,DATE) "
                    "VALUES (:code, :nom, :description, :date)");

query.bindValue(":code", res);
query.bindValue(":nom", nom);
query.bindValue(":description", description);
query.bindValue(":date", date);

return    query.exec();
}

QSqlQueryModel * annonce::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from annonce");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Code"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Description"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date"));
    return model;
}

bool annonce::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from etudiant where ID = :code ");
query.bindValue(":code", res);
return    query.exec();
}

*/
//original
