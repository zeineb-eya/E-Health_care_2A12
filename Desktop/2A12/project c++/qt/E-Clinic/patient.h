#ifndef PATIENT_H
#define PATIENT_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class patient
{

public:
    patient();
    patient(int,int,int,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString);
    int getid();
    int gettel();
    int gettelpap();
    QString getnom();
    QString getprenom();
    QString getsexe();
    QString getadresse();
    QString getsituationf();
    QString getassurancemed();
    QString getcodeassurance();
    QString getnompap();
    QString getprenompap();
    QString gettypep();
    QString get_date_naissance();
    QString getdatecon();
    QString gettypecon();
    QString getdatepres();
    QString getnote();
    QString getdatetrait();
    QString getdesignationexr();
    QString getresultatexr();
    QString getdesignationexb();
    QString getresultatexb();
    QString getchirurigien();
    QString getanesthesist();
    QString getdateadm();
    QString gettypeadm();
    QString getmotifadm();
    QString getmedadm();
    QString getnomacc();
    QString getprenomacc();
    QString getlienpar();
    QString getdateent();
    QString getdatesor();
    QString getmotifsor();
    QString getresultatsor();
    QString getdatedec();
    QString getmotifdec();


    void setid(int);
    void settel(int);
    void settelpap(int);
    void setnom(QString);
    void setprenom(QString);
    void setsexe(QString);
    void setadresse(QString);
    void setsituationf(QString);
    void setassurancemed(QString);
    void setcodeassurance(QString);
    void setnompap(QString);
    void setprenompap(QString);
    void settypep(QString);
    void setdate_naissance(QString);
    void setdatecon(QString);
    void settypecon(QString);
    void setdatepres(QString);
    void setnote(QString);
    void setdatetrait(QString);
    void setdesignationexr(QString);
    void setresultatexr(QString);
    void setdesignationexb(QString);
    void setresultatexb(QString);
    void setchirurigien(QString);
    void setanesthesist(QString);
    void setdateadm(QString);
    void settypeadm(QString);
    void setmotifadm(QString);
    void setmedadm(QString);
    void setnomacc(QString);
    void setprenomacc(QString);
    void setlienpar(QString);
    void setdateent(QString);
    void setdatesor(QString);
    void setmotifsor(QString);
    void setresultatsor(QString);
    void setdatedec(QString);
    void setmotifdec(QString);


    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);

   bool modifier_patient(int);
    QSqlQueryModel * afficher_liste_patient();
    /*void chercher();
    QSqlQueryModel * recherche(QString,QString,int);*/
    QSqlQueryModel* afficher_asc();
    QSqlQueryModel* afficher_desc();
    bool search(int);
private:
    int id,tel ,telpap;
    QString nom, prenom;
    QString sexe, adresse,situationf,assurancemed,codeassurance,nompap,prenompap,typep;
    QString date_naissance;
    QString lienpar,medadm,dateent,datetrait,designation,datesor,motifsor,resultatsor,datedec,motifdec,datecon,typecon,datepres,note,designationexr,resultatexr,designationexb,resultatexb,chirurigien,anesthesist,dateadm,typeadm,motifadm,nomacc,prenomacc;
};

#endif // PATIENT_H
