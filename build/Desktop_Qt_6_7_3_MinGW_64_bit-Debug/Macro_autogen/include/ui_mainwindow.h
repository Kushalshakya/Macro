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
#include <QtWidgets/QLabel>
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
    QPushButton *executeBtn;
    QPushButton *loopBtn;
    QPushButton *searchBtn;
    QPushButton *typeBtn;
    QPushButton *helpBtn;
    QPushButton *destroyBtn;
    QTextEdit *commandInterpreter;
    QTextEdit *textEd;
    QLabel *programFlowChart;

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
        helpBtn = new QPushButton(centralwidget);
        helpBtn->setObjectName("helpBtn");
        helpBtn->setGeometry(QRect(30, 240, 91, 31));
        helpBtn->setFont(font);
        destroyBtn = new QPushButton(centralwidget);
        destroyBtn->setObjectName("destroyBtn");
        destroyBtn->setGeometry(QRect(30, 280, 91, 31));
        destroyBtn->setFont(font);
        commandInterpreter = new QTextEdit(centralwidget);
        commandInterpreter->setObjectName("commandInterpreter");
        commandInterpreter->setGeometry(QRect(140, 20, 630, 410));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Poppins")});
        font1.setPointSize(16);
        commandInterpreter->setFont(font1);
        textEd = new QTextEdit(centralwidget);
        textEd->setObjectName("textEd");
        textEd->setGeometry(QRect(30, 330, 100, 100));
        programFlowChart = new QLabel(centralwidget);
        programFlowChart->setObjectName("programFlowChart");
        programFlowChart->setGeometry(QRect(18, 430, 126, 30));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Poppins")});
        font2.setPointSize(10);
        programFlowChart->setFont(font2);
        programFlowChart->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tapBtn->setText(QCoreApplication::translate("MainWindow", "TAP", nullptr));
        delayBtn->setText(QCoreApplication::translate("MainWindow", "DELAY", nullptr));
        executeBtn->setText(QCoreApplication::translate("MainWindow", "Execute", nullptr));
        loopBtn->setText(QCoreApplication::translate("MainWindow", "LOOP", nullptr));
        searchBtn->setText(QCoreApplication::translate("MainWindow", "SEARCH", nullptr));
        typeBtn->setText(QCoreApplication::translate("MainWindow", "TYPE", nullptr));
        helpBtn->setText(QCoreApplication::translate("MainWindow", "HELP", nullptr));
        destroyBtn->setText(QCoreApplication::translate("MainWindow", "DESTROY", nullptr));
        programFlowChart->setText(QCoreApplication::translate("MainWindow", "Running Program", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
