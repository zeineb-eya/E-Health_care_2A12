#include "reclamation.h"

#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include "reclamation.h"
#include <QDebug>


Reclamation::Reclamation(){
    numrec=0;
    nomrec="";
    descriptionrec="";
    daterec="";

}

Reclamation::Reclamation(int numrec,QString nomrec, QString descriptionrec, QString daterec){

    this->numrec=numrec;
    this->nomrec=nomrec;
    this->descriptionrec=descriptionrec;
    this->daterec=daterec;

}

int Reclamation::get_numrec(){return  numrec;}
QString Reclamation::get_nomrec(){return  nomrec;}
QString Reclamation::get_descriptionrec(){return descriptionrec;}
QString Reclamation::get_daterec(){return  daterec;}

void Reclamation::set_numrec(int numrec){this->numrec=numrec;}
void Reclamation::set_nomrec(int  nomrec){this-> nomrec= nomrec;}
void Reclamation::set_descriptionrec(int descriptionrec){this->descriptionrec=descriptionrec;}
void Reclamation::set_daterec(QString daterec){this->daterec=daterec;}



//Ajout d'un Reclamation :

bool Reclamation::ajouter_rec(){
    QSqlQuery query;
    QString res= QString::number(numrec);
    query.prepare("INSERT INTO RECLAMATION(NUMREC,NOMREC,DESCRIPTIONREC,DATEREC) "
                        "VALUES (:numrec,:nomrec,:descriptionrec,:daterec)");
    query.bindValue(":numrec", res);
    query.bindValue(":nomrec", nomrec);
    query.bindValue(":descriptionrec", descriptionrec);
    query.bindValue(":daterec", daterec);

    return    query.exec();
}


//Afficher Une Reclamtion :

QSqlQueryModel* Reclamation::afficher_rec(){
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from RECLAMATION");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMREC"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMREC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONREC"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEREC"));

        return model;
    }

//Suppresion d'une Reclamation
bool Reclamation::supprimer_rec(int numrec){
    QSqlQuery query;
    QString res= QString::number(numrec);
    query.prepare("Delete from RECLAMATION where NUMREC =:numrec ");
    query.bindValue(":numrec", res);
    return    query.exec();
}

//Modification D'une Reclam par numrec

bool Reclamation::modifier_rec(int numrec){
    QSqlQuery query;
    QString res= QString::number(numrec);
    query.prepare("UPDATE RECLAMATION SET NOMREC=:nomrec ,DESCRIPTIONREC=:descriptionrec ,DATEREC=:daterec WHERE NUMREC=:numrec ");

    query.bindValue(":numrec", res);
    query.bindValue(":nomrec", nomrec);
    query.bindValue(":descriptionrec", descriptionrec);
    query.bindValue(":daterec", daterec);

    return    query.exec();
}
//affich recherche
//par num
QSqlQueryModel* Reclamation::afficher_reclamation(int numrec){
    QSqlQuery query;
    QString res= QString::number(numrec);
    query.prepare("SELECT * FROM RECLAMATION WHERE NUMREC=:numrec ");
    query.bindValue(":numrec", res);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMREC"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMREC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONREC"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEREC"));

        return model;

    }
//par nom
QSqlQueryModel* Reclamation::afficher_reclamationnom(QString nomrec){
    QSqlQuery query;
    //QString res= QString::number(numrec);
    query.prepare("SELECT * FROM RECLAMATION WHERE nomrec=:nomrec ");
    query.bindValue(":nomrec", nomrec);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMREC"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMREC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONREC"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEREC"));

        return model;

    }
//pardate
QSqlQueryModel* Reclamation::afficher_reclamationdate(QString daterec){
    QSqlQuery query;
    //QString res= QString::number(numrec);
    query.prepare("SELECT * FROM RECLAMATION WHERE daterec=:daterec ");
    query.bindValue(":daterec", daterec);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMREC"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMREC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONREC"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEREC"));

        return model;

    }

bool Reclamation::search(int numrec){
    QSqlQuery query;
    QString res = QString::number(numrec);
    query.prepare("SELECT NUMREC FROM RECLAMATION WHERE NUMREC=:numrec");
    query.bindValue(":numrec", res);
    query.exec();

    if(query.size()!=numrec){return false;}
    else return true;


}

