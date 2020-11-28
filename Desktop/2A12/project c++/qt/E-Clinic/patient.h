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
    patient(int,int,int,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString);
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



    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
QSqlQueryModel* afficher_idpatient(int id);//search by id
   bool modifier_patient();
    QSqlQueryModel * afficher_liste_patient();

    QSqlQueryModel* afficher_asc();
    QSqlQueryModel* afficher_desc();
    QSqlQueryModel* afficher_asctype();
    QSqlQueryModel* afficher_desctype();
    bool search(int id);
private:
    int id,tel ,telpap;
    QString nom, prenom;
    QString sexe, adresse,situationf,assurancemed,codeassurance,nompap,prenompap,typep;
    QString date_naissance;
};

#endif // PATIENT_H
