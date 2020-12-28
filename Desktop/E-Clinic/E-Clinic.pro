QT       += core gui sql
QT       += core gui sql printsupport
QT       += core gui network
QT       += core gui sql multimedia printsupport
QT       += core gui widgets texttospeech
#https://github.com/zeineb-eya/E-Health_care_2A12.git
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

TARGET = E-Clinic.pro
TEMPLATE = app

include( $$PWD/C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/SMTPClient.pri )
# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    SMTPClient/email.cpp \
    SMTPClient/emailaddress.cpp \
    SMTPClient/smtpclient.cpp \
    connexion.cpp \
    mail.cpp \
    main.cpp \
    mainwindow.cpp \
    patient.cpp \
    rdv.cpp

HEADERS += \
    SMTPClient/email.h \
    SMTPClient/emailaddress.h \
    SMTPClient/smtpclient.h \
    connexion.h \
    mail.h \
    mainwindow.h \
    patient.h \
    rdv.h

FORMS += \
    mail.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../../../Executable File2/E-Clinic.pro.exe \
    Click.mp3 \
    Mortified.mp3 \
    SMTPClient/SMTPClient.pri

RESOURCES += \
    resource.qrc
