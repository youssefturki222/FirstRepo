#ifndef CONTRACT_H
#define CONTRACT_H
#include<qstring.h>
#include<QtSql/QSqlQuery>
#include<QtSql/qsqlquerymodel.h>
#include<QMessageBox>
#include"connection.h"
#include<QDate>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QGridLayout>


class contract
{
private:
    int code_contract;
    QString type;
    QString dateSign;
    QString dateStart;
    QString dateEnd;
public:
    contract();
    //constructor
    contract(int id,QString type,QString dateSign,QString dateStart,QString dateEnd)
   {
       this->code_contract=id;
       this->type=type;
       this->dateSign=dateSign;
       this->dateStart=dateStart;
       this->dateEnd=dateEnd;
   }
    //setters
    void setID(int i){code_contract=i;}
    void setType(QString n){type=n;}
    void setDateSign(QString n){dateSign=n;}
    void setDateStart(QString n){dateStart=n;}
    void setDateEnd(QString n){dateEnd=n;}

    //getters

    int getID(){return code_contract;}
    QString getType(){return type;}
    QString getDateSign(){return dateSign;}
    QString getDateStart(){return dateStart;}
    QString getDateEnd(){return dateEnd;}

    bool AjouterContract();
    QSqlQueryModel *Afficher();
    bool ModifierContract();
    bool SupprimerContract();
    QSqlQueryModel *Rechercher(QString value );
    QSqlQueryModel *Trier(QString croissance,QString critere);


};

#endif // CONTRACT_H
