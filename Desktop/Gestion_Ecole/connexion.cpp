#include "connexion.h"

Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{ db=QSqlDatabase::addDatabase("QODBC");

db.setDatabaseName("Gestion_Ecole");
db.setUserName("Eya");//inserer nom de l'utilisateur
db.setPassword("nevin");//inserer mot de passe de cet utilisateur

if (db.open())
return true;
    return  false;
}

void Connexion::fermerConnexion()
{db.close();}
