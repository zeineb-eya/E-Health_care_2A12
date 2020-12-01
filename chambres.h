#ifndef CHAMBRES_H
#define CHAMBRES_H
#include <QString>
#include <QSqlQueryModel>
#include <QAbstractItemModel>

class Chambres
{private:
    QString NomDepartement;
    QString TypeC;
    QString EtatC;
    QString ElementsManquants;
    int NumEtage;
    int NumChambre;
    int NbLitsC;

public:
   Chambres();
    Chambres(QString,QString,QString,QString,int,int,int);
    bool AjouterChambre();
    bool RechercherChambre(int);
    bool ModifierChambre();
   QSqlQueryModel* AfficherChambre();
   QSqlQueryModel* AfficherCASC();
   QSqlQueryModel* AfficherCDES();
   QSqlQueryModel* AfficherCASC1();
   QSqlQueryModel* AfficherCDES1();
   QSqlQueryModel* AfficherCASC2();
   QSqlQueryModel* AfficherCDES2();
   QSqlQueryModel* Afficher_recherche3(int);
   QSqlQueryModel* Afficher_recherche13(QString);
   QSqlQueryModel* Afficher_recherche23(QString);
    bool SupprimerChambre(int);
    bool TrierChambre();
    bool Envoyermail();
    void setNomDepartement(QString);
    void setTypeC(QString);
    void setetatC(QString);
    void setElementsManquants(QString);
    void setNumEtage(int);
    void setNumChambre(int);
    void setNbLitsC(int);
    QString getNomDepartement();
    QString getTypeC();
    QString getetatC();
    QString getElementsManquants();
    int getNumEtage();
    int getNumChambre();
    int getNbLitsC();
   // bool QAbstractItemModel::removeRow(int row, Chambres());


};

#endif // CHAMBRES_H
