#include "test10.h"
#include "ui_test10.h"
#include "Settings/settings.h"
#include "Timery/timedate.h"
#include "DBase/dbmain.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <QTime>
#include <QTableView>
#include <QTimer>
#include <QtWidgets>

int sprawdz =0;
bool menuShow = "false";
QString Qproducent1, Qmodel1, QnumerSeryjny1;


using namespace std;



Test10::Test10(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Test10)
{

    //---------Sekcja generacji timera
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(myfunctiontimer()));
    timer->start(1000);
    //===================
    ui->setupUi(this);
    initDB();
    init();
    wczytaj();

}
void Test10::myfunctiontimer()
{
    time_t czas;
    tm timeinfo;

    QString qStrMin, qStrGodz, qStrSek, qStrDzien, qStrMiesiac, stringDzienTygodnia;

    TimeDate *timeDate = new TimeDate();

    time(&czas);
    timeinfo = *localtime(&czas);
    int godzina = timeinfo.tm_hour;
    int minuta = timeinfo.tm_min;
    int sekunda = timeinfo.tm_sec;
    int dzien = timeinfo.tm_mday;
    int miesiac = timeinfo.tm_mon;
    int rok = timeinfo.tm_year;
    int dzienTygodnia = timeinfo.tm_wday;
    miesiac = miesiac + 1;
    rok = rok + 1900;
    dzienTygodnia = dzienTygodnia + 1;

    qStrMin = timeDate->changeStringsMin(minuta);
    qStrSek = timeDate->changeStringsSek(sekunda);
    qStrDzien = timeDate->changeStringsDzien(dzien);
    qStrGodz = timeDate->changeStringsGodz(godzina);
    qStrMiesiac = timeDate->changeStringsMiesiac(miesiac);
    stringDzienTygodnia = timeDate->changeStringsDzienTygodnia(dzienTygodnia);

    ui->lblTime->setText(qStrGodz + ":" + qStrMin + ":" + qStrSek);
    ui->lblDate->setText(QString::number(rok) + "." + qStrMiesiac + "." + qStrDzien);

    ui->lblWeek->setText(stringDzienTygodnia);

    wczytaj(); // Wczytywanie co sekundę odswieżonych info o analizatorach
}
Test10::~Test10()
{
    delete ui;
}
void Test10::initDB()
{
    DbMain *mainDb = new DbMain(this);
    mainDb->init();
}
void Test10::wczytaj()
{ DbMain *dbMain  = new DbMain(this);
    int pobierzUrzId = 0;
    int  k=0;
    QString QStringPobierzAnalyser="";
    model = new QStandardItemModel(1, 6, this);
    ui->tableView->setModel(model);

    model->setHeaderData(0, Qt::Horizontal, "L.P.");
    model->setHeaderData(1, Qt::Horizontal, "Producent");
    model->setHeaderData(2, Qt::Horizontal, "Model");
    model->setHeaderData(3, Qt::Horizontal, "Nr Seryjny");
    model->setHeaderData(4, Qt::Horizontal, "Przypisany");
    model->setHeaderData(5, Qt::Horizontal, "Kontrahent");

    QStandardItem *dodajItem = new QStandardItem();

    pobierzUrzId = 0;

    QString pobierzUrz = "";


    pobierzUrz = "";

    pobierzUrzId = dbMain->loadAnalyserId(pobierzUrzId);
    k=0;
    for (int i = 1; i <= pobierzUrzId; i++)
    {for ( k=1;k<= 5;k++)
        {
            QStringPobierzAnalyser = dbMain->loadAnalyser(QStringPobierzAnalyser, i, k);
            //ui->comboBoxShowProducent->addItem(QStringPobierzAnalyser);
            dodajItem = new QStandardItem(QStringPobierzAnalyser);
            model->setItem(i - 1,k,  dodajItem);

            //qDebug() << QStringPobierzAnalyser;
        }}



    //dodajItem = new QStandardItem(pobierzUrz);
    //        model->setItem(i - 1, d, dodajItem);
    //    }
    //}
    //dodajItem = dgfdgdfgdfgd;

    //QString *dodajItem= new QString ("kdsmgkfdmkgdfg");


    //    for (int i=0; i <= 5;i++)
    //    {

    //        for (int j=0;j<=40;j++){
    //            dodajItem = new QStandardItem(pobierzUrz);
    //            pobierzUrz = pobierzUrz  ;
    //            model->setItem(j, i, dodajItem);
    //        }}


    //model->setItem(2, 3, dodajItem);

    int rowDoSize = model->rowCount();
    for (int i = 0; i <= rowDoSize; i++) {
        ui->tableView->setRowHeight(i, 20);
    }
    ui->tableView->horizontalHeader()->setSectionResizeMode(
                QHeaderView::ResizeToContents); // Rozszerza kolumny do najdłuzszego itema w kolumnie.
    ui->tableView->sortByColumn(0,
                                Qt::SortOrder(0)); // Pierwsza cyfea mowi od jakiej kolumny sortujemy

    //ui->tableView->setRowHeight(1,20);
    //ui->tableView->setRowHeight(2,20);
    //ui->tableView->setRowHeight(3,20);
    //iloscWierszy();
    //qWarning()<<"Jestem w UrzadzeniaLista:WczytajDane:End";
    //ui->tableView->setColumnHidden(0,true);
    // QModelIndex index = ui->tableView->selectionModel()->currentIndex();
    ui->tableView->setColumnHidden(0,true);



}

