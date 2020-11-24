#include "patient.h"
#include <QSqlQuery>
#include <QDebug>
#include "connexion.h"
patient::patient()
{
id=0; nom=""; prenom="";
sexe=""; adresse=""; situationf="";assurancemed=""; codeassurance=""; nompap="";prenompap="";typep="";
tel=0; telpap=0; date_naissance="";
datecon="";typecon="";datepres="";nom="";prenom="";note="";designationexb=""; designationexr="";
resultatexr="";
resultatexb="";chirurigien="";anesthesist="";dateadm="";typeadm="";motifadm="";nomacc="";prenomacc="";
lienpar="";dateent="";datesor="";motifsor="";resultatsor="";datedec="";motifdec="";medadm="";datetrait="";
}


patient::patient(int id,int tel,int telpap,QString nom,QString prenom,QString nompap,QString prenompap,QString adresse,QString situationf,QString assurancemed,QString codeassurance,QString typep,QString date_naissance,QString sexe,QString datepres,QString note,QString designationexr,QString resultatexr,QString designationexb,QString resultatexb,QString chirurigien,QString anesthesist,QString dateadm,QString typeadm,QString motifadm,QString nomacc,QString prenomacc,QString lienpar,QString dateent,QString datesor,QString motifsor,QString resultatsor,QString datedec,QString motifdec,QString datetrait,QString medadm)
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
    this->datepres=datepres;
    this->note=note;
    this->designationexb=designationexb;
    this->resultatexb=resultatexb;
    this->designationexr=designationexr;
    this->resultatexr=resultatexr;
    this->chirurigien=chirurigien;
    this->anesthesist=anesthesist;
    this->dateadm=dateadm;
    this->typeadm=typeadm;
    this->motifadm=motifadm;
    this->nomacc=nomacc;
    this->prenomacc=prenomacc;
    this->lienpar=lienpar;
    this->dateent=dateent;
    this->datesor=datesor;
    this->motifsor=motifsor;
    this->resultatsor=resultatsor;
    this->datedec=datedec;
    this->motifdec=motifdec;
    this->datetrait=datetrait;
    this->medadm=medadm;

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
QString patient::getdatecon(){return datecon;}
QString patient::gettypecon(){return typecon;}
QString patient::getdatepres(){return datepres;}
QString patient::getnote(){return note;}
QString patient::getdatetrait(){return datetrait;}
QString patient::getdesignationexb(){return designationexb;}
QString patient::getresultatexb(){return resultatexb;}
QString patient::getdesignationexr(){return designationexr;}
QString patient::getresultatexr(){return resultatexr;}
QString patient::getchirurigien(){return chirurigien;}
QString patient::getanesthesist(){return anesthesist;}
QString patient::getdateadm(){return dateadm;}
QString patient::gettypeadm(){return typeadm;}
QString patient::getmotifadm(){return motifadm;}
QString patient::getmedadm(){return medadm;}
QString patient::getnomacc(){return nomacc;}
QString patient::getprenomacc(){return prenomacc;}
QString patient::getlienpar(){return lienpar;}
QString patient::getdateent(){return dateent;}
QString patient::getdatesor(){return datesor;}
QString patient::getmotifsor(){return motifsor;}
QString patient::getresultatsor(){return resultatsor;}
QString patient::getdatedec(){return datedec;}
QString patient::getmotifdec(){return motifdec;}

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
void patient::setdatecon(QString datecon){this->datecon=datecon;}
void patient::settypecon(QString typecon){this->typecon=typecon;}
void patient::setdatepres(QString datepres){this->datepres=datepres;}
void patient::setnote(QString note){this->note=note;}
void patient::setdatetrait(QString datetrait){this->datetrait=datetrait;}
void patient::setdesignationexb(QString designationexb){this->designationexb=designationexb;}
void patient::setresultatexb(QString resultatexb){this->resultatexb=resultatexb;}
void patient::setdesignationexr(QString designationexr){this->designationexr=designationexr;}
void patient::setresultatexr(QString resultatexr){this->resultatexr=resultatexr;}
void patient::setchirurigien(QString chirurigien){this->chirurigien=chirurigien;}
void patient::setanesthesist(QString anesthesist){this->anesthesist=anesthesist;}
void patient::setdateadm(QString dateadm){this->dateadm=dateadm;}
void patient::settypeadm(QString typeadm){this->typeadm=typeadm;}
void patient::setmotifadm(QString motifadm){this->motifadm=motifadm;}
void patient::setmedadm(QString medadm){this->medadm=medadm;}
void patient::setnomacc(QString nomacc){this->nomacc=nomacc;}
void patient::setprenomacc(QString prenomacc){this->prenomacc=prenomacc;}
void patient::setlienpar(QString lienpar){this->lienpar=lienpar;}
void patient::setdateent(QString dateent){this->dateent=dateent;}
void patient::setdatesor(QString datesor){this->datesor=datesor;}
void patient::setmotifsor(QString motifsor){this->motifsor=motifsor;}
void patient::setresultatsor(QString resultatsor){this->resultatsor=resultatsor;}
void patient::setdatedec(QString datedec){this->datedec=datedec;}
void patient::setmotifdec(QString motifdec){this->motifdec=motifdec;}


