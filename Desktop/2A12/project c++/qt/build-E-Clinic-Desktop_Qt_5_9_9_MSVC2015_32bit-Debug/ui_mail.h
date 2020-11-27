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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_print
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonClear;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSend;
    QGroupBox *groupBoxFrom;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelEmailFrom;
    QLineEdit *lineEditEmailFrom;
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
    QGroupBox *groupBoxTo;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelEmail;
    QLineEdit *lineEditEmailTo;
    QGroupBox *groupBoxMessage;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelSubject;
    QLineEdit *lineEditSubject;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelContent;
    QTextEdit *textEditContent;

    void setupUi(QDialog *print)
    {
        if (print->objectName().isEmpty())
            print->setObjectName(QStringLiteral("print"));
        print->resize(477, 613);
        layoutWidget = new QWidget(print);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 550, 260, 50));
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

        groupBoxFrom = new QGroupBox(print);
        groupBoxFrom->setObjectName(QStringLiteral("groupBoxFrom"));
        groupBoxFrom->setGeometry(QRect(0, 120, 478, 74));
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

        groupBoxCredentials = new QGroupBox(print);
        groupBoxCredentials->setObjectName(QStringLiteral("groupBoxCredentials"));
        groupBoxCredentials->setGeometry(QRect(0, 0, 478, 119));
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

        groupBoxTo = new QGroupBox(print);
        groupBoxTo->setObjectName(QStringLiteral("groupBoxTo"));
        groupBoxTo->setGeometry(QRect(0, 190, 478, 74));
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

        groupBoxMessage = new QGroupBox(print);
        groupBoxMessage->setObjectName(QStringLiteral("groupBoxMessage"));
        groupBoxMessage->setGeometry(QRect(0, 260, 478, 250));
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


        retranslateUi(print);

        QMetaObject::connectSlotsByName(print);
    } // setupUi

    void retranslateUi(QDialog *print)
    {
        print->setWindowTitle(QApplication::translate("print", "Dialog", Q_NULLPTR));
        pushButtonClear->setText(QApplication::translate("print", "Clear", Q_NULLPTR));
        pushButtonSend->setText(QApplication::translate("print", "Send", Q_NULLPTR));
        groupBoxFrom->setTitle(QApplication::translate("print", "From", Q_NULLPTR));
        labelEmailFrom->setText(QApplication::translate("print", "E-mail", Q_NULLPTR));
        groupBoxCredentials->setTitle(QApplication::translate("print", "From", Q_NULLPTR));
        lineEditHost->setText(QApplication::translate("print", "smtp.gmail.com", Q_NULLPTR));
        labelEmailCredentials->setText(QApplication::translate("print", "E-mail", Q_NULLPTR));
        labelHost->setText(QApplication::translate("print", "Host", Q_NULLPTR));
        labelPasswordCredentials->setText(QApplication::translate("print", "Password", Q_NULLPTR));
        labelPort->setText(QApplication::translate("print", "Port", Q_NULLPTR));
        groupBoxTo->setTitle(QApplication::translate("print", "To", Q_NULLPTR));
        labelEmail->setText(QApplication::translate("print", "E-mail", Q_NULLPTR));
        groupBoxMessage->setTitle(QApplication::translate("print", "Message", Q_NULLPTR));
        labelSubject->setText(QApplication::translate("print", "Subject", Q_NULLPTR));
        labelContent->setText(QApplication::translate("print", "Content", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class print: public Ui_print {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIL_H
