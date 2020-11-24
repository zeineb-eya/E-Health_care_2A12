#ifndef DIALOG2_H
#define DIALOG2_H
#include"mainwindow.h"
#include <QDialog>

namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog2(QWidget *parent = nullptr);
    void setname(QString);
    void setlastname(QString);
    void setCIN(QString);
    ~Dialog2();

private:
    Ui::Dialog2 *ui;
    QString name,lastname,CIN;
};

#endif // DIALOG2_H
