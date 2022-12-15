#ifndef REGISTRATIONFORM_H
#define REGISTRATIONFORM_H

#include<QDialog>
#include<QtSql/QSqlDatabase>
#include<QString>
#include<QDebug>
#include<QtSql>



#include <QDialog>

namespace Ui {
class registrationform;
}

class registrationform : public QDialog
{
    Q_OBJECT










public:
    explicit registrationform(QWidget *parent = nullptr);
    ~registrationform();

private:
    Ui::registrationform *ui;
};

#endif // REGISTRATIONFORM_H