bool patient::ajouter()
{

    QSqlQuery query;
  QString id_string= QString::number(id);
  QString tel_string= QString::number(tel);
  QString telpap_string= QString::number(telpap);
  /*query.prepare("INSERT INTO patients (id, nom, prenom, sexe, tel, nompap, prenompap, telpap, adresse, situationf, assurancemed, codeassurance, date_naissance, typep, datecon, typecon, datepres, note, datetrait, designationexb, resultatexb, designationexr, resultatexr, chirurigien, anesthesist, dateadm, typeadm, motifadm, medadm, nomacc, prenomacc, lienpar, dateent, datesor, motifsor, resultatsor, datedec, motifdec) "
                       "VALUES (:id, :nom, :prenom, :sexe, :tel, :nomp_a_prevenir, :prenomp_a_prevenir, :telp_a_prevenir, :adresse, :situation_familliale, :assurance_medical, :code_assurance, :date_naissance, :typepatient, :DATE_CONSULTATION, :TYPE_CONSULTATION, :DATE_PRESCRIPTION, :NOTE, :DATE_TRAITMENT, :DESIGNATIONEXB, :RESULTATEXB, :DESIGNATIONEXR, :RESULTATEXR, :CHIRURIGIEN, :ANESTHESIST, :DATE_ADMISSION, :TYPE_ADMISSION, :MOTIF_ADMISSION, :MEDECIN_ADMISSION, :NOM_ACCOMPAGNANT, :PRENOM_ACCOMPAGNANT, :LIEN_PARENTE, :DATE_ENTREE, :DATE_SORTIE, :MOTIF_SORTIE, :RESULTAT_SORTIE, :DATE_DECES, :MOTIF_DECES )");
*/
query.prepare("INSERT INTO patients (id, nom, prenom, sexe, tel, nomp_a_prevenir, prenomp_a_prevenir, telp_a_prevenir, adresse, situation_familliale, assurance_medical, code_assurance, date_naissance, typepatient, DATE_CONSULTATION, TYPE_CONSULTATION, DATE_PRESCRIPTION, NOTE, DATE_TRAITMENT, DESIGNATIONEXB, RESULTATEXB, DESIGNATIONEXR, RESULTATEXR, CHIRURIGIEN, ANESTHESIST, DATE_ADMISSION, TYPE_ADMISSION, MOTIF_ADMISSION, MEDECIN_ADMISSION, NOM_ACCOMPAGNANT, PRENOM_ACCOMPAGNANT, LIEN_PARENTE, DATE_ENTREE, DATE_SORTIE, MOTIF_SORTIE, RESULTAT_SORTIE, DATE_DECES, MOTIF_DECES) "
                         "VALUES (:id, :nom, :prenom, :sexe, :tel, :nompap, :prenompap, :telpap, :adresse, :situationf, :assurancemed, :codeassurance, :date_naissance, :typep, :datecon, :typecon, :datepres, :note, :datetrait, :designationexb, :resultatexb, :designationexr, :resultatexr, :chirurigien, :anesthesist, :dateadm, :typeadm, :motifadm, :medadm, :nomacc, :prenomacc, :lienpar, :dateent, :datesor, :motifsor, :resultatsor, :datedec, :motifdec )");

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
         query.bindValue(":datecon", datecon);
         query.bindValue(":typecon", typecon);
         query.bindValue(":datepres", datepres);
         query.bindValue(":note", note);
         query.bindValue(":datetrait", datetrait);
         query.bindValue(":designationexb", designationexb);
         query.bindValue(":resultatexb", resultatexb);
         query.bindValue(":designationexr", designationexr);
         query.bindValue(":resultatexr", resultatexr);
         query.bindValue(":chirurigien", chirurigien);
         query.bindValue(":anesthesist", anesthesist);
         query.bindValue(":dateadm", dateadm);
         query.bindValue(":typeadm", typeadm);
         query.bindValue(":motifadm", motifadm);
         query.bindValue(":medadm", medadm);
         query.bindValue(":nomacc", nomacc);
         query.bindValue(":prenomacc", prenomacc);
         query.bindValue(":lienpar", lienpar);
         query.bindValue(":dateent", dateent);
         query.bindValue(":datesor", datesor);
         query.bindValue(":motifsor", motifsor);
         query.bindValue(":resultatsor", resultatsor);
         query.bindValue(":datedec", datedec);
         query.bindValue(":motifdec", motifdec);


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
   model->setHeaderData(14, Qt::Horizontal, QObject::tr("DATE_CONSULTATION"));
   model->setHeaderData(15, Qt::Horizontal, QObject::tr("TYPE_CONSULTATION"));
   model->setHeaderData(15, Qt::Horizontal, QObject::tr("DATE_PRESCRIPTION"));
   model->setHeaderData(16, Qt::Horizontal, QObject::tr("NOTE"));
   model->setHeaderData(17, Qt::Horizontal, QObject::tr("DATE_TRAITMENT"));
   model->setHeaderData(18, Qt::Horizontal, QObject::tr("DESIGNATIONEXB"));
   model->setHeaderData(19, Qt::Horizontal, QObject::tr("RESULTATEXB"));
   model->setHeaderData(20, Qt::Horizontal, QObject::tr("DESIGNATIONEXR"));
   model->setHeaderData(21, Qt::Horizontal, QObject::tr("RESULTATEXR"));
   model->setHeaderData(22, Qt::Horizontal, QObject::tr("CHIRURIGIEN"));
   model->setHeaderData(23, Qt::Horizontal, QObject::tr("ANESTHESIST"));
   model->setHeaderData(24, Qt::Horizontal, QObject::tr("DATE_ADMISSION"));
   model->setHeaderData(26, Qt::Horizontal, QObject::tr("TYPE_ADMISSION"));
   model->setHeaderData(27, Qt::Horizontal, QObject::tr("MOTIF_ADMISSION"));
   model->setHeaderData(28, Qt::Horizontal, QObject::tr("MEDECIN_ADMISSION"));
   model->setHeaderData(29, Qt::Horizontal, QObject::tr("NOM_ACCOMPAGNANT"));
   model->setHeaderData(30, Qt::Horizontal, QObject::tr("PRENOM_ACCOMPAGNANT"));
   model->setHeaderData(31, Qt::Horizontal, QObject::tr("LIEN_PARENTE"));
   model->setHeaderData(32, Qt::Horizontal, QObject::tr("DATE_ENTREE"));
   model->setHeaderData(33, Qt::Horizontal, QObject::tr("DATE_SORTIE"));
   model->setHeaderData(34, Qt::Horizontal, QObject::tr("MOTIF_SORTIE"));
   model->setHeaderData(35, Qt::Horizontal, QObject::tr("RESULTAT_SORTIE"));
   model->setHeaderData(36, Qt::Horizontal, QObject::tr("DATE_DECES"));
   model->setHeaderData(37, Qt::Horizontal, QObject::tr("MOTIF_DECES"));
  return  model;
}
bool patient::modifier_patient(int id){

        QSqlQuery query;
        QString id_string= QString::number(id);
        QString tel_string= QString::number(tel);
        QString telpap_string= QString::number(telpap);
        query.prepare("UPDATE patients set nom=:nom, prenom=:prenom, sexe=:sexe, tel=:tel, nomp_a_prevenir=:nompap, prenomp_a_prevenir=:prenompap, telp_a_prevenir=:telpap, adresse=:adresse, situation_familliale=:situationf, assurance_medical=:assurancemed, code_assurance=:codeassurance, date_naissance=:date_naissance, typepatient=:typep, DATE_CONSULTATION=:datecon, TYPE_CONSULTATION=:typecon, DATE_PRESCRIPTION=:datepres, NOTE=:note, DATE_TRAITMENT:datetrait, DESIGNATIONEXB=:designationexb, RESULTATEXB=:resultatexb, DESIGNATIONEXR=:designationexr, RESULTATEXR=:resultatexr, CHIRURIGIEN=:chirurigien, ANESTHESIST=:anesthesist, DATE_ADMISSION=:dateadm, TYPE_ADMISSION=:typeadm, MOTIF_ADMISSION=:motifadm, MEDECIN_ADMISSION=:medadm, NOM_ACCOMPAGNANT=:nomacc, PRENOM_ACCOMPAGNANT=:prenomacc, LIEN_PARENTE=:lienpar, DATE_ENTREE=:dateent, DATE_SORTIE=:datesor, MOTIF_SORTIE=:motifsor, RESULTAT_SORTIE=:resultatsor, DATE_DECES=:datedec, MOTIF_DECES=:motifdec where id=:id");


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
        query.bindValue(":datecon", datecon);
        query.bindValue(":typecon", typecon);
        query.bindValue(":datepres", datepres);
        query.bindValue(":note", note);
        query.bindValue(":datetrait", datetrait);
        query.bindValue(":designationexb", designationexb);
        query.bindValue(":resultatexb", resultatexb);
        query.bindValue(":designationexr", designationexr);
        query.bindValue(":resultatexr", resultatexr);
        query.bindValue(":chirurigien", chirurigien);
        query.bindValue(":anesthesist", anesthesist);
        query.bindValue(":dateadm", dateadm);
        query.bindValue(":typeadm", typeadm);
        query.bindValue(":motifadm", motifadm);
        query.bindValue(":medadm", medadm);
        query.bindValue(":nomacc", nomacc);
        query.bindValue(":prenomacc", prenomacc);
        query.bindValue(":lienpar", lienpar);
        query.bindValue(":dateent", dateent);
        query.bindValue(":datesor", datesor);
        query.bindValue(":motifsor", motifsor);
        query.bindValue(":resultatsor", resultatsor);
        query.bindValue(":datedec", datedec);
        query.bindValue(":motifdec", motifdec);
        return    query.exec();


}
QSqlQueryModel * patient::afficher_liste_patient(){

QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select id from patients");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));


    return model;

}

