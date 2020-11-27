#ifndef PRINT_H
#define PRINT_H

#include <QDialog>
#include <QString>
#include <QMainWindow>
#include <QMessageBox>

#include "C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/SMTPClient/email.h"
#include "C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/SMTPClient/smtpclient.h"
#include "C:/Users/HP/Desktop/2A12/project c++/qt/E-Clinic/SMTPClient/emailaddress.h"
namespace Ui {
class print;
}

class print : public QDialog
{
    Q_OBJECT

public:
    explicit print(QWidget *parent = nullptr);
    ~print();

private slots:
    void sendEmail();
    void clearFields();

    void onStatus(Status::e status, QString errorMessage);

private:
    Email createEmail();

private:
     Ui::print *ui;
    SMTPClient *client_;
};
#endif // PRINT_H
