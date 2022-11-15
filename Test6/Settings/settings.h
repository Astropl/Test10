#ifndef SETTINGS_H
#define SETTINGS_H

#include <QMainWindow>

namespace Ui {
class Settings;
}

class Settings : public QMainWindow
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();

public slots:
    void init();

private slots:
    void on_btnExit_clicked();

    void on_btnShowMenuSettings_clicked();

private:
    Ui::Settings *ui;
    QTimer *timer;


};

#endif // SETTINGS_H
