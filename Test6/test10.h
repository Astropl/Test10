#ifndef TEST10_H
#define TEST10_H

#include <QMainWindow>
#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemDelegate>
#include <QStandardItemModel>
#include <QTableView>

QT_BEGIN_NAMESPACE
namespace Ui { class Test10; }
QT_END_NAMESPACE

class Test10 : public QMainWindow
{
    Q_OBJECT

public:
    Test10(QWidget *parent = nullptr);
    ~Test10();

private slots:
    void initDB();
    void init();
    void wczytaj();
    void initMenu();
    void on_actionOpcje_triggered();
    void on_btnMenuShow_clicked();
    void on_btnExit_clicked();
    void on_btnAnalyserAdd_clicked();
    void on_pushButton_clicked();

private:
    Ui::Test10 *ui;
    QTimer *timer;
    QStandardItemModel *model;
};
#endif // TEST10_H
