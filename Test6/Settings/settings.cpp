#include "settings.h"
#include "ui_settings.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <QTime>
#include <QTableView>
#include <QTimer>
#include <QtWidgets>
#include <QDebug>



using namespace std;

bool menuShowSettings;
QString Qproducent;
QString Qmodel;

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
    menuShowSettings=true;
    ui->frmMainLeft->setLineWidth(1);
    ui->frmMainLeft->setFrameStyle(1);
    ui->frmMainLeft->setGeometry(5,60,10,10);
    ui->frmMainLeft->setFixedHeight(300);
    ui->frmMainLeft->setFixedWidth(150);

    ui->frmMainLeft->hide();
    ui->btnShowMenuSettings->setText("Pokaż Menu");
    ui->btnShowMenuSettings->setGeometry(10,20,130,30);

    ui->btnAnalizatory->setText("Analizator");
    ui->btnAnalizatory->setGeometry(10,10,120,30);


    ui->btnKontrahent->setText("Kontrahent");
    ui->btnKontrahent->setGeometry(10,50,120,30);

    ui->frmRightAnalyser->setLineWidth(1);
    ui->frmRightAnalyser->setFrameStyle(1);
    ui->frmRightAnalyser->setGeometry(180,100,480,150);
    ui->frmRightAnalyser->setFixedHeight(150);
    ui->frmRightAnalyser->setFixedWidth(480);

    ui->lblDodajModel->setText("TEMP");
    ui->lblDodajModel->setGeometry(30,20,65,20);
    ui->lblDodajProducent->setText("TEMP");
    ui->lblDodajModel->setGeometry(30,60,65,20);
    ui->lineDodajProducent->setGeometry(120,20,180,25);
    ui->lineDodajModel->setGeometry(120,60,180,25);

  //TODO: dalej

ui->btnDodajAnal->setText("TEMP");


    ui->frmRightAnalyser->hide();



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
        for (int x1 = x; x1 <= 140; x1++) {

            QTime dieTime = QTime::currentTime().addMSecs(5);
            while (QTime::currentTime() < dieTime)
                QCoreApplication::processEvents(QEventLoop::AllEvents, 20);
            ui->frmMainLeft->setFixedSize(x1, y);
        }
        menuShowSettings=false;
        ui->btnShowMenuSettings->setText("Schowaj Menu");
    }
    else if (menuShowSettings==false)
    {
        int x=140,y=300;
        for (int x1 = x; x1 >= 0; x1--) {

            QTime dieTime = QTime::currentTime().addMSecs(5);
            while (QTime::currentTime() < dieTime)
                QCoreApplication::processEvents(QEventLoop::AllEvents, 20);
            ui->frmMainLeft->setFixedSize(x1, y);

        }
        ui->frmMainLeft->hide();
        menuShowSettings=true;
        ui->btnShowMenuSettings->setText("Pokąż Menu");
    }




}


void Settings::on_btnAnalizatory_clicked()
{
    //Dodaj analizator (producent, model)
    ui->frmRightAnalyser->show();
}


void Settings::on_btnKontrahent_clicked()
{
    //dodaj kontrahenta (miasto, nazwa itd.... )
}


void Settings::on_btnDodajAnal_clicked()
{
    //Dodaj Analziaotr
    Qproducent = ui->lineDodajProducent->text();
    Qmodel = ui->lineDodajModel->text();


    // Zapisane do bazy
    qWarning()<<"Producent to:"<<Qproducent;
    qWarning()<<"Model to: "<<Qmodel;
    ui->frmRightAnalyser->hide();
    ui->lineDodajProducent->setText("");
    ui->lineDodajModel->setText("");
}

