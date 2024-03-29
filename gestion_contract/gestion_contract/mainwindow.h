#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_ajouter_clicked();
    
    void on_supprimer_clicked();
    
    void on_tableView_activated(const QModelIndex &index);
    
    void on_modifier_clicked();

    void on_ajouter_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    void on_Ajouter_clicked();
};
#endif // MAINWINDOW_H
