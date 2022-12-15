#ifndef DATABASE_H
#define DATABASE_H
#include <QSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QString>
#include <QSqlQuery>

class Database{
public:
    Database(const QString &path){
        QSqlDatabase  Atten;
        Atten = QSqlDatabase::addDatabase("QSQLITE");
        Atten.setHostName("localHost");
        Atten.setDatabaseName(path);

        if(!Atten.open()){
            qDebug()<<("Database Disconected ...");
        }
        else{
            qDebug()<<("Database connected ...");
        }
    }
    bool Register(){
        bool success = true;
        return success;
    }

};

#endif // DATABASE_H
