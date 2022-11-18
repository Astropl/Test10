/********************************************************************************
** Form generated from reading UI file 'test10.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST10_H
#define UI_TEST10_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test10
{
public:
    QWidget *centralwidget;
    QPushButton *btnMenuHide;
    QTableView *tableView;
    QFrame *frmMainLeft;
    QPushButton *btnAnalyserAdd;
    QPushButton *btnSettings;
    QPushButton *btnReview;
    QFrame *frmAddAnalisator;
    QPushButton *btnSaveAnal;
    QComboBox *cbxAddProducent;
    QComboBox *cbxAddModel;
    QLineEdit *lineAddSN;
    QLabel *lblAddProducent;
    QLabel *lblAddModel;
    QLabel *lblAddSN;
    QPushButton *btnMenuShow;
    QPushButton *btnExit;
    QPushButton *btnMenuHide_2;
    QPushButton *btnDownUp;
    QFrame *frmDate;
    QLabel *lblTime;
    QLabel *lblDate;
    QLabel *lblWeek;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Test10)
    {
        if (Test10->objectName().isEmpty())
            Test10->setObjectName("Test10");
        Test10->resize(1242, 754);
        centralwidget = new QWidget(Test10);
        centralwidget->setObjectName("centralwidget");
        btnMenuHide = new QPushButton(centralwidget);
        btnMenuHide->setObjectName("btnMenuHide");
        btnMenuHide->setGeometry(QRect(180, 530, 93, 29));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(340, 340, 511, 192));
        frmMainLeft = new QFrame(centralwidget);
        frmMainLeft->setObjectName("frmMainLeft");
        frmMainLeft->setGeometry(QRect(600, 120, 61, 41));
        frmMainLeft->setFrameShape(QFrame::StyledPanel);
        frmMainLeft->setFrameShadow(QFrame::Raised);
        btnAnalyserAdd = new QPushButton(frmMainLeft);
        btnAnalyserAdd->setObjectName("btnAnalyserAdd");
        btnAnalyserAdd->setGeometry(QRect(10, 20, 93, 29));
        btnSettings = new QPushButton(frmMainLeft);
        btnSettings->setObjectName("btnSettings");
        btnSettings->setGeometry(QRect(10, 50, 93, 29));
        btnReview = new QPushButton(frmMainLeft);
        btnReview->setObjectName("btnReview");
        btnReview->setGeometry(QRect(10, 90, 93, 29));
        frmAddAnalisator = new QFrame(centralwidget);
        frmAddAnalisator->setObjectName("frmAddAnalisator");
        frmAddAnalisator->setGeometry(QRect(570, 60, 121, 51));
        frmAddAnalisator->setFrameShape(QFrame::StyledPanel);
        frmAddAnalisator->setFrameShadow(QFrame::Raised);
        btnSaveAnal = new QPushButton(frmAddAnalisator);
        btnSaveAnal->setObjectName("btnSaveAnal");
        btnSaveAnal->setGeometry(QRect(190, 60, 93, 29));
        cbxAddProducent = new QComboBox(frmAddAnalisator);
        cbxAddProducent->setObjectName("cbxAddProducent");
        cbxAddProducent->setGeometry(QRect(50, 100, 131, 26));
        cbxAddModel = new QComboBox(frmAddAnalisator);
        cbxAddModel->setObjectName("cbxAddModel");
        cbxAddModel->setGeometry(QRect(40, 40, 131, 26));
        lineAddSN = new QLineEdit(frmAddAnalisator);
        lineAddSN->setObjectName("lineAddSN");
        lineAddSN->setGeometry(QRect(180, 20, 131, 26));
        lblAddProducent = new QLabel(frmAddAnalisator);
        lblAddProducent->setObjectName("lblAddProducent");
        lblAddProducent->setGeometry(QRect(50, 70, 131, 20));
        lblAddModel = new QLabel(frmAddAnalisator);
        lblAddModel->setObjectName("lblAddModel");
        lblAddModel->setGeometry(QRect(50, 60, 131, 20));
        lblAddSN = new QLabel(frmAddAnalisator);
        lblAddSN->setObjectName("lblAddSN");
        lblAddSN->setGeometry(QRect(50, 10, 131, 20));
        btnMenuShow = new QPushButton(centralwidget);
        btnMenuShow->setObjectName("btnMenuShow");
        btnMenuShow->setGeometry(QRect(310, 140, 93, 29));
        btnExit = new QPushButton(centralwidget);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(900, 420, 93, 29));
        btnMenuHide_2 = new QPushButton(centralwidget);
        btnMenuHide_2->setObjectName("btnMenuHide_2");
        btnMenuHide_2->setGeometry(QRect(350, 640, 93, 29));
        btnDownUp = new QPushButton(centralwidget);
        btnDownUp->setObjectName("btnDownUp");
        btnDownUp->setGeometry(QRect(1000, 80, 20, 20));
        frmDate = new QFrame(centralwidget);
        frmDate->setObjectName("frmDate");
        frmDate->setGeometry(QRect(1020, 20, 201, 80));
        frmDate->setFrameShape(QFrame::StyledPanel);
        frmDate->setFrameShadow(QFrame::Raised);
        lblTime = new QLabel(frmDate);
        lblTime->setObjectName("lblTime");
        lblTime->setGeometry(QRect(10, 10, 71, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        lblTime->setFont(font);
        lblTime->setFrameShape(QFrame::StyledPanel);
        lblTime->setAlignment(Qt::AlignCenter);
        lblDate = new QLabel(frmDate);
        lblDate->setObjectName("lblDate");
        lblDate->setGeometry(QRect(110, 10, 81, 20));
        lblDate->setFont(font);
        lblDate->setFrameShape(QFrame::StyledPanel);
        lblDate->setAlignment(Qt::AlignCenter);
        lblWeek = new QLabel(frmDate);
        lblWeek->setObjectName("lblWeek");
        lblWeek->setGeometry(QRect(20, 40, 171, 20));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        lblWeek->setFont(font1);
        lblWeek->setFrameShape(QFrame::StyledPanel);
        lblWeek->setAlignment(Qt::AlignCenter);
        lblWeek->setWordWrap(false);
        Test10->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Test10);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1242, 22));
        Test10->setMenuBar(menubar);
        statusbar = new QStatusBar(Test10);
        statusbar->setObjectName("statusbar");
        Test10->setStatusBar(statusbar);

        retranslateUi(Test10);

        QMetaObject::connectSlotsByName(Test10);
    } // setupUi

    void retranslateUi(QMainWindow *Test10)
    {
        Test10->setWindowTitle(QCoreApplication::translate("Test10", "Test10", nullptr));
        btnMenuHide->setText(QCoreApplication::translate("Test10", "btnMenuHide", nullptr));
        btnAnalyserAdd->setText(QCoreApplication::translate("Test10", "btnAnalyserAdd", nullptr));
        btnSettings->setText(QCoreApplication::translate("Test10", "btnSettings", nullptr));
        btnReview->setText(QCoreApplication::translate("Test10", "btnReview", nullptr));
        btnSaveAnal->setText(QCoreApplication::translate("Test10", "btnSaveAnal", nullptr));
        lblAddProducent->setText(QCoreApplication::translate("Test10", "lblAddProducent", nullptr));
        lblAddModel->setText(QCoreApplication::translate("Test10", "lblAddModel", nullptr));
        lblAddSN->setText(QCoreApplication::translate("Test10", "lblAddSN", nullptr));
        btnMenuShow->setText(QCoreApplication::translate("Test10", "btnMenuShow", nullptr));
        btnExit->setText(QCoreApplication::translate("Test10", "btnExit", nullptr));
        btnMenuHide_2->setText(QCoreApplication::translate("Test10", "btnMenuHide", nullptr));
        btnDownUp->setText(QCoreApplication::translate("Test10", "V", nullptr));
        lblTime->setText(QCoreApplication::translate("Test10", "12:00:00", nullptr));
        lblDate->setText(QCoreApplication::translate("Test10", "1900:01:01", nullptr));
        lblWeek->setText(QCoreApplication::translate("Test10", "Poniedzia\305\202ek", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test10: public Ui_Test10 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST10_H
