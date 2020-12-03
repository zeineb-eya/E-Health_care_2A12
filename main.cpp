#include "mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QApplication>
#include "connexion.h"
#include "chambres.h"
#include <QMediaPlaylist>
#include <QMediaPlayer>


int main(int argc, char *argv[])
{/* QMediaPlaylist *playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("C:/Users/fatima yaacoubi/Documents/connexion/Click.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);
    QMediaPlayer *music = new QMediaPlayer();
    music->setPlaylist(playlist);
    music->play();*/
    QApplication a(argc, argv);

    connexion c;


    bool test=c.createConnexion();
     MainWindow w;
    if (test)

    QMessageBox::information(nullptr,QObject::tr("database is open"),QObject::tr("connexion successfull\n"
                                                                                 "CLick OK to exit"),QMessageBox::Ok);
else

    QMessageBox::information(nullptr,QObject::tr("database is not open"),QObject::tr("connexion failed\n"
                                                                                "CLick Cancel to exit"),QMessageBox::Cancel);
 w.show();
    return a.exec();}


