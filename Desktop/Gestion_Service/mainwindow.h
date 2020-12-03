#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ui_mainwindow.h"
#include "annonce.h"
#include "reclamation.h"
#include <QMainWindow>
#include <QDialog>
#include <QPrinter>
#include "connexion.h"
#include <QPrintDialog>
#include <QTimer>
#include <QDate>
#include <QMediaPlayer>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
//Annonces :

    void on_pb_ajouter_an_clicked();

    void on_pb_supprimer_an_clicked();

    void on_pb_modifier_an_clicked();

    void on_pb_afficher_an_clicked();

    void on_pb_tri_CodeAscendant_clicked();  //Tri Ascendant

    void on_pb_tri_CodeDescendant_clicked();  //Tri Descendant

    void on_pb_afficher_annonce_clicked();  //Aff Recherch Rec
    void on_pb_afficher_annoncenom_clicked();  //Aff Recherch Rec
    void on_pb_afficher_annoncedate_clicked();  //Aff Recherch Rec

    void on_pb_print1_an_clicked();  //Print Afficher



    void  on_pb_tri_NomCroissant_clicked();
    void  on_pb_tri_NomDeCroissant_clicked();

    void   on_pb_tri_DateAscendant_clicked();
    void   on_pb_tri_DateDescendant_clicked();

    //Reclam :

    void on_pb_ajouter_rec_clicked();

    void on_pb_supprimer_rec_clicked();

    void on_pb_modifier_rec_clicked();

    void on_pb_afficher_rec_clicked();

    void on_pb_asc_tri_rec_clicked();  //Tri Ascendant

    void on_pb_desc_tri_rec_clicked();  //Tri Descendant

    void on_pb_afficher_reclamation_clicked();  //Aff Recherch Rec
    void on_pb_afficher_reclamationnom_clicked();  //Aff Recherch Rec
    void on_pb_afficher_reclamationdate_clicked();  //Aff Recherch Rec

    void on_pb_print1_rec_clicked();  //Print Afficher



    void  on_pb_tri_NomCroissant_rec_clicked();
    void  on_pb_tri_NomDeCroissant_rec_clicked();

    void   on_pb_tri_DateAscendant_rec_clicked();
    void   on_pb_tri_DateDescendant_rec_clicked();
    //stack widget trie annonce
    void on_pushButton_46_clicked();//back
    void on_Trie_clicked();//trie

    // stack widget trie reclamation
    void on_pushButton_47_clicked();//back
    void on_Trie_2_clicked();//trie
    //stack widger recherche annonce
    void on_pushButton_45_clicked();//back
    void on_Rechercher_clicked();//trie
    //stack widget recherche reclamation
    void on_pushButton_48_clicked();//back
    void on_Rechercher_2_clicked();//trie

    void timefct();

private:
    Ui::MainWindow *ui;
    Annonce tmpannonce;
    Reclamation tmpreclamation;
    QByteArray data;
    QTimer *timer;
    QMediaPlayer *click;
};

#endif // MAINWINDOW_H

/*

    void on_pb_ajouter_clicked_2();
    void on_pb_supprimer_clicked_2();
    void on_pb_modifier_clicked_2();

    void on_pushButton_clicked();

    void on_pb_asc_tri_clicked();

    void on_pb_desc_tri_clicked();

    void on_pb_aff_pays_clicked();

    void on_pb_supprimer_type_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pb_back_clicked();

    void on_next_clicked();
void on_pb_print_Afficher_Reclam_clicked();

void on_Email_cursorPositionChanged(int arg1, int arg2);
};

#endif // MAINWINDOW_H


*/


//1st test
/*
class menu_reclamation : public QDialog
{
    Q_OBJECT

public:
    explicit menu_reclamation(QWidget *parent = nullptr);
    ~menu_reclamation();

private slots:
    void on_pb_ajouter_clicked();
    void on_pb_supprimer_clicked();
    void on_pb_ajouter_type_clicked();
    void on_pb_modifier_clicked();

    void on_load_clicked();

    void on_pushButton_clicked();

    void on_load_2_clicked();

    void on_pb_asc_tri_clicked();

    void on_pb_desc_tri_clicked();

    void on_pb_aff_pays_clicked();

    void on_pb_supprimer_type_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pb_back_clicked();

    void on_next_clicked();

private:
    Ui::menu_reclamation *ui;
    Reclamation tmpreclamation;
    Reclamation_type tmpreclamation_type;
    QMediaPlayer* player;
    QByteArray data;
};


*/

//menu_reclam
/*********************************************************************************************************************************
namespace Ui {
class menu_reclamation;
}

class menu_reclamation : public QDialog
{
    Q_OBJECT

public:
    explicit menu_reclamation(QWidget *parent = nullptr);
    ~menu_reclamation();

private slots:
    void on_pb_ajouter_clicked();
    void on_pb_supprimer_clicked();
    void on_pb_ajouter_type_clicked();
    void on_pb_modifier_clicked();

    void on_load_clicked();

    void on_pushButton_clicked();

    void on_load_2_clicked();

    void on_pb_asc_tri_clicked();

    void on_pb_desc_tri_clicked();

    void on_pb_aff_pays_clicked();

    void on_pb_supprimer_type_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void timefct();

    void on_pb_back_clicked();

    void on_next_clicked();

private:
    Ui::menu_reclamation *ui;
    Reclamation tmpreclamation;
    Reclamation_type tmpreclamation_type;
    QMediaPlayer* player;
    QByteArray data;
    QTimer *timer;
};

#endif // MENU_RECLAMATION_H


*/



//original
/*********************************************************************************************************************/
/* namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();


    void on_pb_tri_asc_clicked();  //Tri Ascendant

    void on_pb_tri_desc_clicked();  //Tri Descendant

    void on_pb_print1_clicked();  //Print Afficher

    void on_pb_print2_clicked();  //Print Trier

    void on_pb_ajouter_clicked_2();
    void on_pb_supprimer_clicked_2();
    void on_pb_ajouter_type_clicked();
    void on_pb_modifier_clicked_2();

    void on_load_clicked();

    void on_pushButton_clicked();

    void on_load_2_clicked();

    void on_pb_asc_tri_clicked();

    void on_pb_desc_tri_clicked();

    void on_pb_aff_pays_clicked();

    void on_pb_supprimer_type_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pb_back_clicked();

    void on_next_clicked();
void on_pb_print_Afficher_Reclam_clicked();

void on_Email_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::MainWindow *ui;
    Annonce tmpannonce;
    Reclamation tmpreclamation;
    QByteArray data;
};

#endif // MAINWINDOW_H




namespace Ui {
class menu_reclamation;
}

*/



//1st test
/*
class menu_reclamation : public QDialog
{
    Q_OBJECT

public:
    explicit menu_reclamation(QWidget *parent = nullptr);
    ~menu_reclamation();

private slots:
    void on_pb_ajouter_clicked();
    void on_pb_supprimer_clicked();
    void on_pb_ajouter_type_clicked();
    void on_pb_modifier_clicked();

    void on_load_clicked();

    void on_pushButton_clicked();

    void on_load_2_clicked();

    void on_pb_asc_tri_clicked();

    void on_pb_desc_tri_clicked();

    void on_pb_aff_pays_clicked();

    void on_pb_supprimer_type_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pb_back_clicked();

    void on_next_clicked();

private:
    Ui::menu_reclamation *ui;
    Reclamation tmpreclamation;
    Reclamation_type tmpreclamation_type;
    QMediaPlayer* player;
    QByteArray data;
};
#endif // MENU_RECLAMATION_H*/




