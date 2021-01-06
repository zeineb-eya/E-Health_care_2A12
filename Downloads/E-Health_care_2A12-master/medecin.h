#ifndef MEDECIN_H
#define MEDECIN_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class Medecin
{ QString nom,prenom,specialite,tel;
    int id;
public:
    //constructeurs
    Medecin(){};
    Medecin (int, QString, QString, QString, QString);
    // getters
    QString GetNom(){return nom;}
    QString GetPrenom(){return prenom;}
    int GetId (){return id;}
    QString GetSpe(){return specialite;}
    QString GetTel(){return tel;}
    //Setters
    void SetNom (QString n){nom=n;}
    void SetPrenom (QString p){prenom=p;}
    void SetID (int idd){id=idd;}
    void SetSpe (QString s){specialite=s;}
    void SetTel (QString t){tel=t;}
    //CRUDS
    bool ajouter ();
    QSqlQueryModel * afficher ();
    bool supprimer (int);
    QSqlQueryModel * rechercher (const QString &);
    QSqlQueryModel *  trier(const QString &critere, const QString &mode );
   bool modifier(int ,QString , QString ,QString , QString );
 };

#endif // MEDECIN_H