/*void patient::chercher (){

QSqlQuery query1;
QString id_string= QString::number(id);
query1.prepare("select id from patients where ID = :id");
query1.bindValue(":ID",id_string);
query1.exec();
QString tel_string= QString::number(tel);
QString telpap_string= QString::number(telpap);

while(query1.next())
{
nom = query1.value(0).toString();
prenom = query1.value(1).toString();
sexe = query1.value(2).toString();
tel_string= query1.value(3).toString();
nompap= query1.value(4).toString();
prenompap= query1.value(5).toString();
telpap_string= query1.value(6).toString();
adresse= query1.value(7).toString();
situationf= query1.value(8).toString();
assurancemed= query1.value(9).toString();
codeassurance= query1.value(10).toString();
date_naissance= query1.value(11).toString();
typep= query1.value(12).toString();
datecon= query1.value(13).toString();
typecon= query1.value(14).toString();
datepres= query1.value(15).toString();
note= query1.value(16).toString();
datetrait= query1.value(17).toString();
designationexb= query1.value(18).toString();
resultatexb= query1.value(19).toString();
designationexr= query1.value(20).toString();
resultatexr= query1.value(21).toString();
chirurigien= query1.value(22).toString();
anesthesist= query1.value(23).toString();
dateadm= query1.value(24).toString();
typeadm= query1.value(25).toString();
motifadm= query1.value(26).toString();
medadm= query1.value(27).toString();
nomacc= query1.value(28).toString();
prenomacc= query1.value(29).toString();
lienpar= query1.value(30).toString();
dateent= query1.value(31).toString();
datesor= query1.value(32).toString();
motifsor= query1.value(33).toString();
resultatsor= query1.value(34).toString();
datedec= query1.value(35).toString();
motifdec= query1.value(36).toString();

}
}*/
/*QSqlQueryModel * patient::recherche (QString champ ,QString valeur,int etat){
    QSqlQueryModel * model=new QSqlQueryModel();
    QSqlQuery query;
    if(etat==0){
    query.prepare("SELECT * FROM PATIENTS  where ("+champ+" LIKE :valeur) order by reference");}
    else
    {
         query.prepare("SELECT * FROM PATIENTS  where ("+champ+" LIKE :valeur) order by reference desc");
    }
    valeur="%"+valeur+"%";
    query.bindValue(":valeur",valeur);
    query.exec();
    model->setQuery(query);
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
    model->setHeaderData(14, Qt::Horizontal, QObject::tr("DATE_CONSULTATION"));
    model->setHeaderData(15, Qt::Horizontal, QObject::tr("TYPE_CONSULTATION"));
    model->setHeaderData(15, Qt::Horizontal, QObject::tr("DATE_PRESCRIPTION"));
    model->setHeaderData(16, Qt::Horizontal, QObject::tr("NOTE"));
    model->setHeaderData(17, Qt::Horizontal, QObject::tr("DATE_TRAITMENT"));
    model->setHeaderData(18, Qt::Horizontal, QObject::tr("DESIGNATIONEXB"));
    model->setHeaderData(19, Qt::Horizontal, QObject::tr("RESULTATEXB"));
    model->setHeaderData(20, Qt::Horizontal, QObject::tr("DESIGNATIONEXR"));
    model->setHeaderData(21, Qt::Horizontal, QObject::tr("RESULTATEXR"));
    model->setHeaderData(22, Qt::Horizontal, QObject::tr("CHIRURIGIEN"));
    model->setHeaderData(23, Qt::Horizontal, QObject::tr("ANESTHESIST"));
    model->setHeaderData(24, Qt::Horizontal, QObject::tr("DATE_ADMISSION"));
    model->setHeaderData(26, Qt::Horizontal, QObject::tr("TYPE_ADMISSION"));
    model->setHeaderData(27, Qt::Horizontal, QObject::tr("MOTIF_ADMISSION"));
    model->setHeaderData(28, Qt::Horizontal, QObject::tr("MEDECIN_ADMISSION"));
    model->setHeaderData(29, Qt::Horizontal, QObject::tr("NOM_ACCOMPAGNANT"));
    model->setHeaderData(30, Qt::Horizontal, QObject::tr("PRENOM_ACCOMPAGNANT"));
    model->setHeaderData(31, Qt::Horizontal, QObject::tr("LIEN_PARENTE"));
    model->setHeaderData(32, Qt::Horizontal, QObject::tr("DATE_ENTREE"));
    model->setHeaderData(33, Qt::Horizontal, QObject::tr("DATE_SORTIE"));
    model->setHeaderData(34, Qt::Horizontal, QObject::tr("MOTIF_SORTIE"));
    model->setHeaderData(35, Qt::Horizontal, QObject::tr("RESULTAT_SORTIE"));
    model->setHeaderData(36, Qt::Horizontal, QObject::tr("DATE_DECES"));
    model->setHeaderData(37, Qt::Horizontal, QObject::tr("MOTIF_DECES"));
    return  model;

}*/

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
    model->setHeaderData(14, Qt::Horizontal, QObject::tr("DATE_CONSULTATION"));
    model->setHeaderData(15, Qt::Horizontal, QObject::tr("TYPE_CONSULTATION"));
    model->setHeaderData(15, Qt::Horizontal, QObject::tr("DATE_PRESCRIPTION"));
    model->setHeaderData(16, Qt::Horizontal, QObject::tr("NOTE"));
    model->setHeaderData(17, Qt::Horizontal, QObject::tr("DATE_TRAITMENT"));
    model->setHeaderData(18, Qt::Horizontal, QObject::tr("DESIGNATIONEXB"));
    model->setHeaderData(19, Qt::Horizontal, QObject::tr("RESULTATEXB"));
    model->setHeaderData(20, Qt::Horizontal, QObject::tr("DESIGNATIONEXR"));
    model->setHeaderData(21, Qt::Horizontal, QObject::tr("RESULTATEXR"));
    model->setHeaderData(22, Qt::Horizontal, QObject::tr("CHIRURIGIEN"));
    model->setHeaderData(23, Qt::Horizontal, QObject::tr("ANESTHESIST"));
    model->setHeaderData(24, Qt::Horizontal, QObject::tr("DATE_ADMISSION"));
    model->setHeaderData(26, Qt::Horizontal, QObject::tr("TYPE_ADMISSION"));
    model->setHeaderData(27, Qt::Horizontal, QObject::tr("MOTIF_ADMISSION"));
    model->setHeaderData(28, Qt::Horizontal, QObject::tr("MEDECIN_ADMISSION"));
    model->setHeaderData(29, Qt::Horizontal, QObject::tr("NOM_ACCOMPAGNANT"));
    model->setHeaderData(30, Qt::Horizontal, QObject::tr("PRENOM_ACCOMPAGNANT"));
    model->setHeaderData(31, Qt::Horizontal, QObject::tr("LIEN_PARENTE"));
    model->setHeaderData(32, Qt::Horizontal, QObject::tr("DATE_ENTREE"));
    model->setHeaderData(33, Qt::Horizontal, QObject::tr("DATE_SORTIE"));
    model->setHeaderData(34, Qt::Horizontal, QObject::tr("MOTIF_SORTIE"));
    model->setHeaderData(35, Qt::Horizontal, QObject::tr("RESULTAT_SORTIE"));
    model->setHeaderData(36, Qt::Horizontal, QObject::tr("DATE_DECES"));
    model->setHeaderData(37, Qt::Horizontal, QObject::tr("MOTIF_DECES"));
        return model;
    }

