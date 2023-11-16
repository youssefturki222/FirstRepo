#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "contract.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Contracts");
    //verifi la conection avec db
    connection c;
    bool test = c.createconnection();
    if (test){
        ui->conect->setText("Connecté ✓");
        contract c;
        ui->tableView->setModel(c.Afficher());
    }
    else{
         ui->conect->setStyleSheet("color:#f44336;font-size:20px;font:bold;font-family : century gothic;");
        ui->conect->setText("Echec X");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ajouter_clicked()
{
    QString type = ui->type->currentText();
    QString date =ui->dateSign->date().toString("yyyy-MM-dd");
    QString date2 =ui->dateStart->date().toString("yyyy-MM-dd");
    QString date3 =ui->dateEnd->date().toString("yyyy-MM-dd");


        //refresh
        contract con(0,type,date,date2,date3);
        bool test= con.AjouterContract();
        if(test){
        ui->tableView->setModel(con.Afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                     QObject::tr("Ajout effectué\n"
                                 "Click cancel to exit."),QMessageBox::Cancel);
        ui->type->setCurrentIndex(0);
        ui->dateSign->clear();
        ui->dateStart->clear();
        ui->dateEnd->clear();
        }
        else{

            QMessageBox::critical(nullptr,QObject::tr("NOT OK"),
                                     QObject::tr("Ajout non effectuée\n"
                                                 "Click Cancel to exit."),QMessageBox::Cancel);
        }

}

void MainWindow::on_supprimer_clicked()
{
    int id = ui->id->text().toInt();
    contract c;
    c.setID(id);
    bool test =c.SupprimerContract();



    if(test){
        ui->tableView->setModel(c.Afficher());
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("Suppression effectuée\n"
                                             "Click Cancel to exit."),QMessageBox::Cancel);
         ui->type->setCurrentIndex(0);
        ui->dateSign->clear();
        ui->dateStart->clear();
        ui->dateEnd->clear();
    }
    else {
        QMessageBox::critical(nullptr,QObject::tr("NOT OK"),
                                 QObject::tr("Suppression non effectuée\n"
                                             "Click Cancel to exit."),QMessageBox::Cancel);
    }
}

void MainWindow::on_tableView_activated(const QModelIndex &index)
{
        QString value = ui->tableView->model()->data(index).toString();
        ui->id->setText(value);
        connection c;
        c.closeconnection();
        QSqlQuery qry;

        qry.prepare("select type,dateSign,dateStart,dateEnd from contracts where code_contract='"+value+"'");
        if(qry.exec())
        {
            while(qry.next())
            {
                QString dates =qry.value(1).toString();
                QDate date = QDate::fromString(dates,"yyyy-MM-dd");
                ui->dateSign->setDate(date);

                dates =qry.value(2).toString();
                date = QDate::fromString(dates,"yyyy-MM-dd");
                ui->dateStart->setDate(date);

                dates =qry.value(3).toString();
                date = QDate::fromString(dates,"yyyy-MM-dd");
                ui->dateEnd->setDate(date);
            }
        }

}

void MainWindow::on_modifier_clicked()
{
 int id = ui->id->text().toInt();
    QString type = ui->type->currentText();
    QString date =ui->dateSign->date().toString("yyyy-MM-dd");
    QString date2 =ui->dateStart->date().toString("yyyy-MM-dd");
    QString date3 =ui->dateEnd->date().toString("yyyy-MM-dd");

        //refresh
        contract con(id,type,date,date2,date3);

        bool test=con.ModifierContract();
        if(test){
        ui->tableView->setModel(con.Afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                     QObject::tr("Modification effectué\n"
                                 "Click cancel to exit."),QMessageBox::Cancel);
        ui->type->setCurrentIndex(0);
        ui->dateSign->clear();
        ui->dateStart->clear();
        ui->dateEnd->clear();
        ui->id->clear(); }
else {
    QMessageBox::critical(nullptr,QObject::tr("NOT OK"),
                             QObject::tr("Modification non effectuée\n"
                                         "Click Cancel to exit."),QMessageBox::Cancel);
}


}

void MainWindow::on_ajouter_toggled(bool checked)
{

}