void Test10::init()
{
    ui->frmMainLeft->setLineWidth(1);
    ui->frmMainLeft->setFrameStyle(1);
    ui->frmMainLeft->setGeometry(5,60,10,10);
    ui->frmMainLeft->setFixedWidth(200);
    ui->frmMainLeft->setFixedHeight(300);
    ui->frmMainLeft->hide();

    ui->frmAddAnalisator->setLineWidth(1);
    ui->frmAddAnalisator->setFrameStyle(1);
    ui->frmAddAnalisator->setGeometry(210,60,490,150);
    ui->frmAddAnalisator->setFixedWidth(490);
    ui->frmAddAnalisator->setFixedHeight(150);
    ui->frmAddAnalisator->hide();

    ui->btnMenuHide->setText("Schowaj Menu");
    ui->btnMenuShow->setText("Pokaż Menu");
    ui->btnMenuShow->setGeometry(15,20,150,30);
    ui->btnAnalyserAdd->setGeometry(10,10,10,10);
    ui->btnAnalyserAdd->setFixedWidth(150);
    ui->btnAnalyserAdd->setFixedHeight(30);
    ui->btnAnalyserAdd->setText("Dodaj Analizator");

    ui->btnSettings->setGeometry(10,260,10,10);
    ui->btnSettings->setFixedWidth(150);
    ui->btnSettings->setFixedHeight(30);

    ui->btnReview->setGeometry(10,45,10,10);
    ui->btnReview->setFixedWidth(150);
    ui->btnReview->setFixedHeight(30);
    ui->btnReview->setText("Przeglądy");

    ui->lblAddProducent->setGeometry(20,10,130,20);
    ui->lblAddProducent->setText("Wybierz Producenta");
    ui->lblAddModel->setGeometry(180,10,130,20);
    ui->lblAddModel->setText("Wybierz Model");

    ui->lblAddSN->setText("Dodaj Numer Seryjny");
    ui->lblAddSN->setGeometry(340,10,130,20);
    ui->btnSaveAnal->setText("Zapisz Analizator");
    ui->btnSaveAnal->setGeometry(360,100,110,30);
    ui->btnExit->setText("Wyjście");
    ui->cbxAddProducent->setGeometry(20,40,130,20);
    ui->cbxAddModel->setGeometry(180,40,130,20);
    ui->lineAddSN->setGeometry(340,40,130,20);

    //Timery
    ui->frmDate->setGeometry(1020,20,200,80);
    ui->frmDate->setLineWidth(1);
    ui->frmDate->setFrameStyle(1);
    ui->lblTime->setGeometry(10,10,70,20);
    ui->lblDate->setGeometry(110,10,80,20);
    ui->lblWeek->setGeometry(20,40,170,20);
    ui->btnDownUp->setGeometry(1000,80,20,20);
    ui->btnDownUp->setText("V");
    //Timery-End

    initMenu();

}
void Test10::initMenu()
{
    setWindowTitle("OptiBase v 1.0");

    QAction *fileSave = new QAction(("&Zapisz"), this);
    QAction *fileEksport = new QAction(("&Eksport"), this);
    // QAction *fileseparator = new QAction(("----------"), this);
    QAction *fileWyjscie = new QAction(("&Wyjście"), this);

    QAction *editKopiuj = new QAction(("&Kopiuj"), this);
    QAction *editWklej = new QAction(("&Wklej"), this);
    QAction *editToolbar = new QAction(("Toolbar"), this);

    QAction *infoOProgramie = new QAction(("&O Programie"), this);
    QAction *infoOAutorze = new QAction(("O &Autorze"), this);
    QAction *infoLog = new QAction(("&Log"), this);

    QAction *settingsOption = new QAction(("&Opcje"), this);

    auto mainfile = menuBar()->addMenu("Plik");
    auto mainEdycja = menuBar()->addMenu("Edycja");
    auto mainInfo = menuBar()->addMenu("Informacje");
    auto mainSettings = menuBar()->addMenu("Ustawienia");

    mainfile->addAction(fileSave);
    mainfile->addAction(fileEksport);

    mainfile->addSeparator();
    mainfile->addAction(fileWyjscie);

    mainEdycja->addAction(editKopiuj);
    mainEdycja->addAction(editWklej);
    mainEdycja->addAction(editToolbar);

    mainInfo->addAction(infoOProgramie);
    mainInfo->addAction(infoOAutorze);
    mainInfo->addAction(infoLog);

    mainSettings->addAction(settingsOption);

    //connect(settingsOption, &QAction::triggered,this, SLOT (openInfo()));
    connect(settingsOption, SIGNAL(triggered()), this, SLOT(on_actionOpcje_triggered()));
    connect(infoOProgramie, SIGNAL(triggered()), this, SLOT(on_actionO_programie_triggered()));

}
void Test10::on_actionOpcje_triggered()
{
    //cout<<"W ustawieniach"<<endl;
    Settings *settings = new Settings(this);
    settings->show();
    //    DbMain *mainDb = new DbMain(this);
    //    mainDb->init();
    //    AddAnalyser *addAnalyser = new AddAnalyser(this);
    //   addAnalyser->show();


}
void Test10::on_btnMenuShow_clicked()
{
    if (menuShow==true)
    {
        ui->frmMainLeft->setFixedSize(0, 0);
        int x=0,y=300;
        //cout<<"Polski"<<endl;
        ui->frmMainLeft->show();
        //scroll(x,y);
        for (int x1 = x; x1 <= 170; x1++) {

            QTime dieTime = QTime::currentTime().addMSecs(5);
            while (QTime::currentTime() < dieTime)
                QCoreApplication::processEvents(QEventLoop::AllEvents, 50);
            ui->frmMainLeft->setFixedSize(x1, y);
        }
        menuShow=false;
        ui->btnMenuShow->setText("Schowaj Menu");

        wypelnijNowyAnalizator();
    }
    else if (menuShow==false)
    {
        int x=170,y=300;
        for (int x1 = x; x1 >= 0; x1--) {

            QTime dieTime = QTime::currentTime().addMSecs(5);
            while (QTime::currentTime() < dieTime)
                QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            ui->frmMainLeft->setFixedSize(x1, y);

        }
        ui->frmMainLeft->hide();
        //ui->frmMainLeft_2->hide();
        ui->frmAddAnalisator->hide();
        //ui->frmAddAnalisator_2->hide();
        menuShow=true;
        ui->btnMenuShow->setText("Pokąż Menu");

    }
}

