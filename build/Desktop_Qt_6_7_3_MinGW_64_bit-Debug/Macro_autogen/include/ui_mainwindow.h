/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *tapBtn;
    QPushButton *delayBtn;
    QTextEdit *commandInterpreter;
    QPushButton *executeBtn;
    QPushButton *loopBtn;
    QPushButton *searchBtn;
    QPushButton *typeBtn;
    QPushButton *copyBtn;
    QPushButton *destroyBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 496);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tapBtn = new QPushButton(centralwidget);
        tapBtn->setObjectName("tapBtn");
        tapBtn->setGeometry(QRect(30, 40, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Poppins")});
        font.setPointSize(12);
        tapBtn->setFont(font);
        delayBtn = new QPushButton(centralwidget);
        delayBtn->setObjectName("delayBtn");
        delayBtn->setGeometry(QRect(30, 80, 91, 31));
        delayBtn->setFont(font);
        commandInterpreter = new QTextEdit(centralwidget);
        commandInterpreter->setObjectName("commandInterpreter");
        commandInterpreter->setGeometry(QRect(140, 20, 631, 411));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Poppins")});
        font1.setPointSize(18);
        commandInterpreter->setFont(font1);
        commandInterpreter->setStyleSheet(QString::fromUtf8("color: red;"));
        executeBtn = new QPushButton(centralwidget);
        executeBtn->setObjectName("executeBtn");
        executeBtn->setGeometry(QRect(689, 440, 81, 31));
        executeBtn->setFont(font);
        loopBtn = new QPushButton(centralwidget);
        loopBtn->setObjectName("loopBtn");
        loopBtn->setGeometry(QRect(30, 120, 91, 31));
        loopBtn->setFont(font);
        searchBtn = new QPushButton(centralwidget);
        searchBtn->setObjectName("searchBtn");
        searchBtn->setGeometry(QRect(30, 160, 91, 31));
        searchBtn->setFont(font);
        typeBtn = new QPushButton(centralwidget);
        typeBtn->setObjectName("typeBtn");
        typeBtn->setGeometry(QRect(30, 200, 91, 31));
        typeBtn->setFont(font);
        copyBtn = new QPushButton(centralwidget);
        copyBtn->setObjectName("copyBtn");
        copyBtn->setGeometry(QRect(30, 240, 91, 31));
        copyBtn->setFont(font);
        destroyBtn = new QPushButton(centralwidget);
        destroyBtn->setObjectName("destroyBtn");
        destroyBtn->setGeometry(QRect(30, 280, 91, 31));
        destroyBtn->setFont(font);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tapBtn->setText(QCoreApplication::translate("MainWindow", "TAP", nullptr));
        delayBtn->setText(QCoreApplication::translate("MainWindow", "DELAY", nullptr));
        commandInterpreter->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Poppins'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Segoe UI'; font-size:9pt;\"><br /></p></body></html>", nullptr));
        executeBtn->setText(QCoreApplication::translate("MainWindow", "Execute", nullptr));
        loopBtn->setText(QCoreApplication::translate("MainWindow", "LOOP", nullptr));
        searchBtn->setText(QCoreApplication::translate("MainWindow", "SEARCH", nullptr));
        typeBtn->setText(QCoreApplication::translate("MainWindow", "TYPE", nullptr));
        copyBtn->setText(QCoreApplication::translate("MainWindow", "COPY", nullptr));
        destroyBtn->setText(QCoreApplication::translate("MainWindow", "DESTROY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
