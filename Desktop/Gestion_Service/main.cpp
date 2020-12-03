#include "mainwindow.h"
#include "mainwindow.h"
#include "connexion.h"
#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QtWidgets>
#include <QWidget>
#include <QtDebug>
#include <QDialog>
#include <QMediaPlaylist>
#include <QMediaPlayer>

int main(int argc, char *argv[])
{
    //loop play
   /* QMediaPlaylist *playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("C:/Users/HP/Desktop/2A12/project c++/qt/deliverycompany/Mortified.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    QMediaPlayer *music = new QMediaPlayer();
    music->setPlaylist(playlist);
    music->play();*/

    QApplication a(argc, argv);
    MainWindow w;
    Connexion c;
    bool test=c.ouvrirConnexion();
    if(test)
    {w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}
/*
 * #include <QMediaPlaylist>
#include <QMediaPlayer>

int main(int argc, char *argv[])
{
    //loop play
    QMediaPlaylist *playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/Mortified.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    QMediaPlayer *music = new QMediaPlayer();
    music->setPlaylist(playlist);
    music->play();
return a.exec();}*/
