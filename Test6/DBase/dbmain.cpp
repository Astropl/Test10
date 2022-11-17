#include "dbmain.h"
#include "ui_dbmain.h"
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <iostream>
#include <QDebug>

using namespace std;
//QSqlQuery query;


DbMain::DbMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DbMain)
{
    ui->setupUi(this);
    cout<<"KJestem w Main DB0" <<endl;



}

DbMain::~DbMain()
{
    delete ui;
}

void DbMain::init ()
{
    cout<<"aaaaaJestem w Main DB0" <<endl;
    DatabaseConnect();
    // DatabaseInit();
    DatabasePopulate();
}

void DbMain::DatabaseConnect()
{
    qWarning("Database Connect");
    const QString DRIVER("QSQLITE");
    if (QSqlDatabase::isDriverAvailable(DRIVER)) {
        QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
        db.setDatabaseName(
                    "C:/Users/pawel/Documents/Cplusplus/Test10/Test6/DBase/2022.11.02.db");
        qWarning(" Powstała baza");

        if (db.open()) {
            qWarning() << (" Otwarto DB") << db.lastError().text();
            qWarning() << (" Otwarto DB") << db.isDriverAvailable(DRIVER);
            //qWarning() << (" Otwarto DB") << db.connectOptions().
        } else {
            qWarning() << (" Brak otwarcia") << db.lastError().text();
        }
    }
}

void DbMain::DatabasePopulate()
{
    qWarning("Database Wypelnianiae");
    DbAnalysers();
    DbProducent();
    DbModel();

    //dBMiasta();
    //dBWojewodztwa();
    // dBKraj();
    // dBProducent();
    // dBModel();
    // dBUrzadzenia();
    dBKontrahent();
    //  dBBaza();
    // dBPrzypomnienie();
    //  dBStatistisc();
    // dBInfoOTemacie();
}

void DbMain::dBKontrahent()
{
    QSqlQuery query;
    query.exec("PRAGMA foreign_keys = ON;"); // włączenia kluczy obcych"
    qWarning("Tworzenie tabeli Kontrahenci ");

    query.exec("CREATE TABLE IF NOT EXISTS Kontrahent (id INTEGER PRIMARY KEY, nazwaFirmy "
               "TEXT UNIQUE, imie TEXT, nazwisko TEXT, kontrahent_panstwo_id TEXT, "
               "kontrahent_wojewodztwo_id TEXT, kontrahent_miasto_id TEXT, kodPocztowy TEXT, "
               "ulica TEXT, nrDomu INTEGER, telefon TEXT, "
               "telefonPrywatny TEXT, adresEmail TEXT, stronaUrl TEXT, urzadzenia_numer_seryjny "
               "TEXT, FOREIGN KEY "
               "(kontrahent_panstwo_id) REFERENCES panstwa(panstwo), FOREIGN KEY "
               "(kontrahent_wojewodztwo_id) REFERENCES wojewodztwa (wojewodztwo), "
               "FOREIGN KEY "
               "(kontrahent_miasto_id) REFERENCES miasta (miasto), "
               "FOREIGN KEY (urzadzenia_numer_seryjny ) REFERENCES urzadzenia (numerSeryjny)  )");

    if (!query.isActive()) {
         qWarning() << " Tworzenie Tabeli - ERROR: " << query.lastError().text();
    }
    if (!query.exec("INSERT INTO Kontrahent (nazwaFirmy , imie , nazwisko , kontrahent_panstwo_id "
                    ", kontrahent_wojewodztwo_id , kontrahent_miasto_id , kodPocztowy , ulica , "
                    "nrDomu , telefon , telefonPrywatny , adresEmail , stronaUrl  ) "
                    "VALUES('VITAKO' , 'Paweł' , 'Martys' , 'Polska' , "
                    "'Zachodniopomorskie' , 'Szczecin' , '71-766' , 'Małej Syrenki' , '2' , "
                    "'692717987' , '723508531' , 'serwis@vbody.pl' , 'www.vitako.pl')")) {
        qWarning() << "MainWindow::DatabasePopulate - ERROR: " << query.lastError().text();
    }
     qWarning("Tworzenie tabeli Kontrahent - Zakończone ");



}
QString DbMain::loadAnalyser (QString daneModel, int i, int k)
{qWarning("******dbMain::loadAnalysers");
    QSqlQuery query;
    QString name;
    QString inti = QString::number(i);
   if (query.exec("SELECT * FROM urzadzenia WHERE id =" +inti ))
   {while (query.next())
       {name = query.value(k).toString();
       }
       return name;
   }
   return 0;
}

