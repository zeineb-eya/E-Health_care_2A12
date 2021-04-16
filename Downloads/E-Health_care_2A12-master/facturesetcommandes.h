#ifndef FACTURESETCOMMANDES_H
#define FACTURESETCOMMANDES_H

#include <QString>
#include <QSqlQuery>
//#include <QDebug>

#include <QSqlQueryModel>
//rdvvv
class fctcmn
{
public:
    fctcmn();
    fctcmn(int,QString,int,int,int,QString);
    int getidfc();
    int getqte();
    int getpu();
    int getpt();
    QString getart();
    QString gettp();

    void setidfc(int);
    void setqte(int);
    void setpu(int);
    void setpt(int);
    void setart(QString);
    void settp(QString);


    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);

  bool modifier_fctcmn();
    QSqlQueryModel * afficher_liste_fctcmn();
    QSqlQueryModel* afficher_idfctcmn(int idfc);//search by id
    QSqlQueryModel *rechercher(QString);

   // QSqlQueryModel* afficher_asc();
    //QSqlQueryModel* afficher_desc();
    bool search(int idfc);
private:
    int idfc,qte,pu,pt;
    QString art, tp;
};

#endif // FACTURESETCOMMANDES_H

