#include "patient.h"
#include <QSqlQuery>
#include <QDebug>
#include "connexion.h"
patient::patient()
{
id=0; nom=""; prenom="";
sexe=""; adresse=""; situationf="";assurancemed=""; codeassurance=""; nompap="";prenompap="";typep="";
tel=0; telpap=0; date_naissance="";

}

//info patients
patient::patient(int id,int tel,int telpap,QString nom,QString prenom,QString nompap,QString prenompap,QString adresse,QString situationf,QString assurancemed,QString codeassurance,QString typep,QString date_naissance,QString sexe/*,QString datepres,QString note,QString designationexr,QString resultatexr,QString designationexb,QString resultatexb,QString chirurigien,QString anesthesist,QString dateadm,QString typeadm,QString motifadm,QString nomacc,QString prenomacc,QString lienpar,QString dateent,QString datesor,QString motifsor,QString resultatsor,QString datedec,QString motifdec,QString datetrait,QString medadm*/)
{   this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->sexe=sexe;
    this->tel=tel;
    this->nompap=nompap;
    this->prenompap=prenompap;
    this->telpap=telpap;
    this->adresse=adresse;
    this->situationf=situationf;
    this->assurancemed=assurancemed;
    this->codeassurance=codeassurance;
    this->date_naissance=date_naissance;
    this->typep=typep;

}


int patient::getid(){return id;}
int patient::gettel(){return tel;}
int patient::gettelpap(){return telpap;}
QString patient::getnom(){return  nom;}
QString patient::getprenom(){return  prenom;}
QString patient::getsexe(){return  sexe;}
QString patient::getadresse(){return  adresse;}
QString patient::getsituationf(){return  situationf;}
QString patient::getassurancemed(){return  assurancemed;}
QString patient::getcodeassurance(){return  codeassurance;}
QString patient::getnompap(){return  nompap;}
QString patient::getprenompap(){return  prenompap;}
QString patient::gettypep(){return  typep;}
QString patient::get_date_naissance(){return  nom;}

void patient::setid(int id){this->id=id;}
void patient::settel(int tel){this->tel=tel;}
void patient::settelpap(int telpap){this->telpap=telpap;}
void patient::setnom(QString nom){this->nom=nom;}
void patient::setprenom(QString prenom){this->prenom=prenom;}
void patient::setsexe(QString sexe){this->sexe=sexe;}
void patient::setadresse(QString adresse){this->adresse=adresse;}
void patient::setsituationf(QString situationf){this->situationf=situationf;}
void patient::setassurancemed(QString assurancemed){this->assurancemed=assurancemed;}
void patient::setcodeassurance(QString codeassurance){this->codeassurance=codeassurance;}
void patient::setnompap(QString nompap){this->nompap=nompap;}
void patient::setprenompap(QString prenompap){this->prenompap=prenompap;}
void patient::settypep(QString typep){this->typep=typep;}
void patient::setdate_naissance(QString date_naissance){this->date_naissance=date_naissance;}



bool patient::ajouter()
{

  QSqlQuery query;
  QString id_string= QString::number(id);
  QString tel_string= QString::number(tel);
  QString telpap_string= QString::number(telpap);

  query.prepare("INSERT INTO patients (ID, NOM, PRENOM, SEXE, TEL, NOMP_A_PREVENIR, PRENOMP_A_PREVENIR, TELP_A_PREVENIR, ADRESSE, SITUATION_FAMILLIALE, ASSURANCE_MEDICAL, CODE_ASSURANCE, DATE_NAISSANCE, TYPEPATIENT)"
                           "VALUES (:id, :nom, :prenom, :sexe, :tel, :nompap, :prenompap, :telpap, :adresse, :situationf, :assurancemed, :codeassurance, :date_naissance, :typep )");

         query.bindValue(":id",id_string);
         query.bindValue(":nom", nom);
         query.bindValue(":prenom", prenom);
         query.bindValue(":sexe", sexe);
         query.bindValue(":tel", tel_string);
         query.bindValue(":nompap", nompap);
         query.bindValue(":prenompap", prenompap);
         query.bindValue(":telpap", telpap_string);
         query.bindValue(":adresse", adresse);
         query.bindValue(":situationf", situationf);
         query.bindValue(":assurancemed", assurancemed);
         query.bindValue(":codeassurance", codeassurance);
         query.bindValue(":date_naissance", date_naissance);
         query.bindValue(":typep", typep);



        return query.exec();

}







bool patient::supprimer(int id)
{


        QSqlQuery query;
        QString id_string= QString::number(id);
        query.prepare("Delete from patients where ID = :id ");
        query.bindValue(":id", id_string);
        return    query.exec();


}






