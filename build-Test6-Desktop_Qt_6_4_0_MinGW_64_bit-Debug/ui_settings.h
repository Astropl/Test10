/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QWidget *centralwidget;
    QPushButton *btnExit;
    QPushButton *btnShowMenuSettings;
    QFrame *frmMainLeft;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName("Settings");
        Settings->resize(1173, 600);
        centralwidget = new QWidget(Settings);
        centralwidget->setObjectName("centralwidget");
        btnExit = new QPushButton(centralwidget);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(990, 500, 93, 29));
        btnShowMenuSettings = new QPushButton(centralwidget);
        btnShowMenuSettings->setObjectName("btnShowMenuSettings");
        btnShowMenuSettings->setGeometry(QRect(10, 50, 131, 29));
        frmMainLeft = new QFrame(centralwidget);
        frmMainLeft->setObjectName("frmMainLeft");
        frmMainLeft->setGeometry(QRect(10, 100, 151, 351));
        frmMainLeft->setFrameShape(QFrame::StyledPanel);
        frmMainLeft->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frmMainLeft);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 93, 29));
        pushButton_2 = new QPushButton(frmMainLeft);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 50, 93, 29));
        pushButton_3 = new QPushButton(frmMainLeft);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 90, 93, 29));
        Settings->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Settings);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1173, 26));
        Settings->setMenuBar(menubar);
        statusbar = new QStatusBar(Settings);
        statusbar->setObjectName("statusbar");
        Settings->setStatusBar(statusbar);

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QMainWindow *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "MainWindow", nullptr));
        btnExit->setText(QCoreApplication::translate("Settings", "btnExit", nullptr));
        btnShowMenuSettings->setText(QCoreApplication::translate("Settings", "btnShowMenuSettings", nullptr));
        pushButton->setText(QCoreApplication::translate("Settings", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Settings", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Settings", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
