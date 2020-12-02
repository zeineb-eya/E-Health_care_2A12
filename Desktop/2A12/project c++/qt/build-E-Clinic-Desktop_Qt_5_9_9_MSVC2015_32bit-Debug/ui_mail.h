/********************************************************************************
** Form generated from reading UI file 'mail.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIL_H
#define UI_MAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_mail
{
public:

    void setupUi(QDialog *mail)
    {
        if (mail->objectName().isEmpty())
            mail->setObjectName(QStringLiteral("mail"));
        mail->resize(893, 521);

        retranslateUi(mail);

        QMetaObject::connectSlotsByName(mail);
    } // setupUi

    void retranslateUi(QDialog *mail)
    {
        mail->setWindowTitle(QApplication::translate("mail", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mail: public Ui_mail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIL_H
