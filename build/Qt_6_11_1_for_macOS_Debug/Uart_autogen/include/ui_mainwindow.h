/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QLineEdit *lineEdit5;
    QLineEdit *lineEdit4;
    QLineEdit *lineEdit3;
    QLineEdit *lineEdit2;
    QLineEdit *lineEdit1;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(200, 190, 211, 101));
        lineEdit5 = new QLineEdit(centralwidget);
        lineEdit5->setObjectName("lineEdit5");
        lineEdit5->setGeometry(QRect(200, 170, 211, 21));
        lineEdit4 = new QLineEdit(centralwidget);
        lineEdit4->setObjectName("lineEdit4");
        lineEdit4->setGeometry(QRect(200, 150, 211, 21));
        lineEdit3 = new QLineEdit(centralwidget);
        lineEdit3->setObjectName("lineEdit3");
        lineEdit3->setGeometry(QRect(200, 130, 211, 21));
        lineEdit2 = new QLineEdit(centralwidget);
        lineEdit2->setObjectName("lineEdit2");
        lineEdit2->setGeometry(QRect(200, 110, 211, 21));
        lineEdit1 = new QLineEdit(centralwidget);
        lineEdit1->setObjectName("lineEdit1");
        lineEdit1->setGeometry(QRect(200, 90, 211, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 290, 111, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 33));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
