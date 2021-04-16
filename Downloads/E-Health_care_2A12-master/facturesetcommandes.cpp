#include "facturesetcommandes.h"
#include <QSqlQuery>
#include <QDebug>
#include "connexion.h"
fctcmn::fctcmn(){
    idfc=0;
    art="";
  qte=0;
  pu=0;
   pt=0;
   tp="";

}
//rendz-vous
fctcmn::fctcmn(int idfc,QString art,int qte,int pu,int pt, QString tp)
{
    this->idfc=idfc;
    this->art=art;
    this->qte=qte;
    this->pu=pu;
    this->pt=pt;
    this->tp=tp;
}


int fctcmn::getidfc(){return idfc;}
QString fctcmn::getart(){return  art;}
int fctcmn::getqte(){return qte;}
int fctcmn::getpu(){return pu;}
int fctcmn::getpt(){return pt;}
QString fctcmn::gettp(){return tp;}

void fctcmn::setidfc(int idfc){this->idfc=idfc;}
void fctcmn::setart(QString art){this->art=art;}
void fctcmn::setqte(int qte){this->qte=qte;}
void fctcmn::setpu(int pu){this->pu=pu;}
void fctcmn::setpt(int pt ){this->pt=pt;}
void fctcmn::settp(QString tp){this->tp=tp;}



bool fctcmn::ajouter()
{

    QSqlQuery query;
  QString idfc_string= QString::number(idfc);
  QString qte_string= QString::number(qte);
  QString pu_string= QString::number(pu);
  QString pt_string= QString::number(pt);

  query.prepare("INSERT INTO fctcmn (idfc, art, qte, pu, pt, tp) "
                         "VALUES (:idfc, :art, :qte, :pu,  :pt, :tp)");
         query.bindValue(":idfc",idfc);
         query.bindValue(":art", art);
         query.bindValue(":qte", qte);
         query.bindValue(":pu", pu);
         query.bindValue(":pt", pt);
         query.bindValue(":tp",tp);
        return query.exec();

}
bool fctcmn::supprimer(int idfc)
{

    QSqlQuery query;
    QString idfc_string= QString::number(idfc);
    query.prepare("Delete from fctcmn where idfc = :idfc ");
    query.bindValue(":idfc", idfc_string);
    return    query.exec();


}
QSqlQueryModel* fctcmn::afficher()
{
  QSqlQueryModel* model=new QSqlQueryModel();


   model->setQuery("SELECT* FROM fctcmn");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("idfc"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("art"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("qte"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("pu"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("pt"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("tp"));


  return  model;
}

bool fctcmn::modifier_fctcmn()
{

        QSqlQuery query;

         QString idfc_string= QString::number(idfc);
         QString qte_string= QString::number(qte);
         QString pu_string= QString::number(pu);
         QString pt_string= QString::number(pt);


        query.prepare("UPDATE fctcmn set art=:art, qte=:qte, pu=:pu,  pt=:pt, tp=:tp where idfc=:idfc");
        query.bindValue(":idfc",idfc_string);
        query.bindValue(":art", art);
        query.bindValue(":qte", qte_string);
        query.bindValue(":pu", pu_string);
        query.bindValue(":pt", pt_string);
        query.bindValue(":tp",tp);


        return    query.exec();


}

QSqlQueryModel * fctcmn::afficher_liste_fctcmn(){

QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select idfc from fctcmn");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("idfc"));


    return model;

}


bool fctcmn::search(int idfc){
    QSqlQuery query;
    QString res = QString::number(idfc);
    query.prepare("SELECT idfc FROM fctcmn WHERE idfc = :idfc");
    query.bindValue(":idfc", res);
    query.exec();

    if(query.size()!=idfc){return false;}
    else return true;


}

/*QSqlQueryModel* fctcmn::afficher_asc()//tri asc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from rdv ORDER BY daterdv");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("coderdv"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nb place"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("daterdv"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TIMERDV"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("doctor"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("service"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("id"));
        return model;
    }*/
QSqlQueryModel *fctcmn::rechercher(QString chaine){


    QSqlQueryModel * model =new QSqlQueryModel();

   QSqlQuery query ;
       model->setQuery("SELECT* FROM FCTCMN WHERE idfc like '%"+chaine+"' OR tp like '%"+chaine+"'");
       model->setHeaderData(0,Qt::Horizontal,QObject::tr("idfc"));
       model->setHeaderData(1,Qt::Horizontal,QObject::tr("art"));
       model->setHeaderData(2,Qt::Horizontal,QObject::tr("qte"));
       model->setHeaderData(3,Qt::Horizontal,QObject::tr("pu"));
       model->setHeaderData(4,Qt::Horizontal,QObject::tr("pt"));
       model->setHeaderData(5,Qt::Horizontal,QObject::tr("tp"));

    return model;

}

/*QSqlQueryModel* rdv::afficher_desc() //trie desc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from rdv ORDER BY daterdv DESC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("coderdv"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nb place"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("daterdv"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TIMERDV"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("doctor"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("service"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("id"));
        return model;
    }*/
