#ifndef ELEMENT_H
#define ELEMENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class element
{
public:
    element();
    element(QString,QString);
    bool ajouterElement();
    QSqlQueryModel * afficherElement();
    bool supprimerElement(int);
    bool modifierElement(int id);
    QSqlQueryModel *  trier(const QString &critere, const QString &mode );


private:
    QString nomElemnt,quantite;

};

#endif // ELEMENT_H
