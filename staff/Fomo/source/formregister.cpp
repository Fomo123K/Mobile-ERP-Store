#include "formregister.h"
#include "ui_formregister.h"

formregister::formregister(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formregister)
{
    ui->setupUi(this);
    ui->lineEdit->setEchoMode(QLineEdit::Password);
}

formregister::~formregister()
{
    delete ui;
}
