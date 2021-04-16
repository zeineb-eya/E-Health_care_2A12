#ifndef SERVICE_H
#define SERVICE_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
class service
{
    QString heure,nom_med,nom_pat,type;
    int ids,prix;
    QDate date;
public:
    //constructeurs
    service() {};
    service(int,QString, QDate, QString, QString, QString,int );
    // getters
    QString GetNom_med(){return nom_med;}
    QString GetNom_pat(){return nom_pat;}
    int GetIds (){return ids;}
    QString GetType (){return type;}
    QDate Getdate(){return date;}
    QString Getheure(){return heure;}
    int Getprix (){return prix;}
    // setters
    void SetNom_med(QString n){nom_med =n;}
    void SetNom_pat(QString p){nom_pat=p;}
    void SetId (int d){ ids=d;}
    void SetType (QString t){type =t;}
    void Setdate(QDate d){date =d;}
    void Setheure(QString h){ heure =h;}
    void Setprix (int p){ prix=p;}
    //methodes
    bool ajouterS ();
    QSqlQueryModel * afficherS ();
    bool supprimerS (int);
    QSqlQueryModel * rechercherS(const QString &);
    QSqlQueryModel * trierS(const QString &critere, const QString &mode );
     bool modifierS(int ,QString,QDate , QString ,QString , QString ,int);

};

#endif // SERVICE_H
