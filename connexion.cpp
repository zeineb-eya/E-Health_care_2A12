#include "connexion.h"
#include "QSqlDatabase"
connexion::connexion()
{

}
bool connexion::createConnexion()
{
    bool test=false;
    QSqlDatabase db = QSqlDatabase ::addDatabase("QODBC");

    db.setDatabaseName("EClinic");
    db.setUserName("Fatima");
    db.setPassword("Fatima123");
    if(db.open())
        test=true;
    return test;
}
void connexion::fermerConnexion()
{db.close();}
