
#include "connexion.h"
#include<QFile>
#include<QDebug>

/*Connexion::Connexion()
{

}
bool Connexion:: createconnect()
{
    bool b_test;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    if(db.isValid())
    {
        db.setHostName("localhost");
        db.setUserName("root");
        db.setPassword("password");

        if(QFile::exists("base_tmp.sqli"))
            QFile::remove("base_tmp.sqli");

        db.setDatabaseName("base_tmp.sqli");
        db.open();

        QSqlQuery query(db);
        if(!db.isOpen())
        {
            qDebug() << db.lastError().text();
            qDebug() << "Erreur à louverture de la base !\n";
            return false;
        }

        b_test=query.exec("create table Annonces "
                          "(Id integer auto_increment primary key, "
                          "IdRessource integer, "
                          "Login varchar(50) unique, "
                          "MdP varchar(50))");
        if(!b_test)
        {
            qDebug() << query.lastError().text();
            qDebug() << "Table Annocnes non crée !\n";
            return false;
        }
        b_test=query.exec("create table Reclamations "
                          "(Id integer auto_increment primary key, "
                          "IdPatient integer, "
                          "IdRessource integer)");
        if(!b_test)
        {
            qDebug() << query.lastError().text();
            qDebug() << "Table Reclamations non crée !\n";
            return false;
        }


        b_test=query.exec("INSERT INTO TCompte (Id, IdRessource, Login, MdP) VALUES "
                          "(1, 1, 'Admin', 'Password')");
        if(!b_test)
        {
            qDebug() << query.lastError().text();
            qDebug() << "Insertion de données dans TCompte impossible !\n";
            return false;
        }

        b_test=query.exec("INSERT INTO Annonces "
                          "SELECT '1' AS 'Id', '1' AS 'IdPatient', '11' AS 'IdRessource'"
                                  "UNION SELECT 2, 1, 3 "
                                  "UNION SELECT 3, 1, 5 "
                                  "UNION SELECT 4, 2, 6 "
                                  "UNION SELECT 5, 3, 2 "
                                  "UNION SELECT 6, 3, 4 "
                                  "UNION SELECT 7, 4, 12 "
                                  "UNION SELECT 8, 4, 8 "
                                  "UNION SELECT 9, 5, 9 "
                                  "UNION SELECT 10, 6, 8");
        if(!b_test)
        {
            qDebug() << query.lastError().text();
            qDebug() << "Insertion de données dans TConsult impossible !\n";
            return false;
        }


        b_test=query.exec("INSERT INTO Reclamations"
                          "SELECT '1' AS 'Id', 'Ricardo' AS 'Nom', 'Jacques' AS 'Prenom', '3 rue des justices' AS 'Adresse', 'Tours' AS 'Ville', '37200' AS 'CP', 'Dépressif' AS 'Commentaire', '247558963' AS 'Tel', '2013-06-01' AS 'DateConsultation', '90' AS 'DureeConsultation', '2' AS 'Priorite'"
                                  "UNION SELECT 2, 'Pirouette', 'Stéphanie', '15 rue des dames', 'Chanceaux', 37390, 'Rien à dire.', '247542942', '2013-06-01', 50, 2 "
                                  "UNION SELECT 3, 'Puisser', 'Albert', '15 rue des chevaux', 'Verigné', 37250, 'Asthmatique.', '247642892', '2013-06-01', 45, 3 "
                                  "UNION SELECT 4, 'Tujais', 'Téo', '15 rue de l''arbre', 'Monts', 37450, '', '247845889', '2013-06-01', 20, 4 "
                                  "UNION SELECT 5, 'Kistran', 'Flavien', '89 impasse des rangs', 'Mettray', 37620, 'En forme.', '247895623', '2013-06-01', 80, 1 "
                                  "UNION SELECT 6, 'Qing', 'Xue', '14 rue Jean Jaures', 'Tours', 37200, 'Aucun.', '247555588', '2013-06-01', 60, 3 ");
        if(!b_test)
        {
            qDebug() << query.lastError().text();
            qDebug() << "Insertion de données dans TPatient impossible !\n";
            return false;
        }


        db.close();
        db.removeDatabase("QSQLITE");
        return true;

    }
    else
    {
        qDebug() << db.lastError().text();
        qDebug() << "Erreur à création de la base !\n";
        return false;
    }
}*/




//connexion
Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{

    bool test=false;
        db=QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Gestion_Service");
    db.setUserName("Eya");//inserer nom de l'utilisateur
    db.setPassword("nevin");//inserer mot de passe de cet utilisateur


    if (db.open()) test = true;


    return test;
}

void Connexion::fermerConnexion()
{db.close();}
  //original

//test BD

