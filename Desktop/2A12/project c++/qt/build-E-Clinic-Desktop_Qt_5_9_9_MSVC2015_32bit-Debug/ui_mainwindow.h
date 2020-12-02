/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_5;
    QLabel *label;
    QTabWidget *tabWidget_7;
    QWidget *tab_20;
    QTabWidget *tabWidget_8;
    QWidget *tab_2;
    QLineEdit *Nom;
    QLineEdit *TypePatients;
    QLineEdit *ID;
    QLineEdit *AssuranceMed;
    QLineEdit *Telpap;
    QLineEdit *Prenom;
    QLineEdit *Sexe;
    QLineEdit *Tel;
    QLineEdit *SituationF;
    QLineEdit *CodeAssurance;
    QLineEdit *Adresse;
    QLineEdit *Nompap;
    QLineEdit *Datenaissance;
    QLineEdit *Prenompap;
    QPushButton *pb_ajouter;
    QWidget *tab_21;
    QTableView *tab_patients;
    QPushButton *pushButton_1;
    QPushButton *afficher;
    QStackedWidget *widgetrecherche_2;
    QWidget *page_26;
    QPushButton *Rechercher_2;
    QWidget *page_27;
    QPushButton *pushButton_47;
    QLineEdit *lineEdit_aff_idpatient;
    QPushButton *pb_aff_client;
    QLineEdit *lineEdit_aff_nompatient;
    QPushButton *pb_aff_client_2;
    QLineEdit *lineEdit_aff_prenompatient;
    QPushButton *pb_aff_client_3;
    QStackedWidget *widgettrie_2;
    QWidget *page_28;
    QPushButton *Trie_2;
    QWidget *page_29;
    QPushButton *pushButton_48;
    QPushButton *pb_desc_tri_6;
    QPushButton *pb_asc_tri_2;
    QPushButton *pb_desc_tri_2;
    QPushButton *pb_desc_tri_5;
    QPushButton *pb_asc_tri_5;
    QPushButton *pb_asc_tri_6;
    QWidget *tab_9;
    QTabWidget *tabWidget_9;
    QWidget *tab_6;
    QLineEdit *Nom_2;
    QLineEdit *TypePatients_2;
    QLineEdit *ID_2;
    QLineEdit *AssuranceMed_2;
    QLineEdit *Telpap_2;
    QLineEdit *Prenom_2;
    QLineEdit *Sexe_2;
    QLineEdit *Tel_2;
    QLineEdit *SituationF_2;
    QLineEdit *CodeAssurance_2;
    QLineEdit *Adresse_2;
    QLineEdit *Nompap_2;
    QLineEdit *Datenaissance_2;
    QLineEdit *Prenompap_2;
    QPushButton *pb_modifier_2;
    QWidget *tab_8;
    QLineEdit *ID_5;
    QPushButton *supprimerp;
    QPushButton *cancelButton;
    QWidget *tab_4;
    QTabWidget *tabWidget_5;
    QWidget *tab_13;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *ID_3a;
    QLineEdit *CodeRDV;
    QLineEdit *Docteur;
    QLineEdit *Servicea;
    QLineEdit *datea;
    QLineEdit *timea;
    QPushButton *pb_ajouter_2;
    QCalendarWidget *calendarWidget_2;
    QWidget *tab_14;
    QTableView *tab_rdv;
    QPushButton *afficher_2;
    QStackedWidget *widgetrecherche;
    QWidget *page_22;
    QPushButton *Rechercher;
    QWidget *page_23;
    QPushButton *pushButton_45;
    QLineEdit *lineEdit_aff_coderdv;
    QPushButton *pb_aff_rdv;
    QLineEdit *lineEdit_aff_doc;
    QPushButton *pb_aff_rdv_2;
    QLineEdit *lineEdit_aff_ID;
    QPushButton *pb_aff_rdv_3;
    QStackedWidget *widgettrie;
    QWidget *page_24;
    QPushButton *Trie;
    QWidget *page_25;
    QPushButton *pushButton_46;
    QPushButton *pb_desc_tri_3;
    QPushButton *pb_desc_tri_4;
    QPushButton *pb_asc_tri_4;
    QPushButton *pb_desc_tri;
    QPushButton *pb_asc_tri_3;
    QPushButton *pb_asc_tri;
    QWidget *tab_11;
    QCalendarWidget *calendarWidget_4;
    QGroupBox *groupBox_4;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *ID_4m;
    QLineEdit *CodeRDV_3;
    QLineEdit *Docteur_3;
    QLineEdit *Service_3;
    QLineEdit *datem;
    QLineEdit *timem;
    QPushButton *pb_modifierrdv;
    QWidget *tab_10;
    QPushButton *supprimerr;
    QLineEdit *CodeRDV_2;
    QLabel *label_2;
    QPushButton *cancelButton_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(875, 681);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/background.png);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 881, 661));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 80, 881, 561));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label = new QLabel(tab_5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(690, 0, 161, 21));
        tabWidget_7 = new QTabWidget(tab_5);
        tabWidget_7->setObjectName(QStringLiteral("tabWidget_7"));
        tabWidget_7->setGeometry(QRect(-10, 0, 891, 491));
        tab_20 = new QWidget();
        tab_20->setObjectName(QStringLiteral("tab_20"));
        tabWidget_8 = new QTabWidget(tab_20);
        tabWidget_8->setObjectName(QStringLiteral("tabWidget_8"));
        tabWidget_8->setGeometry(QRect(10, 10, 721, 371));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        Nom = new QLineEdit(tab_2);
        Nom->setObjectName(QStringLiteral("Nom"));
        Nom->setGeometry(QRect(50, 50, 113, 20));
        TypePatients = new QLineEdit(tab_2);
        TypePatients->setObjectName(QStringLiteral("TypePatients"));
        TypePatients->setGeometry(QRect(50, 250, 113, 20));
        ID = new QLineEdit(tab_2);
        ID->setObjectName(QStringLiteral("ID"));
        ID->setGeometry(QRect(50, 10, 113, 20));
        AssuranceMed = new QLineEdit(tab_2);
        AssuranceMed->setObjectName(QStringLiteral("AssuranceMed"));
        AssuranceMed->setGeometry(QRect(330, 50, 113, 20));
        Telpap = new QLineEdit(tab_2);
        Telpap->setObjectName(QStringLiteral("Telpap"));
        Telpap->setGeometry(QRect(330, 210, 111, 20));
        Prenom = new QLineEdit(tab_2);
        Prenom->setObjectName(QStringLiteral("Prenom"));
        Prenom->setGeometry(QRect(50, 90, 113, 20));
        Sexe = new QLineEdit(tab_2);
        Sexe->setObjectName(QStringLiteral("Sexe"));
        Sexe->setGeometry(QRect(50, 130, 113, 20));
        Sexe->setReadOnly(false);
        Tel = new QLineEdit(tab_2);
        Tel->setObjectName(QStringLiteral("Tel"));
        Tel->setGeometry(QRect(50, 210, 113, 20));
        SituationF = new QLineEdit(tab_2);
        SituationF->setObjectName(QStringLiteral("SituationF"));
        SituationF->setGeometry(QRect(330, 10, 113, 20));
        CodeAssurance = new QLineEdit(tab_2);
        CodeAssurance->setObjectName(QStringLiteral("CodeAssurance"));
        CodeAssurance->setGeometry(QRect(330, 90, 113, 20));
        Adresse = new QLineEdit(tab_2);
        Adresse->setObjectName(QStringLiteral("Adresse"));
        Adresse->setGeometry(QRect(330, 250, 113, 20));
        Nompap = new QLineEdit(tab_2);
        Nompap->setObjectName(QStringLiteral("Nompap"));
        Nompap->setGeometry(QRect(330, 130, 113, 20));
        Datenaissance = new QLineEdit(tab_2);
        Datenaissance->setObjectName(QStringLiteral("Datenaissance"));
        Datenaissance->setGeometry(QRect(50, 170, 113, 20));
        Datenaissance->setReadOnly(false);
        Prenompap = new QLineEdit(tab_2);
        Prenompap->setObjectName(QStringLiteral("Prenompap"));
        Prenompap->setGeometry(QRect(330, 170, 113, 20));
        pb_ajouter = new QPushButton(tab_2);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(510, 130, 75, 23));
        pb_ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        tabWidget_8->addTab(tab_2, QString());
        tabWidget_7->addTab(tab_20, QString());
        tab_21 = new QWidget();
        tab_21->setObjectName(QStringLiteral("tab_21"));
        tab_patients = new QTableView(tab_21);
        tab_patients->setObjectName(QStringLiteral("tab_patients"));
        tab_patients->setGeometry(QRect(200, 160, 671, 301));
        pushButton_1 = new QPushButton(tab_21);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(50, 250, 75, 23));
        pushButton_1->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        afficher = new QPushButton(tab_21);
        afficher->setObjectName(QStringLiteral("afficher"));
        afficher->setGeometry(QRect(50, 320, 75, 23));
        afficher->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        widgetrecherche_2 = new QStackedWidget(tab_21);
        widgetrecherche_2->setObjectName(QStringLiteral("widgetrecherche_2"));
        widgetrecherche_2->setGeometry(QRect(10, 10, 181, 191));
        page_26 = new QWidget();
        page_26->setObjectName(QStringLiteral("page_26"));
        Rechercher_2 = new QPushButton(page_26);
        Rechercher_2->setObjectName(QStringLiteral("Rechercher_2"));
        Rechercher_2->setGeometry(QRect(50, 70, 75, 23));
        Rechercher_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        widgetrecherche_2->addWidget(page_26);
        page_27 = new QWidget();
        page_27->setObjectName(QStringLiteral("page_27"));
        pushButton_47 = new QPushButton(page_27);
        pushButton_47->setObjectName(QStringLiteral("pushButton_47"));
        pushButton_47->setGeometry(QRect(130, 170, 51, 21));
        pushButton_47->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        lineEdit_aff_idpatient = new QLineEdit(page_27);
        lineEdit_aff_idpatient->setObjectName(QStringLiteral("lineEdit_aff_idpatient"));
        lineEdit_aff_idpatient->setGeometry(QRect(40, 20, 113, 21));
        pb_aff_client = new QPushButton(page_27);
        pb_aff_client->setObjectName(QStringLiteral("pb_aff_client"));
        pb_aff_client->setGeometry(QRect(40, 40, 121, 21));
        pb_aff_client->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        lineEdit_aff_nompatient = new QLineEdit(page_27);
        lineEdit_aff_nompatient->setObjectName(QStringLiteral("lineEdit_aff_nompatient"));
        lineEdit_aff_nompatient->setGeometry(QRect(40, 60, 113, 21));
        pb_aff_client_2 = new QPushButton(page_27);
        pb_aff_client_2->setObjectName(QStringLiteral("pb_aff_client_2"));
        pb_aff_client_2->setGeometry(QRect(40, 90, 121, 21));
        pb_aff_client_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        lineEdit_aff_prenompatient = new QLineEdit(page_27);
        lineEdit_aff_prenompatient->setObjectName(QStringLiteral("lineEdit_aff_prenompatient"));
        lineEdit_aff_prenompatient->setGeometry(QRect(40, 110, 113, 21));
        pb_aff_client_3 = new QPushButton(page_27);
        pb_aff_client_3->setObjectName(QStringLiteral("pb_aff_client_3"));
        pb_aff_client_3->setGeometry(QRect(40, 140, 121, 21));
        pb_aff_client_3->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        widgetrecherche_2->addWidget(page_27);
        widgettrie_2 = new QStackedWidget(tab_21);
        widgettrie_2->setObjectName(QStringLiteral("widgettrie_2"));
        widgettrie_2->setGeometry(QRect(550, 0, 311, 151));
        page_28 = new QWidget();
        page_28->setObjectName(QStringLiteral("page_28"));
        Trie_2 = new QPushButton(page_28);
        Trie_2->setObjectName(QStringLiteral("Trie_2"));
        Trie_2->setGeometry(QRect(110, 60, 75, 23));
        Trie_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        widgettrie_2->addWidget(page_28);
        page_29 = new QWidget();
        page_29->setObjectName(QStringLiteral("page_29"));
        pushButton_48 = new QPushButton(page_29);
        pushButton_48->setObjectName(QStringLiteral("pushButton_48"));
        pushButton_48->setGeometry(QRect(250, 120, 51, 21));
        pushButton_48->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_desc_tri_6 = new QPushButton(page_29);
        pb_desc_tri_6->setObjectName(QStringLiteral("pb_desc_tri_6"));
        pb_desc_tri_6->setGeometry(QRect(160, 90, 141, 23));
        pb_desc_tri_6->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_asc_tri_2 = new QPushButton(page_29);
        pb_asc_tri_2->setObjectName(QStringLiteral("pb_asc_tri_2"));
        pb_asc_tri_2->setGeometry(QRect(26, 30, 111, 23));
        pb_asc_tri_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_desc_tri_2 = new QPushButton(page_29);
        pb_desc_tri_2->setObjectName(QStringLiteral("pb_desc_tri_2"));
        pb_desc_tri_2->setGeometry(QRect(160, 30, 111, 23));
        pb_desc_tri_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_desc_tri_5 = new QPushButton(page_29);
        pb_desc_tri_5->setObjectName(QStringLiteral("pb_desc_tri_5"));
        pb_desc_tri_5->setGeometry(QRect(160, 60, 111, 23));
        pb_desc_tri_5->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_asc_tri_5 = new QPushButton(page_29);
        pb_asc_tri_5->setObjectName(QStringLiteral("pb_asc_tri_5"));
        pb_asc_tri_5->setGeometry(QRect(26, 60, 111, 23));
        pb_asc_tri_5->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_asc_tri_6 = new QPushButton(page_29);
        pb_asc_tri_6->setObjectName(QStringLiteral("pb_asc_tri_6"));
        pb_asc_tri_6->setGeometry(QRect(6, 90, 131, 23));
        pb_asc_tri_6->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        widgettrie_2->addWidget(page_29);
        tabWidget_7->addTab(tab_21, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        tabWidget_9 = new QTabWidget(tab_9);
        tabWidget_9->setObjectName(QStringLiteral("tabWidget_9"));
        tabWidget_9->setGeometry(QRect(10, 10, 721, 341));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        Nom_2 = new QLineEdit(tab_6);
        Nom_2->setObjectName(QStringLiteral("Nom_2"));
        Nom_2->setGeometry(QRect(50, 50, 113, 20));
        Nom_2->setReadOnly(false);
        TypePatients_2 = new QLineEdit(tab_6);
        TypePatients_2->setObjectName(QStringLiteral("TypePatients_2"));
        TypePatients_2->setGeometry(QRect(50, 250, 113, 20));
        TypePatients_2->setReadOnly(false);
        ID_2 = new QLineEdit(tab_6);
        ID_2->setObjectName(QStringLiteral("ID_2"));
        ID_2->setGeometry(QRect(50, 10, 113, 20));
        ID_2->setReadOnly(false);
        AssuranceMed_2 = new QLineEdit(tab_6);
        AssuranceMed_2->setObjectName(QStringLiteral("AssuranceMed_2"));
        AssuranceMed_2->setGeometry(QRect(330, 50, 113, 20));
        AssuranceMed_2->setReadOnly(false);
        Telpap_2 = new QLineEdit(tab_6);
        Telpap_2->setObjectName(QStringLiteral("Telpap_2"));
        Telpap_2->setGeometry(QRect(330, 210, 111, 20));
        Telpap_2->setReadOnly(false);
        Prenom_2 = new QLineEdit(tab_6);
        Prenom_2->setObjectName(QStringLiteral("Prenom_2"));
        Prenom_2->setGeometry(QRect(50, 90, 113, 20));
        Prenom_2->setReadOnly(false);
        Sexe_2 = new QLineEdit(tab_6);
        Sexe_2->setObjectName(QStringLiteral("Sexe_2"));
        Sexe_2->setGeometry(QRect(50, 130, 113, 20));
        Sexe_2->setReadOnly(false);
        Tel_2 = new QLineEdit(tab_6);
        Tel_2->setObjectName(QStringLiteral("Tel_2"));
        Tel_2->setGeometry(QRect(50, 210, 113, 20));
        Tel_2->setReadOnly(false);
        SituationF_2 = new QLineEdit(tab_6);
        SituationF_2->setObjectName(QStringLiteral("SituationF_2"));
        SituationF_2->setGeometry(QRect(330, 10, 113, 20));
        SituationF_2->setReadOnly(false);
        CodeAssurance_2 = new QLineEdit(tab_6);
        CodeAssurance_2->setObjectName(QStringLiteral("CodeAssurance_2"));
        CodeAssurance_2->setGeometry(QRect(330, 90, 113, 20));
        CodeAssurance_2->setReadOnly(false);
        Adresse_2 = new QLineEdit(tab_6);
        Adresse_2->setObjectName(QStringLiteral("Adresse_2"));
        Adresse_2->setGeometry(QRect(330, 250, 113, 20));
        Adresse_2->setReadOnly(false);
        Nompap_2 = new QLineEdit(tab_6);
        Nompap_2->setObjectName(QStringLiteral("Nompap_2"));
        Nompap_2->setGeometry(QRect(330, 130, 113, 20));
        Nompap_2->setReadOnly(false);
        Datenaissance_2 = new QLineEdit(tab_6);
        Datenaissance_2->setObjectName(QStringLiteral("Datenaissance_2"));
        Datenaissance_2->setGeometry(QRect(50, 170, 113, 20));
        Datenaissance_2->setReadOnly(false);
        Prenompap_2 = new QLineEdit(tab_6);
        Prenompap_2->setObjectName(QStringLiteral("Prenompap_2"));
        Prenompap_2->setGeometry(QRect(330, 170, 113, 20));
        Prenompap_2->setReadOnly(false);
        pb_modifier_2 = new QPushButton(tab_6);
        pb_modifier_2->setObjectName(QStringLiteral("pb_modifier_2"));
        pb_modifier_2->setGeometry(QRect(590, 140, 101, 23));
        pb_modifier_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        tabWidget_9->addTab(tab_6, QString());
        tabWidget_7->addTab(tab_9, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        ID_5 = new QLineEdit(tab_8);
        ID_5->setObjectName(QStringLiteral("ID_5"));
        ID_5->setGeometry(QRect(260, 160, 281, 20));
        supprimerp = new QPushButton(tab_8);
        supprimerp->setObjectName(QStringLiteral("supprimerp"));
        supprimerp->setGeometry(QRect(370, 180, 71, 23));
        supprimerp->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        tabWidget_7->addTab(tab_8, QString());
        cancelButton = new QPushButton(tab_5);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(390, 490, 75, 23));
        cancelButton->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        tabWidget_2->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget_5 = new QTabWidget(tab_4);
        tabWidget_5->setObjectName(QStringLiteral("tabWidget_5"));
        tabWidget_5->setGeometry(QRect(0, 10, 871, 481));
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        groupBox_2 = new QGroupBox(tab_13);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 30, 421, 251));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 30, 131, 16));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 60, 71, 16));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 90, 81, 16));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 120, 71, 16));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(30, 150, 71, 16));
        ID_3a = new QLineEdit(groupBox_2);
        ID_3a->setObjectName(QStringLiteral("ID_3a"));
        ID_3a->setGeometry(QRect(210, 150, 113, 20));
        CodeRDV = new QLineEdit(groupBox_2);
        CodeRDV->setObjectName(QStringLiteral("CodeRDV"));
        CodeRDV->setGeometry(QRect(210, 30, 113, 20));
        Docteur = new QLineEdit(groupBox_2);
        Docteur->setObjectName(QStringLiteral("Docteur"));
        Docteur->setGeometry(QRect(210, 60, 113, 20));
        Servicea = new QLineEdit(groupBox_2);
        Servicea->setObjectName(QStringLiteral("Servicea"));
        Servicea->setGeometry(QRect(210, 120, 113, 20));
        datea = new QLineEdit(groupBox_2);
        datea->setObjectName(QStringLiteral("datea"));
        datea->setGeometry(QRect(150, 90, 113, 20));
        timea = new QLineEdit(groupBox_2);
        timea->setObjectName(QStringLiteral("timea"));
        timea->setGeometry(QRect(280, 90, 113, 20));
        pb_ajouter_2 = new QPushButton(groupBox_2);
        pb_ajouter_2->setObjectName(QStringLiteral("pb_ajouter_2"));
        pb_ajouter_2->setGeometry(QRect(310, 200, 75, 23));
        pb_ajouter_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        calendarWidget_2 = new QCalendarWidget(tab_13);
        calendarWidget_2->setObjectName(QStringLiteral("calendarWidget_2"));
        calendarWidget_2->setGeometry(QRect(460, 50, 312, 183));
        tabWidget_5->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        tab_rdv = new QTableView(tab_14);
        tab_rdv->setObjectName(QStringLiteral("tab_rdv"));
        tab_rdv->setGeometry(QRect(190, 170, 661, 281));
        afficher_2 = new QPushButton(tab_14);
        afficher_2->setObjectName(QStringLiteral("afficher_2"));
        afficher_2->setGeometry(QRect(40, 310, 75, 23));
        afficher_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        widgetrecherche = new QStackedWidget(tab_14);
        widgetrecherche->setObjectName(QStringLiteral("widgetrecherche"));
        widgetrecherche->setGeometry(QRect(0, 10, 181, 211));
        page_22 = new QWidget();
        page_22->setObjectName(QStringLiteral("page_22"));
        Rechercher = new QPushButton(page_22);
        Rechercher->setObjectName(QStringLiteral("Rechercher"));
        Rechercher->setGeometry(QRect(50, 70, 75, 23));
        Rechercher->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        widgetrecherche->addWidget(page_22);
        page_23 = new QWidget();
        page_23->setObjectName(QStringLiteral("page_23"));
        pushButton_45 = new QPushButton(page_23);
        pushButton_45->setObjectName(QStringLiteral("pushButton_45"));
        pushButton_45->setGeometry(QRect(130, 180, 51, 21));
        pushButton_45->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        lineEdit_aff_coderdv = new QLineEdit(page_23);
        lineEdit_aff_coderdv->setObjectName(QStringLiteral("lineEdit_aff_coderdv"));
        lineEdit_aff_coderdv->setGeometry(QRect(30, 20, 113, 21));
        pb_aff_rdv = new QPushButton(page_23);
        pb_aff_rdv->setObjectName(QStringLiteral("pb_aff_rdv"));
        pb_aff_rdv->setGeometry(QRect(20, 50, 131, 21));
        pb_aff_rdv->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        lineEdit_aff_doc = new QLineEdit(page_23);
        lineEdit_aff_doc->setObjectName(QStringLiteral("lineEdit_aff_doc"));
        lineEdit_aff_doc->setGeometry(QRect(30, 70, 113, 21));
        pb_aff_rdv_2 = new QPushButton(page_23);
        pb_aff_rdv_2->setObjectName(QStringLiteral("pb_aff_rdv_2"));
        pb_aff_rdv_2->setGeometry(QRect(20, 100, 131, 21));
        pb_aff_rdv_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        lineEdit_aff_ID = new QLineEdit(page_23);
        lineEdit_aff_ID->setObjectName(QStringLiteral("lineEdit_aff_ID"));
        lineEdit_aff_ID->setGeometry(QRect(30, 130, 113, 21));
        pb_aff_rdv_3 = new QPushButton(page_23);
        pb_aff_rdv_3->setObjectName(QStringLiteral("pb_aff_rdv_3"));
        pb_aff_rdv_3->setGeometry(QRect(20, 160, 131, 21));
        pb_aff_rdv_3->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        widgetrecherche->addWidget(page_23);
        widgettrie = new QStackedWidget(tab_14);
        widgettrie->setObjectName(QStringLiteral("widgettrie"));
        widgettrie->setGeometry(QRect(570, 0, 261, 151));
        page_24 = new QWidget();
        page_24->setObjectName(QStringLiteral("page_24"));
        Trie = new QPushButton(page_24);
        Trie->setObjectName(QStringLiteral("Trie"));
        Trie->setGeometry(QRect(100, 50, 75, 23));
        Trie->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        widgettrie->addWidget(page_24);
        page_25 = new QWidget();
        page_25->setObjectName(QStringLiteral("page_25"));
        pushButton_46 = new QPushButton(page_25);
        pushButton_46->setObjectName(QStringLiteral("pushButton_46"));
        pushButton_46->setGeometry(QRect(200, 120, 51, 21));
        pushButton_46->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_desc_tri_3 = new QPushButton(page_25);
        pb_desc_tri_3->setObjectName(QStringLiteral("pb_desc_tri_3"));
        pb_desc_tri_3->setGeometry(QRect(124, 90, 121, 23));
        pb_desc_tri_3->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_desc_tri_4 = new QPushButton(page_25);
        pb_desc_tri_4->setObjectName(QStringLiteral("pb_desc_tri_4"));
        pb_desc_tri_4->setGeometry(QRect(124, 30, 121, 23));
        pb_desc_tri_4->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_asc_tri_4 = new QPushButton(page_25);
        pb_asc_tri_4->setObjectName(QStringLiteral("pb_asc_tri_4"));
        pb_asc_tri_4->setGeometry(QRect(10, 30, 111, 23));
        pb_asc_tri_4->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_desc_tri = new QPushButton(page_25);
        pb_desc_tri->setObjectName(QStringLiteral("pb_desc_tri"));
        pb_desc_tri->setGeometry(QRect(124, 60, 121, 23));
        pb_desc_tri->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_asc_tri_3 = new QPushButton(page_25);
        pb_asc_tri_3->setObjectName(QStringLiteral("pb_asc_tri_3"));
        pb_asc_tri_3->setGeometry(QRect(10, 90, 111, 23));
        pb_asc_tri_3->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        pb_asc_tri = new QPushButton(page_25);
        pb_asc_tri->setObjectName(QStringLiteral("pb_asc_tri"));
        pb_asc_tri->setGeometry(QRect(10, 60, 111, 23));
        pb_asc_tri->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        widgettrie->addWidget(page_25);
        tabWidget_5->addTab(tab_14, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        calendarWidget_4 = new QCalendarWidget(tab_11);
        calendarWidget_4->setObjectName(QStringLiteral("calendarWidget_4"));
        calendarWidget_4->setGeometry(QRect(460, 90, 312, 183));
        groupBox_4 = new QGroupBox(tab_11);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 60, 431, 251));
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(30, 30, 131, 16));
        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(30, 60, 71, 16));
        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(30, 90, 81, 16));
        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(30, 120, 71, 16));
        label_23 = new QLabel(groupBox_4);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(30, 150, 71, 16));
        ID_4m = new QLineEdit(groupBox_4);
        ID_4m->setObjectName(QStringLiteral("ID_4m"));
        ID_4m->setGeometry(QRect(210, 150, 113, 20));
        ID_4m->setReadOnly(false);
        CodeRDV_3 = new QLineEdit(groupBox_4);
        CodeRDV_3->setObjectName(QStringLiteral("CodeRDV_3"));
        CodeRDV_3->setGeometry(QRect(210, 30, 113, 20));
        CodeRDV_3->setReadOnly(false);
        Docteur_3 = new QLineEdit(groupBox_4);
        Docteur_3->setObjectName(QStringLiteral("Docteur_3"));
        Docteur_3->setGeometry(QRect(210, 60, 113, 20));
        Service_3 = new QLineEdit(groupBox_4);
        Service_3->setObjectName(QStringLiteral("Service_3"));
        Service_3->setGeometry(QRect(210, 120, 113, 20));
        datem = new QLineEdit(groupBox_4);
        datem->setObjectName(QStringLiteral("datem"));
        datem->setGeometry(QRect(150, 90, 113, 20));
        timem = new QLineEdit(groupBox_4);
        timem->setObjectName(QStringLiteral("timem"));
        timem->setGeometry(QRect(280, 90, 113, 20));
        pb_modifierrdv = new QPushButton(groupBox_4);
        pb_modifierrdv->setObjectName(QStringLiteral("pb_modifierrdv"));
        pb_modifierrdv->setGeometry(QRect(200, 220, 151, 23));
        pb_modifierrdv->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        tabWidget_5->addTab(tab_11, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        supprimerr = new QPushButton(tab_10);
        supprimerr->setObjectName(QStringLiteral("supprimerr"));
        supprimerr->setGeometry(QRect(370, 180, 81, 23));
        supprimerr->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        CodeRDV_2 = new QLineEdit(tab_10);
        CodeRDV_2->setObjectName(QStringLiteral("CodeRDV_2"));
        CodeRDV_2->setGeometry(QRect(262, 150, 291, 20));
        tabWidget_5->addTab(tab_10, QString());
        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(610, 0, 161, 21));
        cancelButton_2 = new QPushButton(tab_4);
        cancelButton_2->setObjectName(QStringLiteral("cancelButton_2"));
        cancelButton_2->setGeometry(QRect(400, 490, 75, 23));
        cancelButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"background-color:#0094ff;\n"
