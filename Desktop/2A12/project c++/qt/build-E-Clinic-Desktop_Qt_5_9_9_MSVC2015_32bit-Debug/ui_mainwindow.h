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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
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
    QWidget *tab_8;
    QPushButton *quiter_3;
    QLineEdit *ID_5;
    QPushButton *supprimerp;
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
    QWidget *tab_3;
    QPushButton *pb_aff_client;
    QLineEdit *lineEdit_aff_idpatient;
    QTableView *tab_aff_patient;
    QWidget *tab_53;
    QPushButton *pb_asc_tri_2;
    QPushButton *pb_desc_tri_2;
    QTableView *tmppatient_tri;
    QWidget *tab_4;
    QTabWidget *tabWidget_5;
    QWidget *tab_14;
    QTableView *tab_rdv;
    QWidget *tab_13;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *ID_3;
    QLineEdit *CodeRDV;
    QLineEdit *Docteur;
    QLineEdit *Service;
    QLineEdit *dateEdit_4;
    QLineEdit *timeEdit;
    QPushButton *pb_ajouter_2;
    QCalendarWidget *calendarWidget_2;
    QWidget *tab_19;
    QTableView *tmprdv_tri;
    QPushButton *pb_asc_tri;
    QPushButton *pb_desc_tri;
    QWidget *tab_7;
    QGroupBox *groupBoxMessage;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelSubject;
    QLineEdit *lineEditSubject;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelContent;
    QTextEdit *textEditContent;
    QGroupBox *groupBoxFrom;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelEmailFrom;
    QLineEdit *lineEditEmailFrom;
    QGroupBox *groupBoxTo;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelEmail;
    QLineEdit *lineEditEmailTo;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonClear;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSend;
    QGroupBox *groupBoxCredentials;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEditHost;
    QLabel *labelEmailCredentials;
    QSpinBox *spinBoxPort;
    QLineEdit *lineEditPasswordCredentials;
    QLineEdit *lineEditEmailCredentials;
    QLabel *labelHost;
    QLabel *labelPasswordCredentials;
    QLabel *labelPort;
    QWidget *tab_10;
    QPushButton *supprimerr;
    QLineEdit *CodeRDV_2;
    QPushButton *quiter_2;
    QWidget *tab_11;
    QCalendarWidget *calendarWidget_4;
    QGroupBox *groupBox_4;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *ID_4;
    QLineEdit *CodeRDV_3;
    QLineEdit *Docteur_3;
    QLineEdit *Service_3;
    QLineEdit *dateEdit_5;
    QLineEdit *timeEdit_2;
    QPushButton *pb_modifier;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(875, 586);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 851, 471));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(-10, 0, 861, 451));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget_7 = new QTabWidget(tab_5);
        tabWidget_7->setObjectName(QStringLiteral("tabWidget_7"));
        tabWidget_7->setGeometry(QRect(0, 0, 861, 431));
        tab_20 = new QWidget();
        tab_20->setObjectName(QStringLiteral("tab_20"));
        tabWidget_8 = new QTabWidget(tab_20);
        tabWidget_8->setObjectName(QStringLiteral("tabWidget_8"));
        tabWidget_8->setGeometry(QRect(10, 0, 721, 371));
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
        tabWidget_8->addTab(tab_2, QString());
        tabWidget_7->addTab(tab_20, QString());
        tab_21 = new QWidget();
        tab_21->setObjectName(QStringLiteral("tab_21"));
        tab_patients = new QTableView(tab_21);
        tab_patients->setObjectName(QStringLiteral("tab_patients"));
        tab_patients->setGeometry(QRect(10, 30, 781, 301));
        pushButton_1 = new QPushButton(tab_21);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(350, 340, 75, 23));
        tabWidget_7->addTab(tab_21, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        quiter_3 = new QPushButton(tab_8);
        quiter_3->setObjectName(QStringLiteral("quiter_3"));
        quiter_3->setGeometry(QRect(360, 210, 75, 23));
        ID_5 = new QLineEdit(tab_8);
        ID_5->setObjectName(QStringLiteral("ID_5"));
        ID_5->setGeometry(QRect(260, 160, 281, 20));
        supprimerp = new QPushButton(tab_8);
        supprimerp->setObjectName(QStringLiteral("supprimerp"));
        supprimerp->setGeometry(QRect(370, 180, 61, 23));
        tabWidget_7->addTab(tab_8, QString());
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
        tabWidget_9->addTab(tab_6, QString());
        tabWidget_7->addTab(tab_9, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pb_aff_client = new QPushButton(tab_3);
        pb_aff_client->setObjectName(QStringLiteral("pb_aff_client"));
        pb_aff_client->setGeometry(QRect(440, 50, 111, 21));
        lineEdit_aff_idpatient = new QLineEdit(tab_3);
        lineEdit_aff_idpatient->setObjectName(QStringLiteral("lineEdit_aff_idpatient"));
        lineEdit_aff_idpatient->setGeometry(QRect(160, 50, 113, 21));
        tab_aff_patient = new QTableView(tab_3);
        tab_aff_patient->setObjectName(QStringLiteral("tab_aff_patient"));
        tab_aff_patient->setGeometry(QRect(60, 110, 611, 241));
        tabWidget_7->addTab(tab_3, QString());
        tab_53 = new QWidget();
        tab_53->setObjectName(QStringLiteral("tab_53"));
        pb_asc_tri_2 = new QPushButton(tab_53);
        pb_asc_tri_2->setObjectName(QStringLiteral("pb_asc_tri_2"));
        pb_asc_tri_2->setGeometry(QRect(166, 10, 91, 23));
        pb_desc_tri_2 = new QPushButton(tab_53);
        pb_desc_tri_2->setObjectName(QStringLiteral("pb_desc_tri_2"));
        pb_desc_tri_2->setGeometry(QRect(340, 10, 91, 23));
        tmppatient_tri = new QTableView(tab_53);
        tmppatient_tri->setObjectName(QStringLiteral("tmppatient_tri"));
        tmppatient_tri->setGeometry(QRect(20, 50, 631, 321));
        tabWidget_7->addTab(tab_53, QString());
        tabWidget_2->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget_5 = new QTabWidget(tab_4);
        tabWidget_5->setObjectName(QStringLiteral("tabWidget_5"));
        tabWidget_5->setGeometry(QRect(0, 0, 821, 401));
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        tab_rdv = new QTableView(tab_14);
        tab_rdv->setObjectName(QStringLiteral("tab_rdv"));
        tab_rdv->setGeometry(QRect(10, 20, 771, 331));
        tabWidget_5->addTab(tab_14, QString());
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
        ID_3 = new QLineEdit(groupBox_2);
        ID_3->setObjectName(QStringLiteral("ID_3"));
        ID_3->setGeometry(QRect(210, 150, 113, 20));
        CodeRDV = new QLineEdit(groupBox_2);
        CodeRDV->setObjectName(QStringLiteral("CodeRDV"));
        CodeRDV->setGeometry(QRect(210, 30, 113, 20));
        Docteur = new QLineEdit(groupBox_2);
        Docteur->setObjectName(QStringLiteral("Docteur"));
        Docteur->setGeometry(QRect(210, 60, 113, 20));
        Service = new QLineEdit(groupBox_2);
        Service->setObjectName(QStringLiteral("Service"));
        Service->setGeometry(QRect(210, 120, 113, 20));
        dateEdit_4 = new QLineEdit(groupBox_2);
        dateEdit_4->setObjectName(QStringLiteral("dateEdit_4"));
        dateEdit_4->setGeometry(QRect(150, 90, 113, 20));
        timeEdit = new QLineEdit(groupBox_2);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(280, 90, 113, 20));
        pb_ajouter_2 = new QPushButton(groupBox_2);
        pb_ajouter_2->setObjectName(QStringLiteral("pb_ajouter_2"));
        pb_ajouter_2->setGeometry(QRect(310, 200, 75, 23));
        calendarWidget_2 = new QCalendarWidget(tab_13);
        calendarWidget_2->setObjectName(QStringLiteral("calendarWidget_2"));
        calendarWidget_2->setGeometry(QRect(460, 50, 312, 183));
        tabWidget_5->addTab(tab_13, QString());
        tab_19 = new QWidget();
        tab_19->setObjectName(QStringLiteral("tab_19"));
        tmprdv_tri = new QTableView(tab_19);
        tmprdv_tri->setObjectName(QStringLiteral("tmprdv_tri"));
        tmprdv_tri->setGeometry(QRect(10, 40, 631, 321));
        pb_asc_tri = new QPushButton(tab_19);
        pb_asc_tri->setObjectName(QStringLiteral("pb_asc_tri"));
        pb_asc_tri->setGeometry(QRect(166, 10, 91, 23));
        pb_desc_tri = new QPushButton(tab_19);
        pb_desc_tri->setObjectName(QStringLiteral("pb_desc_tri"));
        pb_desc_tri->setGeometry(QRect(340, 10, 91, 23));
        tabWidget_5->addTab(tab_19, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        groupBoxMessage = new QGroupBox(tab_7);
        groupBoxMessage->setObjectName(QStringLiteral("groupBoxMessage"));
        groupBoxMessage->setGeometry(QRect(427, 9, 371, 261));
        verticalLayout_4 = new QVBoxLayout(groupBoxMessage);
        verticalLayout_4->setSpacing(9);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        labelSubject = new QLabel(groupBoxMessage);
        labelSubject->setObjectName(QStringLiteral("labelSubject"));

        verticalLayout_6->addWidget(labelSubject);

        lineEditSubject = new QLineEdit(groupBoxMessage);
        lineEditSubject->setObjectName(QStringLiteral("lineEditSubject"));

        verticalLayout_6->addWidget(lineEditSubject);


        verticalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        labelContent = new QLabel(groupBoxMessage);
        labelContent->setObjectName(QStringLiteral("labelContent"));

        verticalLayout_5->addWidget(labelContent);

        textEditContent = new QTextEdit(groupBoxMessage);
        textEditContent->setObjectName(QStringLiteral("textEditContent"));

        verticalLayout_5->addWidget(textEditContent);


        verticalLayout_4->addLayout(verticalLayout_5);

        groupBoxFrom = new QGroupBox(tab_7);
        groupBoxFrom->setObjectName(QStringLiteral("groupBoxFrom"));
        groupBoxFrom->setGeometry(QRect(0, 120, 411, 74));
        verticalLayout_8 = new QVBoxLayout(groupBoxFrom);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, 0, -1, -1);
        labelEmailFrom = new QLabel(groupBoxFrom);
        labelEmailFrom->setObjectName(QStringLiteral("labelEmailFrom"));

        verticalLayout_9->addWidget(labelEmailFrom);

        lineEditEmailFrom = new QLineEdit(groupBoxFrom);
        lineEditEmailFrom->setObjectName(QStringLiteral("lineEditEmailFrom"));

        verticalLayout_9->addWidget(lineEditEmailFrom);


        verticalLayout_8->addLayout(verticalLayout_9);

        groupBoxTo = new QGroupBox(tab_7);
        groupBoxTo->setObjectName(QStringLiteral("groupBoxTo"));
        groupBoxTo->setGeometry(QRect(0, 200, 411, 74));
        verticalLayout_3 = new QVBoxLayout(groupBoxTo);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        labelEmail = new QLabel(groupBoxTo);
        labelEmail->setObjectName(QStringLiteral("labelEmail"));

        verticalLayout_7->addWidget(labelEmail);

        lineEditEmailTo = new QLineEdit(groupBoxTo);
        lineEditEmailTo->setObjectName(QStringLiteral("lineEditEmailTo"));

        verticalLayout_7->addWidget(lineEditEmailTo);


        verticalLayout_3->addLayout(verticalLayout_7);

        layoutWidget = new QWidget(tab_7);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 320, 260, 50));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(9);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 10, 0, 10);
        pushButtonClear = new QPushButton(layoutWidget);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));
        pushButtonClear->setMinimumSize(QSize(100, 30));
        pushButtonClear->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(pushButtonClear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButtonSend = new QPushButton(layoutWidget);
        pushButtonSend->setObjectName(QStringLiteral("pushButtonSend"));
        pushButtonSend->setMinimumSize(QSize(100, 30));
        pushButtonSend->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(pushButtonSend);

        groupBoxCredentials = new QGroupBox(tab_7);
        groupBoxCredentials->setObjectName(QStringLiteral("groupBoxCredentials"));
        groupBoxCredentials->setGeometry(QRect(0, 0, 411, 111));
        verticalLayout_2 = new QVBoxLayout(groupBoxCredentials);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(9);
        gridLayout->setVerticalSpacing(6);
        lineEditHost = new QLineEdit(groupBoxCredentials);
        lineEditHost->setObjectName(QStringLiteral("lineEditHost"));

        gridLayout->addWidget(lineEditHost, 3, 1, 1, 1);

        labelEmailCredentials = new QLabel(groupBoxCredentials);
        labelEmailCredentials->setObjectName(QStringLiteral("labelEmailCredentials"));

        gridLayout->addWidget(labelEmailCredentials, 0, 1, 1, 1);

        spinBoxPort = new QSpinBox(groupBoxCredentials);
        spinBoxPort->setObjectName(QStringLiteral("spinBoxPort"));
        spinBoxPort->setMinimumSize(QSize(50, 0));
        spinBoxPort->setAlignment(Qt::AlignCenter);
        spinBoxPort->setMaximum(999999);
        spinBoxPort->setValue(465);

        gridLayout->addWidget(spinBoxPort, 3, 3, 1, 1);

        lineEditPasswordCredentials = new QLineEdit(groupBoxCredentials);
        lineEditPasswordCredentials->setObjectName(QStringLiteral("lineEditPasswordCredentials"));
        lineEditPasswordCredentials->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPasswordCredentials, 1, 3, 1, 1);

        lineEditEmailCredentials = new QLineEdit(groupBoxCredentials);
        lineEditEmailCredentials->setObjectName(QStringLiteral("lineEditEmailCredentials"));

        gridLayout->addWidget(lineEditEmailCredentials, 1, 1, 1, 1);

        labelHost = new QLabel(groupBoxCredentials);
        labelHost->setObjectName(QStringLiteral("labelHost"));

        gridLayout->addWidget(labelHost, 2, 1, 1, 1);

        labelPasswordCredentials = new QLabel(groupBoxCredentials);
        labelPasswordCredentials->setObjectName(QStringLiteral("labelPasswordCredentials"));

        gridLayout->addWidget(labelPasswordCredentials, 0, 3, 1, 1);

        labelPort = new QLabel(groupBoxCredentials);
        labelPort->setObjectName(QStringLiteral("labelPort"));

        gridLayout->addWidget(labelPort, 2, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        tabWidget_5->addTab(tab_7, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        supprimerr = new QPushButton(tab_10);
        supprimerr->setObjectName(QStringLiteral("supprimerr"));
        supprimerr->setGeometry(QRect(320, 180, 61, 23));
        CodeRDV_2 = new QLineEdit(tab_10);
        CodeRDV_2->setObjectName(QStringLiteral("CodeRDV_2"));
        CodeRDV_2->setGeometry(QRect(262, 150, 201, 20));
        quiter_2 = new QPushButton(tab_10);
        quiter_2->setObjectName(QStringLiteral("quiter_2"));
        quiter_2->setGeometry(QRect(310, 210, 75, 23));
        tabWidget_5->addTab(tab_10, QString());
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
        ID_4 = new QLineEdit(groupBox_4);
        ID_4->setObjectName(QStringLiteral("ID_4"));
        ID_4->setGeometry(QRect(210, 150, 113, 20));
        ID_4->setReadOnly(false);
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
        dateEdit_5 = new QLineEdit(groupBox_4);
        dateEdit_5->setObjectName(QStringLiteral("dateEdit_5"));
        dateEdit_5->setGeometry(QRect(150, 90, 113, 20));
        timeEdit_2 = new QLineEdit(groupBox_4);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(280, 90, 113, 20));
        pb_modifier = new QPushButton(groupBox_4);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(200, 220, 151, 23));
        tabWidget_5->addTab(tab_11, QString());
        tabWidget_2->addTab(tab_4, QString());
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
        tabWidget_2->setCurrentIndex(0);
        tabWidget_7->setCurrentIndex(3);
        tabWidget_8->setCurrentIndex(0);
        tabWidget_9->setCurrentIndex(0);
        tabWidget_5->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
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
        tabWidget_7->setTabText(tabWidget_7->indexOf(tab_21), QApplication::translate("MainWindow", "Afficher patient", Q_NULLPTR));
        quiter_3->setText(QApplication::translate("MainWindow", "Quiter", Q_NULLPTR));
        ID_5->setPlaceholderText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        supprimerp->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        tabWidget_7->setTabText(tabWidget_7->indexOf(tab_8), QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
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
        pb_aff_client->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        lineEdit_aff_idpatient->setPlaceholderText(QApplication::translate("MainWindow", "ID patient", Q_NULLPTR));
        tabWidget_7->setTabText(tabWidget_7->indexOf(tab_3), QApplication::translate("MainWindow", "recherche par id", Q_NULLPTR));
        pb_asc_tri_2->setText(QApplication::translate("MainWindow", "Ascendant ", Q_NULLPTR));
        pb_desc_tri_2->setText(QApplication::translate("MainWindow", "Descendant", Q_NULLPTR));
        tabWidget_7->setTabText(tabWidget_7->indexOf(tab_53), QApplication::translate("MainWindow", "Trie par type", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "information patient", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_14), QApplication::translate("MainWindow", "Afficher RDV", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Gestion  d'ajout", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Code de rendez-vous", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Docteur", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "sevice", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Id Patient", Q_NULLPTR));
        pb_ajouter_2->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_13), QApplication::translate("MainWindow", "Ajouter RDV", Q_NULLPTR));
        pb_asc_tri->setText(QApplication::translate("MainWindow", "Ascendant ", Q_NULLPTR));
        pb_desc_tri->setText(QApplication::translate("MainWindow", "Descendant", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_19), QApplication::translate("MainWindow", "Trie par date", Q_NULLPTR));
        groupBoxMessage->setTitle(QApplication::translate("MainWindow", "Message", Q_NULLPTR));
        labelSubject->setText(QApplication::translate("MainWindow", "Subject", Q_NULLPTR));
        labelContent->setText(QApplication::translate("MainWindow", "Content", Q_NULLPTR));
        groupBoxFrom->setTitle(QApplication::translate("MainWindow", "From", Q_NULLPTR));
        labelEmailFrom->setText(QApplication::translate("MainWindow", "E-mail", Q_NULLPTR));
        groupBoxTo->setTitle(QApplication::translate("MainWindow", "To", Q_NULLPTR));
        labelEmail->setText(QApplication::translate("MainWindow", "E-mail", Q_NULLPTR));
        pushButtonClear->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        pushButtonSend->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        groupBoxCredentials->setTitle(QApplication::translate("MainWindow", "From", Q_NULLPTR));
        lineEditHost->setText(QApplication::translate("MainWindow", "smtp.gmail.com", Q_NULLPTR));
        labelEmailCredentials->setText(QApplication::translate("MainWindow", "E-mail", Q_NULLPTR));
        labelHost->setText(QApplication::translate("MainWindow", "Host", Q_NULLPTR));
        labelPasswordCredentials->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        labelPort->setText(QApplication::translate("MainWindow", "Port", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_7), QApplication::translate("MainWindow", "mail", Q_NULLPTR));
        supprimerr->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        CodeRDV_2->setPlaceholderText(QApplication::translate("MainWindow", "CodeRDV", Q_NULLPTR));
        quiter_2->setText(QApplication::translate("MainWindow", "Quiter", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_10), QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Gestion  de modification", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Code de rendez-vous", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Docteur", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Date", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "sevice", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Id Patient", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_11), QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "rendez-vous", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "gestion des patients", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
