#ifndef PATIENT_H
#define PATIENT_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
//pat
class patient
{

public:
    patient();
    patient(int,QString,QString,QString,int,QString,QString,int,QString,QString,QString,QString,QString,QString);
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


//
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
   QSqlQueryModel* afficher_idpatient(int id);//search by id
   bool modifier_patient();
   // QSqlQueryModel * afficher_liste_patient();

    QSqlQueryModel* afficher_asc();
    QSqlQueryModel* afficher_desc();
    QSqlQueryModel* afficher_asctype();
    QSqlQueryModel* afficher_desctype();
    QSqlQueryModel* afficher_ascassu();
    QSqlQueryModel* afficher_descassu();
    bool search(int id);
    bool searchnom(QString nom);
    bool searchprenom(QString prenom);

    QSqlQueryModel* afficher_nompatient(QString nom);
    QSqlQueryModel* afficher_prenompatient(QString prenom);

private:
    int id,tel ,telpap;
    QString nom, prenom;
    QString sexe, adresse,situationf,assurancemed,codeassurance,nompap,prenompap,typep;
    QString date_naissance;
};

#endif // PATIENT_H
