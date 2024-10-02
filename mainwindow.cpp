#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include<iostream>
#include<windows.h>
#include<string>
#include<fstream>
#include<QThread>
#include<QTimer>
using namespace std;

extern int xCoordinate;
extern int yCoordinate;

void getCursorPosition(int xCoord,int yCoord){
    SetCursorPos(xCoord, yCoord);
}
void click(){
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0,0,0,0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0,0,0,0);
}

LRESULT CALLBACK lowLevelHook(int nCode, WPARAM wParam, LPARAM lParam){
    if (nCode == HC_ACTION) {
        if (wParam == WM_LBUTTONDOWN) {
            POINT cursorPos;
            GetCursorPos(&cursorPos);
            xCoordinate = cursorPos.x;
            yCoordinate = cursorPos.y;

            PostQuitMessage(0);
        }
    }
    return CallNextHookEx(NULL, nCode, wParam, lParam);
}

class Macro{
public:
    void tap(){
        getCursorPosition(xCoordinate, yCoordinate);
        click();
    }
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Macro");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tapBtn_clicked()
{
    ui->commandInterpreter->insertPlainText("tap --click-1 ");
    ui->commandInterpreter->setFocus();

    QTimer::singleShot(2000, this, [=]() {
        HHOOK hHook = SetWindowsHookEx(WH_MOUSE_LL, lowLevelHook, NULL, 0);

        MSG msg;
        while (GetMessage(&msg, NULL, 0, 0) > 0) {
            TranslateMessage(&msg);
            DispatchMessage(&msg);

            if (msg.message == WM_QUIT) {
                break;
            }
        }

        UnhookWindowsHookEx(hHook);

        ui->commandInterpreter->insertPlainText(QString::number(xCoordinate));
        ui->commandInterpreter->insertPlainText(" ");
        ui->commandInterpreter->insertPlainText(QString::number(yCoordinate));
    });
}

void MainWindow::on_delayBtn_clicked()
{
    ui->commandInterpreter->insertPlainText("delay ");
    ui->commandInterpreter->setFocus();
}

