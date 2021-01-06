#include "menu.h"


menu::menu()
{

}
menu::menu(QString ptitdej,QString dej,QString dinner)
{
    this->dej=dej;
    this->dinner=dinner;
    this->ptitdej=ptitdej;

}




//*********************************************************** Gerer Menu ***************************************************
QSqlQueryModel * menu::afficherMenu()
{
    QSqlQueryModel * model= new QSqlQueryModel();

            QString select="SELECT * FROM menu;";
            model->setQuery(select);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Menu"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Petit Déj "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Déj"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Dinner"));

    return model;
}


bool menu::modifierMenu(int id)
{   QString id_recherche=QString ::number(id);
    QSqlQuery query;
        bool Testquery=false;
        QSqlQuery qry;
        qry.prepare("SELECT id_menu FROM menu where id_menu=?;");
        qry.addBindValue(id_recherche);
        bool exist=false;
        if(qry.exec())
            if(qry.next())
                {
                QVariant ch=qry.value(0);
                QString verif = QVariant(ch).toString();
                if(verif==id_recherche)
                    exist=true;
                 }
        if(exist)
           {
                if(dej!="")
                {
                    query.prepare("UPDATE menu SET dej =? WHERE id_menu='"+id_recherche+"';");
                    query.addBindValue(dej);query.exec();Testquery=true;

                }
                if(ptitdej!="")
                {
                    query.prepare("UPDATE menu SET petit_dej =? WHERE id_menu='"+id_recherche+"';");
                    query.addBindValue(ptitdej);query.exec();Testquery=true;
                }
                if(dinner!="")
                {
                    query.prepare("UPDATE menu SET dinner =? WHERE id_menu='"+id_recherche+"';");
                    query.addBindValue(dinner);query.exec();Testquery=true;
                }

            }


     return Testquery;

}
bool menu::supprimerMenu(int id)
{
    QSqlQuery query;
        query.prepare("Delete FROM menu where id_menu =:id");
        query.bindValue(":id",id);
        return query.exec();
}

bool menu::ajouterMenu()
{
    QSqlQuery query;
    query.prepare("INSERT INTO menu VALUES(id_menu.nextval,:petit_dej ,:dej,:dinner) ");
    query.bindValue(":petit_dej",ptitdej);
    query.bindValue(":dej",dej);
    query.bindValue(":dinner",dinner);

    return query.exec();
}
