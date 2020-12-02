#ifndef RDV_H
#define RDV_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
//rdvvv
class rdv
{
public:
    rdv();
    rdv(int,QString,QString,QString,QString,int);
    int getid_p();
    int getcoderdv();
    QString getmedecin();
    QString getdate_rdv();
    QString getservice();
    QString get_time_rdv();

    void setid_p(int);
    void setcoderdv(int);
    void setmedecin(QString);
    void setdate_rdv(QString);
    void settime_rdv(QString);
    void setservice(QString);


    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
QSqlQueryModel* afficher_coderdv(int coderdv);
    bool modifier_rdv();

bool modifier_r();

    QSqlQueryModel* afficher_asc();
    QSqlQueryModel* afficher_desc();
    bool search(int coderdv);
    bool searchdoc(QString medecin);
    bool searchID(int id_p);
    QSqlQueryModel* afficher_idCroissant();
    QSqlQueryModel* afficher_idDecroissant();
    QSqlQueryModel* afficher_DocCroissant();
    QSqlQueryModel* afficher_DocDecroissant();
    QSqlQueryModel* afficher_doc(QString medecin);
    QSqlQueryModel* afficher_ID(int id_p);
   // bool exist(QString medecin,int id_p) ;
private:
    int coderdv,id_p;
    QString medecin, service;
    QString date_rdv;
    QString time_rdv;
};

#endif // RDV_H
