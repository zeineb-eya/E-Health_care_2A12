#include "connexion.h"


Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{

    bool test=false;
        db=QSqlDatabase::addDatabase("QODBC");
    //db.setDatabaseName("GestionPatient");
        db.setDatabaseName("EClinic");
    db.setUserName("system");//inserer nom de l'utilisateur
    db.setPassword("azerty123");//inserer mot de passe de cet utilisateur


    if (db.open()) test = true;


    return test;
}

void Connexion::fermerConnexion()
{db.close();}
