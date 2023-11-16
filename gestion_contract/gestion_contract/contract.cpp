#include "contract.h"

contract::contract()
{

}
bool contract::AjouterContract()
{
    QSqlQuery query;

    query.prepare("insert into contracts (type,dateSign,dateStart,dateEnd) values (:type,:dateSi,:dateSa,:dateF)");

     query.bindValue(":type",type);
     query.bindValue(":dateSi",dateSign);
     query.bindValue(":dateSa",dateStart);
     query.bindValue(":dateF",dateEnd);

     return query.exec();
}
QSqlQueryModel *contract::Afficher()
{
     QSqlQueryModel *modal=new QSqlQueryModel();

         modal->setQuery("select * from contracts ");
         modal->setHeaderData(0,Qt::Horizontal,QObject::tr("code_contract"));
         return modal;
}

bool contract::ModifierContract()
{
    QSqlQuery query;
    query.prepare("update contracts set type=:t,dateSign=:d1,dateStart=:d2,dateEnd=:d3 where code_contract=:id");
    query.bindValue(":id",code_contract);
    query.bindValue(":t",type);
    query.bindValue(":d1",dateSign);
    query.bindValue(":d2",dateStart);
    query.bindValue(":d3",dateEnd);
    return query.exec();
}

bool contract::SupprimerContract()
{
    QSqlQuery query;
    query.prepare("delete from contracts where code_contract=:id");
    query.bindValue(":id",code_contract);
    return query.exec();
}
