#ifndef DBMAIN_H
#define DBMAIN_H

#include <QMainWindow>

namespace Ui {
class DbMain;
}

class DbMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit DbMain(QWidget *parent = nullptr);
    ~DbMain();

void init ();
void DatabaseConnect();
void DbAnalysers ();
void dBKontrahent();
QString addAnalysers (QString daneProducent, QString daneModel);
void DatabasePopulate();
void loadAnalyser ();
QString loadAnalyser (QString daneModel, int i, int k);

int loadAnalyserId(int rows);
QString addKontrahent(QString l1, QString l2,QString l3,QString l4,QString l5,QString l6,QString l7,QString l8,QString l9,QString l10,QString l11,QString l12,QString l13);
void DbProducent ();

void DbModel();
QString addProducent (QString daneProducent);

QString addModel (QString daneProducent, QString daneModel);
int DbProducentLoadId (int rows);
QString DbProducentLoad (QString daneModel, int i);
int DbModelLoadId (int rows);
QString DbModelLoad (QString daneModel, int i);
QString saveAnalyser (QString daneProducent, QString daneModel, QString numerSeryjny);



private:
    Ui::DbMain *ui;
};

#endif // DBMAIN_H
