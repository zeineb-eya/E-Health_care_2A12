#ifndef RDV_H
#define RDV_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "mainwindow.h"
class rdv
{
public:
    rdv();
    rdv(int,QString,QString,QString,int);
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

   // QString generate_date(int j,int m, int a);
    //QString generate_time(int h,int s,int m);

    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);

   /* bool modifier_rdv();
    QSqlQueryModel * afficher_liste_rdv();
    void chercher();
    QSqlQueryModel * recherche(QString,QString,int);*/
private:
    int coderdv,id_p;
    QString medecin, service;
    QString date_rdv;
    QString time_rdv;
};

#endif // RDV_H