void Test10::wypelnijNowyAnalizator()
{
    DbMain *dbMain  = new DbMain(this);

    //Sprawdzić ile jest pozycji w bazie producent
    int pobierzProducentId = 0, pobierzModelId =0;
    QString pobierzProducent ="", pobierzModel="";


    pobierzProducentId = dbMain->DbProducentLoadId(pobierzProducentId);
    pobierzModelId= dbMain->DbModelLoadId(pobierzModelId);

    //qWarning()<<"Liczba pozycji w Bazie Producent to: "<<pobierzProducentId;

    for (int i = 1; i <= pobierzProducentId; i++)
    {
        pobierzProducent=dbMain->DbProducentLoad(pobierzProducent,i);
        ui->cbxAddProducent->addItem( pobierzProducent);

    }
    for (int i = 1; i <= pobierzModelId; i++)
    {
        pobierzModel=dbMain->DbModelLoad(pobierzModel,i);
        ui->cbxAddModel->addItem( pobierzModel);

    }
    //Sprawdfzić ile jest pozycji w bazie modcel

    // Wyciagan ac wszytskie stringi z producent i przypisać je do combo

}
void Test10::on_btnExit_clicked()
{
    destroy(true);
}
void Test10::on_btnAnalyserAdd_clicked()
{
    ui->frmAddAnalisator->show();
}
void Test10::on_pushButton_clicked()
{
    ui->frmAddAnalisator->hide();
}

void Test10::on_btnSaveAnal_clicked()
{
    //Zapisanie analizatora z numerem seryjnym
    //qWarning()<<"Zapisuje analizator do BD";
    DbMain *dbMain  = new DbMain(this);

    Qproducent1=ui->cbxAddProducent->currentText();
    Qmodel1=ui->cbxAddModel->currentText();
    QnumerSeryjny1=ui->lineAddSN->text();



//    qWarning()<<"Spra producent"<<Qproducent1;
//    qWarning()<<"Spra model"<<Qmodel1;
//    qWarning()<<"Spra SN"<< QnumerSeryjny1;
    dbMain->saveAnalyser(Qproducent1, Qmodel1, QnumerSeryjny1);



}

