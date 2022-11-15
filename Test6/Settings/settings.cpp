#include "settings.h"
#include "ui_settings.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <QTime>
#include <QTableView>
#include <QTimer>
#include <QtWidgets>



using namespace std;

bool menuShowSettings;



Settings::Settings(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    init();
}

Settings::~Settings()
{
    delete ui;
}

void Settings::on_btnExit_clicked()
{
    destroy(true);
}


void Settings::init()
{cout<<"Test w init menu"<<endl;

    ui->frmMainLeft->setLineWidth(1);
    ui->frmMainLeft->setFrameStyle(1);
    ui->frmMainLeft->setGeometry(5,60,10,10);
    ui->frmMainLeft->setFixedWidth(200);
    ui->frmMainLeft->setFixedHeight(300);
ui->frmMainLeft->hide();
    ui->btnShowMenuSettings->setText("Pokaż Menu");

    ui->btnExit->setText("Wyjście");


}

void Settings::on_btnShowMenuSettings_clicked()
{
    cout<<"btnShowMenu"<<endl;

    //frmMainLeft
    if (menuShowSettings==true)
    {
        ui->frmMainLeft->setFixedSize(0, 0);
        int x=0,y=300;
        cout<<"Polski"<<endl;
        ui->frmMainLeft->show();
        //scroll(x,y);
        for (int x1 = x; x1 <= 170; x1++) {

            QTime dieTime = QTime::currentTime().addMSecs(5);
            while (QTime::currentTime() < dieTime)
                QCoreApplication::processEvents(QEventLoop::AllEvents, 50);
            ui->frmMainLeft->setFixedSize(x1, y);
        }
        menuShowSettings=false;
        ui->btnShowMenuSettings->setText("Schowaj Menu");
    }
    else if (menuShowSettings==false)
    {
        int x=170,y=300;
        for (int x1 = x; x1 >= 0; x1--) {

            QTime dieTime = QTime::currentTime().addMSecs(5);
            while (QTime::currentTime() < dieTime)
                QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            ui->frmMainLeft->setFixedSize(x1, y);

        }
        ui->frmMainLeft->hide();
        menuShowSettings=true;
        ui->btnShowMenuSettings->setText("Pokąż Menu");
    }




}

