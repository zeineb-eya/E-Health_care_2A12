#ifndef CONNEXION_H
#define CONNEXION_H


#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include<QDebug>
#include <QFile>

/*class Connexion
{
    public:
        Connexion();
    public:

        static bool createconnect(void);
};

class  Connexion
{
private:
    QSqlDatabase db;
public:
     Connexion();
    bool createconnect();
    void fermerConnect();
    bool Connexion();
};*/


//connect
class Connexion
{
private:
    QSqlDatabase db;
public:
    Connexion();
    bool ouvrirConnexion();
    void fermerConnexion();

};
#endif // CONNEXION_H