QString DbMain::DbProducentLoad (QString daneProducent, int i)
{
    QSqlQuery query;
    //QString name;
    QString inti = QString::number(i);
    if (query.exec("SELECT * FROM producent WHERE id =" +inti ))
    {while (query.next())
        {daneProducent = query.value(1).toString();
        }
        return daneProducent;
    }
    return 0;

}
QString DbMain::DbModelLoad (QString daneModel, int i)
{
    QSqlQuery query;
    //QString name;
    QString inti = QString::number(i);
    if (query.exec("SELECT * FROM model WHERE id =" +inti ))
    {while (query.next())
        {daneModel = query.value(1).toString();
        }
        return daneModel;
    }
    return 0;

}
int DbMain::loadAnalyserId(int rows) //int MainDb::pobierzKrajId(int pobierzKrajId)

{qWarning("******dbMain::loadAnalysersId");
    QSqlQuery query;
    rows = 0;


    if (query.exec("SELECT * FROM urzadzenia")) {
        while (query.next()) {
            rows++;
        }
    }
    return rows;
}

int DbMain::DbModelLoadId (int rows)
{
    QSqlQuery query;
    rows = 0;


    if (query.exec("SELECT * FROM model")) {
        while (query.next()) {
            rows++;
        }
    }
    return rows;
}
int DbMain::DbProducentLoadId (int rows)
{
    QSqlQuery query;
    rows = 0;


    if (query.exec("SELECT * FROM producent")) {
        while (query.next()) {
            rows++;
        }
    }
    return rows;
}
void DbMain::DbProducent ()
{
    QSqlQuery query;
    query.exec("PRAGMA foreign_keys = ON;"); // włączenia kluczy obcych"
    qWarning("Tworzenie tabeli Producent ");

    query.exec("CREATE TABLE IF NOT EXISTS producent (id INTEGER PRIMARY KEY, producent TEXT  )");
    if (!query.isActive()) {
        qWarning() << "1. Tworzenie Tabeli:DBproducent- ERROR: " << query.lastError().text();
    }
    if (!query.exec("INSERT INTO producent (producent) VALUES('Jawon')")) {
        qWarning() << "2. INSERT INTO tabela:DBproducent - ERROR: " << query.lastError().text();
    }

    qWarning("Tworzenie tabeli DBproducent - Zakończone ");


}
void DbMain::DbModel()
{
    QSqlQuery query;
    query.exec("PRAGMA foreign_keys = ON;"); // włączenia kluczy obcych"
    qWarning("Tworzenie tabeli Model ");

    query.exec("CREATE TABLE IF NOT EXISTS model (id INTEGER PRIMARY KEY, model TEXT, producent TEXT  )");
    if (!query.isActive()) {
        qWarning() << "1. Tworzenie Tabeli:DBmodel- ERROR: " << query.lastError().text();
    }
    if (!query.exec("INSERT INTO model (model, producent ) VALUES('IOI-353TEST', 'Jawon')")) {
        qWarning() << "2. INSERT INTO tabela:DBmodel - ERROR: " << query.lastError().text();
    }

    qWarning("Tworzenie tabeli model - Zakończone ");

}

