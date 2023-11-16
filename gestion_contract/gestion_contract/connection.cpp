#include "connection.h"

connection::connection(){}

bool connection::createconnection()
{
    db = QSqlDatabase::addDatabase("QODBC");
    bool test=false;
    db.setDatabaseName("gestion_contrat");
    db.setUserName("youcef");
    db.setPassword("azerty");
    if(db.open()) test=true;
    return test;
}

void connection::closeconnection(){db.close();}