//Tri selon numrec
QSqlQueryModel* Reclamation::trier_rec()
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from RECLAMATION order by NUMREC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMREC"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMREC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONREC"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEREC"));

        return model;
}

QSqlQueryModel* Reclamation::trier_desc_rec()
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from RECLAMATION order by NUMREC desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMREC"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMREC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONREC"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEREC"));

        return model;
}
//tri al nom :
QSqlQueryModel* Reclamation::tri_NomCroissant_rec()
{
    QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("select * from RECLAMATION order by NOMREC ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMREC"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMREC"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONREC"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEREC"));
        return model;
    }



QSqlQueryModel* Reclamation::tri_NomDeCroissant_rec()
{
    QSqlQueryModel * model= new QSqlQueryModel();

        model->setQuery("select * from RECLAMATION order by NOMREC desc ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMREC"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMREC"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONREC"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEREC"));
        return model;
    }


 QSqlQueryModel* Reclamation::tri_DateAscendant_rec()
 {
     QSqlQueryModel * model= new QSqlQueryModel();

         model->setQuery("select * from RECLAMATION order by DATEREC ");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMREC"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMREC"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONREC"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEREC"));
         return model;
 }


 QSqlQueryModel* Reclamation::tri_DateDescendant_rec()
 {
     QSqlQueryModel * model= new QSqlQueryModel();

         model->setQuery("select * from RECLAMATION order by DATEREC desc ");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMREC"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMREC"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONREC"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEREC"));
         return model;
 }

/*
Reclamation::Reclamation()
{
    numrec=0;
    nomrec="";
    descriptionrec="";
    daterec="";
}

Reclamation::Reclamation(int numrec,QString nomrec, QString descriptionrec,QString daterec)
{
    this->numrec=numrec;
    this->nomrec=nomrec;
    this->descriptionrec=descriptionrec;
    this->daterec=daterec;

}

int Reclamation::get_numrec(){return  numrec;}
QString Reclamation::get_nomrec(){return  nomrec;}
QString Reclamation::get_descriptionrec(){return descriptionrec;}
QString Reclamation::get_daterec(){return  daterec;}

bool Reclamation::ajouter_rec(){
    QSqlQuery query;
    QString res= QString::number(numrec);
    query.prepare("INSERT INTO RECLAMATION(NUMREC,NOMREC,DESCRIPTIONREC,DATEREC,) "
                        "VALUES (:numrec,:nomrec,:descriptionrec,:daterec)");

    query.bindValue(":numrec", res);
    query.bindValue(":nomrec", nomrec);
    query.bindValue(":descriptionrec", descriptionrec);
    query.bindValue(":daterec", daterec);

    return    query.exec();
}


QSqlQueryModel* Reclamation::afficher_rec(){
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from RECLAMATION");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMREC"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMREC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONREC"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEREC"));
        return model;
    }

bool Reclamation::supprimer_rec(int numrec){
    QSqlQuery query;
    QString res= QString::number(numrec);
    query.prepare("Delete from RECLAMATION where NUMREC = :numrec ");
    query.bindValue(":numrec", res);
    return    query.exec();
}


bool Reclamation::modifier_rec(int numrec){
    QSqlQuery query;
    QString res= QString::number(numrec);
    query.prepare("UPDATE RECLAMATION SET DATEREC =:numrec,:nomrec,:daterec, DESCRIPTION = :description, IDCLIENT = :idclient = :typerec WHERE NUMREC = :numrec ");
    query.bindValue(":numrec", res);
    query.bindValue(":nomrec", nomrec);
    query.bindValue(":descriptionrec", descriptionrec);
    query.bindValue(":daterec", daterec);

    return    query.exec();
}


QSqlQueryModel* Reclamation::recherche_rec(int numrec){
    QSqlQuery query;
    QString res= QString::number(numrec);
    query.prepare("SELECT * FROM RECLAMATION WHERE NUMREC = :numrec ");
    query.bindValue(":numrec", res);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();

    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMREC"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMREC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONREC"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEREC"));

        return model;
    }
QSqlQueryModel* Reclamation::trier_rec()
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from RECLAMATION order by DATEREC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMREC"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMREC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONREC"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEREC"));

        return model;
}

QSqlQueryModel* Reclamation::trier_desc_rec()
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from RECLAMATION order by NUMREC desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("NUMREC"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMREC"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTIONREC"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEREC"));

        return model;
}
*/  //originall