"font-weight: bold;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"color :white;\n"
"}"));
        tabWidget_2->addTab(tab_4, QString());
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(770, 0, 91, 91));
        label_3->setStyleSheet(QStringLiteral("image: url(:/logoeclinic.png);"));
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 875, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);
        tabWidget_7->setCurrentIndex(1);
        tabWidget_8->setCurrentIndex(0);
        widgetrecherche_2->setCurrentIndex(0);
        widgettrie_2->setCurrentIndex(1);
        tabWidget_9->setCurrentIndex(0);
        tabWidget_5->setCurrentIndex(1);
        widgetrecherche->setCurrentIndex(0);
        widgettrie->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "time", Q_NULLPTR));
        Nom->setPlaceholderText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        TypePatients->setPlaceholderText(QApplication::translate("MainWindow", "TypePatients", Q_NULLPTR));
        ID->setPlaceholderText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        AssuranceMed->setPlaceholderText(QApplication::translate("MainWindow", "Assurance_medical", Q_NULLPTR));
        Telpap->setPlaceholderText(QApplication::translate("MainWindow", "TelP a prevenir", Q_NULLPTR));
        Prenom->setPlaceholderText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        Sexe->setPlaceholderText(QApplication::translate("MainWindow", "Sexe", Q_NULLPTR));
        Tel->setPlaceholderText(QApplication::translate("MainWindow", "Tel", Q_NULLPTR));
        SituationF->setPlaceholderText(QApplication::translate("MainWindow", "Situation_Familliale", Q_NULLPTR));
        CodeAssurance->setPlaceholderText(QApplication::translate("MainWindow", "Code_Assurance", Q_NULLPTR));
        Adresse->setPlaceholderText(QApplication::translate("MainWindow", "adresse", Q_NULLPTR));
        Nompap->setPlaceholderText(QApplication::translate("MainWindow", "NomP a prevenir", Q_NULLPTR));
        Datenaissance->setPlaceholderText(QApplication::translate("MainWindow", "date_naissance", Q_NULLPTR));
        Prenompap->setPlaceholderText(QApplication::translate("MainWindow", "PrenomP a prevenir", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget_8->setTabText(tabWidget_8->indexOf(tab_2), QApplication::translate("MainWindow", "Patient", Q_NULLPTR));
        tabWidget_7->setTabText(tabWidget_7->indexOf(tab_20), QApplication::translate("MainWindow", "Ajouter patient", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("MainWindow", "Print", Q_NULLPTR));
        afficher->setText(QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        Rechercher_2->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        pushButton_47->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        lineEdit_aff_idpatient->setPlaceholderText(QApplication::translate("MainWindow", "ID patient", Q_NULLPTR));
        pb_aff_client->setText(QApplication::translate("MainWindow", "rechercher id", Q_NULLPTR));
        lineEdit_aff_nompatient->setPlaceholderText(QApplication::translate("MainWindow", "nom patient", Q_NULLPTR));
        pb_aff_client_2->setText(QApplication::translate("MainWindow", "rechercher nom", Q_NULLPTR));
        lineEdit_aff_prenompatient->setPlaceholderText(QApplication::translate("MainWindow", "prenom patient", Q_NULLPTR));
        pb_aff_client_3->setText(QApplication::translate("MainWindow", "rechercher prenom", Q_NULLPTR));
        Trie_2->setText(QApplication::translate("MainWindow", "Trie", Q_NULLPTR));
        pushButton_48->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        pb_desc_tri_6->setText(QApplication::translate("MainWindow", "Descendant assurance", Q_NULLPTR));
        pb_asc_tri_2->setText(QApplication::translate("MainWindow", "Ascendant ID", Q_NULLPTR));
        pb_desc_tri_2->setText(QApplication::translate("MainWindow", "Descendant ID", Q_NULLPTR));
        pb_desc_tri_5->setText(QApplication::translate("MainWindow", "Descendant Type", Q_NULLPTR));
        pb_asc_tri_5->setText(QApplication::translate("MainWindow", "Ascendant Type", Q_NULLPTR));
        pb_asc_tri_6->setText(QApplication::translate("MainWindow", "Ascendant assurance", Q_NULLPTR));
        tabWidget_7->setTabText(tabWidget_7->indexOf(tab_21), QApplication::translate("MainWindow", "Afficher patient", Q_NULLPTR));
        Nom_2->setPlaceholderText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        TypePatients_2->setPlaceholderText(QApplication::translate("MainWindow", "TypePatients", Q_NULLPTR));
        ID_2->setPlaceholderText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        AssuranceMed_2->setPlaceholderText(QApplication::translate("MainWindow", "Assurance_medical", Q_NULLPTR));
        Telpap_2->setPlaceholderText(QApplication::translate("MainWindow", "TelP a prevenir", Q_NULLPTR));
        Prenom_2->setPlaceholderText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        Sexe_2->setPlaceholderText(QApplication::translate("MainWindow", "Sexe", Q_NULLPTR));
        Tel_2->setPlaceholderText(QApplication::translate("MainWindow", "Tel", Q_NULLPTR));
        SituationF_2->setPlaceholderText(QApplication::translate("MainWindow", "Situation_Familliale", Q_NULLPTR));
        CodeAssurance_2->setPlaceholderText(QApplication::translate("MainWindow", "Code_Assurance", Q_NULLPTR));
        Adresse_2->setPlaceholderText(QApplication::translate("MainWindow", "adresse", Q_NULLPTR));
        Nompap_2->setPlaceholderText(QApplication::translate("MainWindow", "NomP a prevenir", Q_NULLPTR));
        Datenaissance_2->setPlaceholderText(QApplication::translate("MainWindow", "date_naissance", Q_NULLPTR));
        Prenompap_2->setPlaceholderText(QApplication::translate("MainWindow", "PrenomP a prevenir", Q_NULLPTR));
        pb_modifier_2->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget_9->setTabText(tabWidget_9->indexOf(tab_6), QApplication::translate("MainWindow", "Patient", Q_NULLPTR));
        tabWidget_7->setTabText(tabWidget_7->indexOf(tab_9), QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        ID_5->setPlaceholderText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        supprimerp->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        tabWidget_7->setTabText(tabWidget_7->indexOf(tab_8), QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("MainWindow", "cancel", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "information patient", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Gestion  d'ajout", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Code de rendez-vous", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Docteur", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "sevice", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Id Patient", Q_NULLPTR));
        pb_ajouter_2->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_13), QApplication::translate("MainWindow", "Ajouter RDV", Q_NULLPTR));
        afficher_2->setText(QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        Rechercher->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        pushButton_45->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        lineEdit_aff_coderdv->setPlaceholderText(QApplication::translate("MainWindow", "code_rdv", Q_NULLPTR));
        pb_aff_rdv->setText(QApplication::translate("MainWindow", "rechercher code", Q_NULLPTR));
        lineEdit_aff_doc->setPlaceholderText(QApplication::translate("MainWindow", "dorcteur", Q_NULLPTR));
        pb_aff_rdv_2->setText(QApplication::translate("MainWindow", "rechercher docteur", Q_NULLPTR));
        lineEdit_aff_ID->setPlaceholderText(QApplication::translate("MainWindow", "ID_P", Q_NULLPTR));
        pb_aff_rdv_3->setText(QApplication::translate("MainWindow", "rechercher ID", Q_NULLPTR));
        Trie->setText(QApplication::translate("MainWindow", "Trie", Q_NULLPTR));
        pushButton_46->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        pb_desc_tri_3->setText(QApplication::translate("MainWindow", "Descendant ID", Q_NULLPTR));
        pb_desc_tri_4->setText(QApplication::translate("MainWindow", "Descendant doctor", Q_NULLPTR));
        pb_asc_tri_4->setText(QApplication::translate("MainWindow", "Ascendant doctor", Q_NULLPTR));
        pb_desc_tri->setText(QApplication::translate("MainWindow", "Descendant code", Q_NULLPTR));
        pb_asc_tri_3->setText(QApplication::translate("MainWindow", "Ascendant ID", Q_NULLPTR));
        pb_asc_tri->setText(QApplication::translate("MainWindow", "Ascendant code", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_14), QApplication::translate("MainWindow", "Afficher RDV", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Gestion  de modification", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Code de rendez-vous", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Docteur", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "sevice", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Id Patient", Q_NULLPTR));
        pb_modifierrdv->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_11), QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        supprimerr->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        CodeRDV_2->setPlaceholderText(QApplication::translate("MainWindow", "CodeRDV", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_10), QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "time", Q_NULLPTR));
        cancelButton_2->setText(QApplication::translate("MainWindow", "cancel", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "rendez-vous", Q_NULLPTR));
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "gestion des patients", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
