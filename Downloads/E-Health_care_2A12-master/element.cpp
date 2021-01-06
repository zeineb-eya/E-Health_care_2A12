#include "element.h"

element::element()
{

}
element::element(QString nomElement,QString quantite)
{
    this->nomElemnt=nomElement;
    this->quantite=quantite;
}

bool element::ajouterElement()
{
    QSqlQuery query;
      query.prepare("INSERT INTO element VALUES(id_element.nextval,:nom_element ,:qt_element) ");
      query.bindValue(":nom_element",nomElemnt);
      query.bindValue(":qt_element",quantite);

      return query.exec();
}




QSqlQueryModel * element::afficherElement()
{
    QSqlQueryModel * model= new QSqlQueryModel();

            QString select="SELECT * FROM element;";
            model->setQuery(select);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Element"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantité Element"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nomElement"));

    return model;
}
QSqlQueryModel *  element::trier(const QString &critere, const QString &mode )
{
    QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from ELEMENT order by "+critere+" "+mode+"");

    return model;
}

bool element::supprimerElement(int id)
{
    QSqlQuery query;
        query.prepare("Delete FROM element where id_element =:id");
        query.bindValue(":id",id);
        return query.exec();

}
bool element::modifierElement(int id)
{
    QString id_recherche=QString ::number(id);
       QSqlQuery query;
           bool Testquery=false;
           QSqlQuery qry;
           qry.prepare("SELECT id_element FROM element where id_element=?;");
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
                   if(nomElemnt!="")
                   {
                       query.prepare("UPDATE element SET nom_element =? WHERE id_element='"+id_recherche+"';");
                       query.addBindValue(nomElemnt);query.exec();Testquery=true;

                   }
                   if(quantite!="")
                   {
                       query.prepare("UPDATE element SET qt_element =? WHERE id_element='"+id_recherche+"';");
                       query.addBindValue(quantite);query.exec();Testquery=true;
                   }

               }


        return Testquery;

}
