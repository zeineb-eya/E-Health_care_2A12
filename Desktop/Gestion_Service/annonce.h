#ifndef ANNONCE_H
#define ANNONCE_H

#include "connexion.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Annonce
{
public:
    Annonce();
    Annonce(int, QString, QString,QString);

    int get_codean();
    QString get_noman();
    QString get_descriptionan();
    QString get_datean();

    void set_codean(int);
    void set_noman(int);
    void set_descriptionan(int);
    void set_datean(QString);

    bool ajouter_an();
    bool modifier_an(int codean);
    QSqlQueryModel* afficher_an();
     QSqlQueryModel* afficher_annonce(int codean);  //affich recherch selon num an
     QSqlQueryModel* afficher_annoncenom(QString noman);  //affich recherch selon nom an
     QSqlQueryModel* afficher_annoncedate(QString datean);  //affich recherch selon date an
    bool supprimer_an(int);
    bool search(int codean);

    QSqlQueryModel* trier_an(); //al codean
    QSqlQueryModel* trier_desc_an();

    QSqlQueryModel *tri_NomCroissant();
    QSqlQueryModel *tri_NomDeCroissant();

    QSqlQueryModel* tri_DateAscendant();
    QSqlQueryModel *tri_DateDescendant();

private:
    int codean;
    QString noman,descriptionan,datean;
};

#endif // ANNONCE_H



//tri 2eme critere: date
  /*   QSqlQueryModel* afficher1_asc();
     QSqlQueryModel* afficher1_desc();*/



