#include "staff_attendance.h"
#include "ui_staff_attendance.h"


Staff_Attendance::Staff_Attendance(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Staff_Attendance)
{
    ui->setupUi(this);

}

Staff_Attendance::~Staff_Attendance()
{
    delete ui;
}

