#ifndef FORMREGISTER_H
#define FORMREGISTER_H

#include <QDialog>

namespace Ui {
class formregister;
}

class formregister : public QDialog
{
    Q_OBJECT

public:
    explicit formregister(QWidget *parent = nullptr);
    ~formregister();

private:
    Ui::formregister *ui;
};

#endif // FORMREGISTER_H
