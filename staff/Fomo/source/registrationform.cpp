#include "registrationform.h"
#include "ui_registrationform.h"

registrationform::registrationform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrationform)
{
    ui->setupUi(this);
    ui->lineEdit->setEchoMode(QLineEdit::Password);
}

registrationform::~registrationform()
{
    delete ui;
}
