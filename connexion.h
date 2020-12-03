#ifndef CONNEXION_H
#define CONNEXION_H
#include <QSqlDatabase>

class connexion
{
private:
    QSqlDatabase db;
     int selectedrow;
public:
    connexion();
    bool createConnexion();
    void fermerConnexion();

};

#endif // CONNEXION_H
