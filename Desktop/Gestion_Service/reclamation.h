#ifndef RECLAMATION_H
#define RECLAMATION_H

#include "connexion.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Reclamation
{
public:
    Reclamation();
    Reclamation(int, QString,QString,QString);

    int get_numrec();
    QString get_nomrec();
    QString get_descriptionrec();
    QString get_daterec();

    void set_numrec(int);
    void set_nomrec(int);
    void set_descriptionrec(int);
    void set_daterec(QString);


    bool ajouter_rec();
    bool modifier_rec(int numrec);
    QSqlQueryModel* afficher_rec();
    QSqlQueryModel* afficher_reclamation(int numrec);  //affich recherch selon num rec
    QSqlQueryModel* afficher_reclamationnom(QString nomrec);  //affich recherch selon nom rec
    QSqlQueryModel* afficher_reclamationdate(QString daterec);  //affich recherch selon date rec
    bool supprimer_rec(int);
    bool search(int numrec);

    QSqlQueryModel* trier_rec();
    QSqlQueryModel* trier_desc_rec();

    QSqlQueryModel *tri_NomCroissant_rec();
    QSqlQueryModel *tri_NomDeCroissant_rec();

    QSqlQueryModel* tri_DateAscendant_rec();
    QSqlQueryModel *tri_DateDescendant_rec();

private:
    int numrec;
    QString nomrec,descriptionrec,daterec;

};



#endif // RECLAMATION_H




/*class Reclamation
{
public:
    Reclamation();
    Reclamation(int, QString,QString,QString);

    int get_numrec();
    QString get_descriptionrec();
    QString get_nomrec();
    QString get_daterec();

    bool ajouter_rec();
    bool modifier_rec(int numrec);
    QSqlQueryModel* afficher_rec();
    bool supprimer_rec(int);
    QSqlQueryModel* recherche_rec(int numrec);     //attribute
    QSqlQueryModel* trier_rec();
    QSqlQueryModel* trier_desc_rec();

private:
    int numrec;
    QString nomrec,descriptionrec,daterec;

};
*/  //original
