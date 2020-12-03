#ifndef APPAREILS_H
#define APPAREILS_H
#include <QString>
#include<QSqlQueryModel>
class Appareils
{
private:
 int NumSerie;
 QString NomApp;
 QString EtatApp;
 QString TypeApp;
public:
    Appareils();
    Appareils(int,QString,QString,QString);
    bool AjouterAppareil();
    bool RechercherAppareil(int);
    bool SupprimerAppareil(int);
     QSqlQueryModel* AfficherAppareil();
     QSqlQueryModel* TriAppASC();
     QSqlQueryModel* TriAppDES();
      QSqlQueryModel* TriAppASC1();
      QSqlQueryModel* TriAppDES1();
      QSqlQueryModel* TriAppASC2();
      QSqlQueryModel* TriAppDES2();
      QSqlQueryModel* Afficher_recherche(int);
      QSqlQueryModel* Afficher_recherche1(QString);
      QSqlQueryModel* Afficher_recherche2(QString);
     bool ModifierAppareil();
     QString getNomApp();
     int getNumSerie();
     QString getEtatApp();
     QString getTypeApp();
     void setNomApp(QString);
     void setNumSerie(int);
     void setEtatApp(QString);
     void setTypeApp(QString);
};

#endif // APPAREILS_H
