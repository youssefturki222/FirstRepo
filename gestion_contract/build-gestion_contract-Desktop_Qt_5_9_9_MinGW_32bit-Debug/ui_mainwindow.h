/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QLineEdit *id;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QDateEdit *dateSign;
    QLabel *label_3;
    QDateEdit *dateStart;
    QLabel *label_4;
    QDateEdit *dateEnd;
    QComboBox *type;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ajouter;
    QPushButton *modifier;
    QPushButton *supprimer;
    QLabel *label_5;
    QLabel *conect;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(895, 456);
        MainWindow->setStyleSheet(QLatin1String("  QMainWindow {\n"
"            background-color: #f2f2f2;\n"
"        }\n"
"\n"
"        QToolBar {\n"
"            background-color: #333333;\n"
"            color: #ffffff;\n"
"            border: none;\n"
"            spacing: 6px;\n"
"        }\n"
"\n"
"        QToolBar QToolButton {\n"
"            background-color: #333333;\n"
"            color: #ffffff;\n"
"            border: none;\n"
"            padding: 6px;\n"
"        }\n"
"\n"
"        QToolBar QToolButton:hover {\n"
"            background-color: #555555;\n"
"        }\n"
"\n"
"        QToolBar QToolButton:pressed {\n"
"            background-color: #222222;\n"
"        }"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(460, 60, 411, 331));
        id = new QLineEdit(centralwidget);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(40, 60, 113, 20));
        id->setStyleSheet(QLatin1String(" QLineEdit {\n"
"            background-color: #303030;\n"
"            color: #ffffff;\n"
"            border: none;\n"
"            padding: 8px;\n"
"            font-size: 14px;\n"
"            border-radius: 5px;\n"
"        }\n"
"\n"
"        QLineEdit:focus {\n"
"            border: 2px solid #00a8e8;\n"
"        }"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(40, 90, 365, 161));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("color: #2C3E50;\n"
"font-size:15px;\n"
"font:bold;\n"
"font-family : century gothic;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("color: #2C3E50;\n"
"font-size:15px;\n"
"font:bold;\n"
"font-family : century gothic;"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        dateSign = new QDateEdit(formLayoutWidget);
        dateSign->setObjectName(QStringLiteral("dateSign"));
        dateSign->setStyleSheet(QLatin1String("QDateEdit {\n"
"    background-color: #303030; /* Widget background color */\n"
"    color: #ffffff; /* Widget text color */\n"
"    border: none; /* Remove the default widget border */\n"
"    padding: 8px; /* Set padding around the widget */\n"
"    font-size: 14px; /* Set the font size */\n"
"    border-radius: 5px; /* Add rounded corners */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: center right;\n"
"    width: 30px;\n"
"    border: none; /* Remove the default drop-down button border */\n"
"    background-color: transparent; /* Make the drop-down button transparent */\n"
"}\n"
"\n"
"QDateEdit::drop-down:hover {\n"
"    background-color: #393939; /* Drop-down button background color on hover */\n"
"}\n"
"\n"
"QDateEdit::drop-down::icon {\n"
"    image: url(:/icons/calendar_icon.png); /* Replace with your calendar icon */\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dateSign);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("color: #2C3E50;\n"
"font-size:15px;\n"
"font:bold;\n"
"font-family : century gothic;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        dateStart = new QDateEdit(formLayoutWidget);
        dateStart->setObjectName(QStringLiteral("dateStart"));
        dateStart->setStyleSheet(QLatin1String("QDateEdit {\n"
"    background-color: #303030; /* Widget background color */\n"
"    color: #ffffff; /* Widget text color */\n"
"    border: none; /* Remove the default widget border */\n"
"    padding: 8px; /* Set padding around the widget */\n"
"    font-size: 14px; /* Set the font size */\n"
"    border-radius: 5px; /* Add rounded corners */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: center right;\n"
"    width: 30px;\n"
"    border: none; /* Remove the default drop-down button border */\n"
"    background-color: transparent; /* Make the drop-down button transparent */\n"
"}\n"
"\n"
"QDateEdit::drop-down:hover {\n"
"    background-color: #393939; /* Drop-down button background color on hover */\n"
"}\n"
"\n"
"QDateEdit::drop-down::icon {\n"
"    image: url(:/icons/calendar_icon.png); /* Replace with your calendar icon */\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}"));

        formLayout->setWidget(2, QFormLayout::FieldRole, dateStart);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("color: #2C3E50;\n"
"font-size:15px;\n"
"font:bold;\n"
"font-family : century gothic;"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        dateEnd = new QDateEdit(formLayoutWidget);
        dateEnd->setObjectName(QStringLiteral("dateEnd"));
        dateEnd->setStyleSheet(QLatin1String("QDateEdit {\n"
"    background-color: #303030; /* Widget background color */\n"
"    color: #ffffff; /* Widget text color */\n"
"    border: none; /* Remove the default widget border */\n"
"    padding: 8px; /* Set padding around the widget */\n"
"    font-size: 14px; /* Set the font size */\n"
"    border-radius: 5px; /* Add rounded corners */\n"
"}\n"
"\n"
"QDateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: center right;\n"
"    width: 30px;\n"
"    border: none; /* Remove the default drop-down button border */\n"
"    background-color: transparent; /* Make the drop-down button transparent */\n"
"}\n"
"\n"
"QDateEdit::drop-down:hover {\n"
"    background-color: #393939; /* Drop-down button background color on hover */\n"
"}\n"
"\n"
"QDateEdit::drop-down::icon {\n"
"    image: url(:/icons/calendar_icon.png); /* Replace with your calendar icon */\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}"));

        formLayout->setWidget(3, QFormLayout::FieldRole, dateEnd);

        type = new QComboBox(formLayoutWidget);
        type->setObjectName(QStringLiteral("type"));
        type->setStyleSheet(QLatin1String("QComboBox {\n"
"    background-color: #303030; /* ComboBox background color */\n"
"    color: #ffffff; /* ComboBox text color */\n"
"    border: none; /* Remove the default ComboBox border */\n"
"    padding: 8px; /* Set padding around the ComboBox */\n"
"    font-size: 14px; /* Set the font size */\n"
"    border-radius: 5px; /* Add rounded corners */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: center right;\n"
"    width: 30px;\n"
"    border: none; /* Remove the default drop-down button border */\n"
"    background-color: transparent; /* Make the drop-down button transparent */\n"
"}\n"
"\n"
"QComboBox::drop-down:hover {\n"
"    background-color: #393939; /* Drop-down button background color on hover */\n"
"}\n"
"\n"
"QComboBox::drop-down::icon {\n"
"    image: url(:/icons/arrow_down.png); /* Replace with your drop-down arrow icon */\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}"));

        formLayout->setWidget(0, QFormLayout::FieldRole, type);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 260, 361, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ajouter = new QPushButton(horizontalLayoutWidget);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #4CAF50; /* Button background color */\n"
"    color: white; /* Button text color */\n"
"    border: none; /* Remove the default button border */\n"
"    padding: 10px 20px; /* Set padding around the button text */\n"
"    font-size: 16px; /* Set the font size */\n"
"    border-radius: 5px; /* Add rounded corners */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049; /* Button background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #367dd39; /* Button background color when pressed */\n"
"}"));

        horizontalLayout->addWidget(ajouter);

        modifier = new QPushButton(horizontalLayoutWidget);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #3498db; /* Button background color */\n"
"    color: white; /* Button text color */\n"
"    border: none; /* Remove the default button border */\n"
"    padding: 10px 20px; /* Set padding around the button text */\n"
"    font-size: 16px; /* Set the font size */\n"
"    border-radius: 5px; /* Add rounded corners */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9; /* Button background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #21618c; /* Button background color when pressed */\n"
"}"));

        horizontalLayout->addWidget(modifier);

        supprimer = new QPushButton(horizontalLayoutWidget);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #f44336; /* Button background color */\n"
"    color: white; /* Button text color */\n"
"    border: none; /* Remove the default button border */\n"
"    padding: 10px 20px; /* Set padding around the button text */\n"
"    font-size: 16px; /* Set the font size */\n"
"    border-radius: 5px; /* Add rounded corners */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e53935; /* Button background color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #c62828; /* Button background color when pressed */\n"
"}"));

        horizontalLayout->addWidget(supprimer);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(630, 10, 81, 16));
        label_5->setStyleSheet(QLatin1String("color: #2C3E50;\n"
"font-size:15px;\n"
"font:bold;\n"
"font-family : century gothic;"));
        conect = new QLabel(centralwidget);
        conect->setObjectName(QStringLiteral("conect"));
        conect->setGeometry(QRect(70, 370, 141, 16));
        conect->setStyleSheet(QLatin1String("QLabel{\n"
"color:rgb(0, 170, 0);\n"
"font-size:20px;\n"
"font:bold;\n"
"font-family : century gothic;\n"
"}"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(470, 30, 191, 21));
        lineEdit->setStyleSheet(QLatin1String(" QLineEdit {\n"
"            background-color: #303030;\n"
"            color: #ffffff;\n"
"            border: none;\n"
"            padding: 8px;\n"
"            font-size: 14px;\n"
"            border-radius: 5px;\n"
"        }\n"
"\n"
"        QLineEdit:focus {\n"
"            border: 2px solid #00a8e8;\n"
"        }"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(670, 30, 91, 22));
        comboBox->setStyleSheet(QLatin1String("QComboBox {\n"
"    background-color: #303030; /* ComboBox background color */\n"
"    color: #ffffff; /* ComboBox text color */\n"
"    border: none; /* Remove the default ComboBox border */\n"
"    padding: 4px; /* Set padding around the ComboBox */\n"
"    font-size: 14px; /* Set the font size */\n"
"    border-radius: 5px; /* Add rounded corners */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: center right;\n"
"    width: 30px;\n"
"    border: none; /* Remove the default drop-down button border */\n"
"    background-color: transparent; /* Make the drop-down button transparent */\n"
"}\n"
"\n"
"QComboBox::drop-down:hover {\n"
"    background-color: #393939; /* Drop-down button background color on hover */\n"
"}\n"
"\n"
"QComboBox::drop-down::icon {\n"
"    image: url(:/icons/arrow_down.png); /* Replace with your drop-down arrow icon */\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 895, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Date de Signature", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Date de Debut", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Date de Fin", Q_NULLPTR));
        type->clear();
        type->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Choisir", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Type1", Q_NULLPTR)
        );
        ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        modifier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        supprimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Contracts", Q_NULLPTR));
        conect->setText(QApplication::translate("MainWindow", "connection", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Critere 1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Critere 2", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
