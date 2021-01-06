#ifndef CATEGORIES_H
#define CATEGORIES_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
//pat
class categories
{

public:
    categories();
    categories(int,QString,QString,QString,QString,QString);
    int getid();
    QString getencaissements();
    QString getchiffres();
    QString getgains();
    QString getdepenses();
    QString getsalaires();


    void setid(int);
    void setencaissements(QString);
    void setchiffres(QString);
    void setgains(QString);
    void setdepenses(QString);
    void setsalaires(QString);


    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
QSqlQueryModel* afficher_idcategories(int id);//search by id
   bool modifier_categories();
    QSqlQueryModel * afficher_liste_categories();
    QSqlQueryModel *rechercher(QString);
    QSqlQueryModel *  trier(const QString &critere, const QString &mode );

   // QSqlQueryModel* afficher_asc();
    //QSqlQueryModel* afficher_desc();
    bool search(int id);
private:
    int id;
    QString encaissements, chiffres;
    QString gains, depenses,salaires;
};

#endif // CATEGORIES_H
