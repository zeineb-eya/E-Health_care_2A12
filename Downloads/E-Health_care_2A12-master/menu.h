#ifndef MENU_H
#define MENU_H
#include <QString>
#include <QSql>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlQueryModel>


class menu
{
public:
    menu();
    menu(QString ptitdej,QString dej,QString dinner);

    bool ajouterMenu();
    QSqlQueryModel * afficherMenu();
    bool supprimerMenu(int);
    bool modifierMenu(int);

private:
    QString ptitdej,dej,dinner;
};

#endif // MENU_H
