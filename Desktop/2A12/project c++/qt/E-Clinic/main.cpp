#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "connexion.h"
#include <QMediaPlaylist>
#include <QMediaPlayer>
//main
int main(int argc, char *argv[])
{   //loop play
   /* QMediaPlaylist *playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("C:/users/HP/Desktop/2A12/project c++/qt/E-Clinic/Mortified.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    QMediaPlayer *music = new QMediaPlayer();
    music->setPlaylist(playlist);
    music->play();*/

    QApplication a(argc, argv);
    Connexion c;
    bool test=c.ouvrirConnexion();
    MainWindow w;
    //Email m;
               if(test)
 {
         w.show();


     }
           else
                QMessageBox::information(nullptr, QObject::tr("database is not open"),
                            QObject::tr("Echec de la connexion.\n""Click Cancel to exit."), QMessageBox::Cancel);



     return a.exec();
 }