void DbMain::DbAnalysers ()
{
    //********************************************************
    // Dodoac numer seryjny jako UNIQUE. Na razie do testów wyłaczyłem -  query.exec("CREATE TABLE IF NOT EXISTS urzadzenia (id INTEGER PRIMARY KEY, urzadzenia_producent_id TEXT, urzadzenia_model_id TEXT, urzadzenia_numerSeryjny TEXT UNIQUE )");
    //********************************************************

    QSqlQuery query;
    query.exec("PRAGMA foreign_keys = ON;"); // włączenia kluczy obcych"
    qWarning("Tworzenie tabeli Urzadzenia ");

    query.exec("CREATE TABLE IF NOT EXISTS urzadzenia (id INTEGER PRIMARY KEY, urzadzenia_producent_id TEXT, urzadzenia_model_id TEXT, urzadzenia_numerSeryjny TEXT  )");
    if (!query.isActive()) {
        qWarning() << "1. Tworzenie Tabeli:DBUrzadzenia- ERROR: " << query.lastError().text();
    }
    if (!query.exec("INSERT INTO urzadzenia (urzadzenia_producent_id , urzadzenia_model_id, urzadzenia_numerSeryjny) VALUES('Jawon', 'IOI-353', 'AN TESTOWY')")) {
        qWarning() << "2. INSERT INTO tabela:DBUrzadzenia - ERROR: " << query.lastError().text();
    }

    qWarning("Tworzenie tabeli Urzadzenia - Zakończone ");


}
QString DbMain::addProducnet (QString daneProducent)
{
    QSqlQuery query;
    qWarning()<<"Zapisuje do bazy Urzadzenia";
    qWarning ()<<" Mam producenta"<<daneProducent;


    //qWarning ()<<" i mam serial"<<daneNrSeryjny;
    query.exec("PRAGMA foreign_keys = ON;"); // włączenia kluczy obcych

    if (!query.exec("INSERT INTO producent (producent) VALUES('" + daneProducent + "' )")) {
        qWarning() << "MainDB::Dodoanie Urzadzenia - ERROR: " << query.lastError().text();
    } else {
        qWarning() << "MainDB::Dodoanie Urzadzenia - Udane: " << query.lastError().text();
    }
    return 0;

}
QString DbMain::addModel (QString daneModel,
                              QString daneProducent)
{
    QSqlQuery query;
    qWarning()<<"Zapisuje do bazy Urzadzenia";
    qWarning ()<<" Mam producenta"<<daneProducent;
    qWarning ()<<" Mam model"<<daneModel;

    //qWarning ()<<" i mam serial"<<daneNrSeryjny;
    query.exec("PRAGMA foreign_keys = ON;"); // włączenia kluczy obcych

    if (!query.exec("INSERT INTO model (model, producent) VALUES('"
                    +  daneModel + "','" + daneProducent + "' )")) {
        qWarning() << "MainDB::Dodoanie Urzadzenia - ERROR: " << query.lastError().text();
    } else {
        qWarning() << "MainDB::Dodoanie Urzadzenia - Udane: " << query.lastError().text();
    }
    return 0;











}
QString DbMain::addKontrahent(QString l1, QString l2,QString l3,QString l4,QString l5,QString l6,QString l7,QString l8,QString l9,QString l10,QString l11,QString l12,QString l13)
{
    QSqlQuery query;
 query.exec("PRAGMA foreign_keys = ON;"); // włączenia kluczy obcych
//if (!query.exec("INSERT INTO Kontrahent


 if (!query.exec("INSERT INTO Kontrahent (nazwaFirmy, imie , nazwisko , kontrahent_panstwo_id "
                 ", kontrahent_wojewodztwo_id , kontrahent_miasto_id , kodPocztowy , ulica , "
                 "nrDomu , telefon , telefonPrywatny , adresEmail , stronaUrl) VALUES('"
                 + l1 + "','" + l2 + "','" + l3 + "','" + l4 + "','" + l6 + "','" + l5 + "','"
                 + l7 + "','" + l8 + "','" + l9 + "','" + l10 + "','" + l11 + "','" + l12 + "','"
                 + l13 + "')"))

 {
     qWarning() << "MainDB::Dodoanie Urzadzenia - ERROR: " << query.lastError().text();
 } else {
     qWarning() << "MainDB::Dodoanie Kontrahenci - Udane: " << query.lastError().text();
 }
 return 0;




}
// TODO: Dorobic tak zeby gdy wybiorę dopisanie producenta to mogę. ale gdy wybiore model to wymusi na mnie wybór producenta