QSqlQueryModel* patient::afficher_desc() //trie desc
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
    model->setHeaderData(14, Qt::Horizontal, QObject::tr("DATE_CONSULTATION"));
    model->setHeaderData(15, Qt::Horizontal, QObject::tr("TYPE_CONSULTATION"));
    model->setHeaderData(15, Qt::Horizontal, QObject::tr("DATE_PRESCRIPTION"));
    model->setHeaderData(16, Qt::Horizontal, QObject::tr("NOTE"));
    model->setHeaderData(17, Qt::Horizontal, QObject::tr("DATE_TRAITMENT"));
    model->setHeaderData(18, Qt::Horizontal, QObject::tr("DESIGNATIONEXB"));
    model->setHeaderData(19, Qt::Horizontal, QObject::tr("RESULTATEXB"));
    model->setHeaderData(20, Qt::Horizontal, QObject::tr("DESIGNATIONEXR"));
    model->setHeaderData(21, Qt::Horizontal, QObject::tr("RESULTATEXR"));
    model->setHeaderData(22, Qt::Horizontal, QObject::tr("CHIRURIGIEN"));
    model->setHeaderData(23, Qt::Horizontal, QObject::tr("ANESTHESIST"));
    model->setHeaderData(24, Qt::Horizontal, QObject::tr("DATE_ADMISSION"));
    model->setHeaderData(26, Qt::Horizontal, QObject::tr("TYPE_ADMISSION"));
    model->setHeaderData(27, Qt::Horizontal, QObject::tr("MOTIF_ADMISSION"));
    model->setHeaderData(28, Qt::Horizontal, QObject::tr("MEDECIN_ADMISSION"));
    model->setHeaderData(29, Qt::Horizontal, QObject::tr("NOM_ACCOMPAGNANT"));
    model->setHeaderData(30, Qt::Horizontal, QObject::tr("PRENOM_ACCOMPAGNANT"));
    model->setHeaderData(31, Qt::Horizontal, QObject::tr("LIEN_PARENTE"));
    model->setHeaderData(32, Qt::Horizontal, QObject::tr("DATE_ENTREE"));
    model->setHeaderData(33, Qt::Horizontal, QObject::tr("DATE_SORTIE"));
    model->setHeaderData(34, Qt::Horizontal, QObject::tr("MOTIF_SORTIE"));
    model->setHeaderData(35, Qt::Horizontal, QObject::tr("RESULTAT_SORTIE"));
    model->setHeaderData(36, Qt::Horizontal, QObject::tr("DATE_DECES"));
    model->setHeaderData(37, Qt::Horizontal, QObject::tr("MOTIF_DECES"));
        return model;
    }
