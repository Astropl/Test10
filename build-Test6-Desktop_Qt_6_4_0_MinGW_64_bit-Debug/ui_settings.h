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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QPushButton *btnAnalizatory;
    QPushButton *btnKontrahent;
    QPushButton *pushButton_3;
    QFrame *frmRightAnalyser;
    QLabel *lblDodajProducent;
    QLineEdit *lineDodajProducent;
    QLineEdit *lineDodajModel;
    QLabel *lblDodajModel;
    QPushButton *btnDodajAnal;
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
        btnShowMenuSettings->setGeometry(QRect(10, 20, 131, 29));
        frmMainLeft = new QFrame(centralwidget);
        frmMainLeft->setObjectName("frmMainLeft");
        frmMainLeft->setGeometry(QRect(10, 100, 150, 300));
        frmMainLeft->setFrameShape(QFrame::StyledPanel);
        frmMainLeft->setFrameShadow(QFrame::Raised);
        btnAnalizatory = new QPushButton(frmMainLeft);
        btnAnalizatory->setObjectName("btnAnalizatory");
        btnAnalizatory->setGeometry(QRect(10, 10, 120, 30));
        btnKontrahent = new QPushButton(frmMainLeft);
        btnKontrahent->setObjectName("btnKontrahent");
        btnKontrahent->setGeometry(QRect(10, 50, 120, 30));
        pushButton_3 = new QPushButton(frmMainLeft);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 90, 93, 29));
        frmRightAnalyser = new QFrame(centralwidget);
        frmRightAnalyser->setObjectName("frmRightAnalyser");
        frmRightAnalyser->setGeometry(QRect(260, 90, 481, 151));
        frmRightAnalyser->setFrameShape(QFrame::StyledPanel);
        frmRightAnalyser->setFrameShadow(QFrame::Raised);
        lblDodajProducent = new QLabel(frmRightAnalyser);
        lblDodajProducent->setObjectName("lblDodajProducent");
        lblDodajProducent->setGeometry(QRect(30, 20, 63, 20));
        lineDodajProducent = new QLineEdit(frmRightAnalyser);
        lineDodajProducent->setObjectName("lineDodajProducent");
        lineDodajProducent->setGeometry(QRect(120, 20, 181, 26));
        lineDodajModel = new QLineEdit(frmRightAnalyser);
        lineDodajModel->setObjectName("lineDodajModel");
        lineDodajModel->setGeometry(QRect(120, 60, 181, 26));
        lblDodajModel = new QLabel(frmRightAnalyser);
        lblDodajModel->setObjectName("lblDodajModel");
        lblDodajModel->setGeometry(QRect(30, 60, 63, 20));
        btnDodajAnal = new QPushButton(frmRightAnalyser);
        btnDodajAnal->setObjectName("btnDodajAnal");
        btnDodajAnal->setGeometry(QRect(330, 110, 93, 29));
        Settings->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Settings);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1173, 22));
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
        btnAnalizatory->setText(QCoreApplication::translate("Settings", "btnAnalizatory", nullptr));
        btnKontrahent->setText(QCoreApplication::translate("Settings", "btnKontrahent", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Settings", "PushButton", nullptr));
        lblDodajProducent->setText(QCoreApplication::translate("Settings", "TextLabel", nullptr));
        lblDodajModel->setText(QCoreApplication::translate("Settings", "TextLabel", nullptr));
        btnDodajAnal->setText(QCoreApplication::translate("Settings", "btnDodajAnal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