QSqlQueryModel* patient::afficher()
{
  QSqlQueryModel* model=new QSqlQueryModel();

   model->setQuery("SELECT* FROM patients");
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

  return  model;
}
bool patient::modifier_patient(){

        QSqlQuery query;
        QString id_string= QString::number(id);
        QString tel_string= QString::number(tel);
        QString telpap_string= QString::number(telpap);

        query.prepare("UPDATE patients set nom=:nom, prenom=:prenom, sexe=:sexe, tel=:tel, nomp_a_prevenir=:nompap, prenomp_a_prevenir=:prenompap, telp_a_prevenir=:telpap, adresse=:adresse, situation_familliale=:situationf, assurance_medical=:assurancemed, code_assurance=:codeassurance, date_naissance=:date_naissance, typepatient=:typep where id=:id");


        query.bindValue(":id",id_string);
        query.bindValue(":nom", nom);
        query.bindValue(":prenom", prenom);
        query.bindValue(":sexe", sexe);
        query.bindValue(":tel", tel_string);
        query.bindValue(":nompap", nompap);
        query.bindValue(":prenompap", prenompap);
        query.bindValue(":telpap", telpap_string);
        query.bindValue(":adresse", adresse);
        query.bindValue(":situationf", situationf);
        query.bindValue(":assurancemed", assurancemed);
        query.bindValue(":codeassurance", codeassurance);
        query.bindValue(":date_naissance", date_naissance);
        query.bindValue(":typep", typep);

        return    query.exec();


}
QSqlQueryModel * patient::afficher_liste_patient(){

QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select id from patients");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));


    return model;

}



bool patient::search(int id){
    QSqlQuery query;
    QString res = QString::number(id);
    query.prepare("SELECT id FROM PATIENTS WHERE id = :id");
    query.bindValue(":id", res);
    query.exec();

    if(query.size()!=id){return false;}
    else return true;


}

QSqlQueryModel* patient::afficher_asc()//tri asc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from PATIENTS ORDER BY id");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("SEXE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE_NAISSANCE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("SITUATION_FAMILLIALE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("ASSURANCE_MEDICAL"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("CODE_ASSURANCE"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("NOMP_A_PREVENIR"));
    model->setHeaderData(9, Qt::Horizontal, QObject::tr("PRENOMP_A_PREVENIR"));
    model->setHeaderData(10, Qt::Horizontal, QObject::tr("TELP_A_PREVENIR"));
    model->setHeaderData(11, Qt::Horizontal, QObject::tr("TEL"));
    model->setHeaderData(12, Qt::Horizontal, QObject::tr("TYPEPATIENT"));
    model->setHeaderData(13, Qt::Horizontal, QObject::tr("ADRESSE"));

        return model;
    }

QSqlQueryModel* patient::afficher_desc() //trie desc
{
    QSqlQueryModel* model= new QSqlQueryModel();
    model->setQuery("select * from PATIENTS ORDER BY id DESC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("SEXE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE_NAISSANCE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("SITUATION_FAMILLIALE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("ASSURANCE_MEDICAL"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("CODE_ASSURANCE"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("NOMP_A_PREVENIR"));
    model->setHeaderData(9, Qt::Horizontal, QObject::tr("PRENOMP_A_PREVENIR"));
    model->setHeaderData(10, Qt::Horizontal, QObject::tr("TELP_A_PREVENIR"));
    model->setHeaderData(11, Qt::Horizontal, QObject::tr("TEL"));
    model->setHeaderData(12, Qt::Horizontal, QObject::tr("TYPEPATIENT"));
    model->setHeaderData(13, Qt::Horizontal, QObject::tr("ADRESSE"));

        return model;
    }
QSqlQueryModel* patient::afficher_idpatient(int id){
    QSqlQuery query;
    query.prepare("select * from PATIENTS where ID = :id");
    query.bindValue(":id", id);
    QSqlQueryModel* model= new QSqlQueryModel();
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("SEXE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE_NAISSANCE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("SITUATION_FAMILLIALE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("ASSURANCE_MEDICAL"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("CODE_ASSURANCE"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("NOMP_A_PREVENIR"));
    model->setHeaderData(9, Qt::Horizontal, QObject::tr("PRENOMP_A_PREVENIR"));
    model->setHeaderData(10, Qt::Horizontal, QObject::tr("TELP_A_PREVENIR"));
    model->setHeaderData(11, Qt::Horizontal, QObject::tr("TEL"));
    model->setHeaderData(12, Qt::Horizontal, QObject::tr("TYPEPATIENT"));
    model->setHeaderData(13, Qt::Horizontal, QObject::tr("ADRESSE"));
        return model;
    }
