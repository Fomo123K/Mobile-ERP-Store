#ifndef STAFF_ATTENDANCE_H
#define STAFF_ATTENDANCE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Staff_Attendance; }
QT_END_NAMESPACE

class Staff_Attendance : public QMainWindow
{
    Q_OBJECT

public:
    Staff_Attendance(QWidget *parent = nullptr);
    ~Staff_Attendance();

private:
    Ui::Staff_Attendance *ui;
};
#endif // STAFF_ATTENDANCE_H
