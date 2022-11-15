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
    QFrame *frmMainLeft_2;
    QPushButton *btnAnalyserAdd_2;
    QPushButton *btnSettings_2;
    QPushButton *btnReview_2;
    QPushButton *btnExit_2;
    QPushButton *btnMenuHide;
    QTableView *tableView;
    QFrame *frmMainLeft;
    QPushButton *btnAnalyserAdd;
    QPushButton *btnSettings;
    QPushButton *btnReview;
    QPushButton *btnMenuShow_2;
    QFrame *frmAddAnalisator;
    QPushButton *btnSaveAnal;
    QComboBox *cbxAddProducent;
    QComboBox *cbxAddModel;
    QLineEdit *lineAddSN;
    QLabel *lblAddProducent;
    QLabel *lblAddModel;
    QLabel *lblAddSN;
    QPushButton *btnMenuShow;
    QFrame *frmAddAnalisator_2;
    QPushButton *btnSaveAnal_2;
    QComboBox *cbxAddProducent_2;
    QComboBox *cbxAddModel_2;
    QLineEdit *lineAddSN_2;
    QLabel *lblAddProducent_2;
    QLabel *lblAddModel_2;
    QLabel *lblAddSN_2;
    QTableView *tableView_2;
    QPushButton *btnExit;
    QPushButton *btnMenuHide_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Test10)
    {
        if (Test10->objectName().isEmpty())
            Test10->setObjectName("Test10");
        Test10->resize(1242, 754);
        centralwidget = new QWidget(Test10);
        centralwidget->setObjectName("centralwidget");
        frmMainLeft_2 = new QFrame(centralwidget);
        frmMainLeft_2->setObjectName("frmMainLeft_2");
        frmMainLeft_2->setGeometry(QRect(250, 340, 211, 191));
        frmMainLeft_2->setFrameShape(QFrame::StyledPanel);
        frmMainLeft_2->setFrameShadow(QFrame::Raised);
        btnAnalyserAdd_2 = new QPushButton(frmMainLeft_2);
        btnAnalyserAdd_2->setObjectName("btnAnalyserAdd_2");
        btnAnalyserAdd_2->setGeometry(QRect(10, 20, 93, 29));
        btnSettings_2 = new QPushButton(frmMainLeft_2);
        btnSettings_2->setObjectName("btnSettings_2");
        btnSettings_2->setGeometry(QRect(10, 50, 93, 29));
        btnReview_2 = new QPushButton(frmMainLeft_2);
        btnReview_2->setObjectName("btnReview_2");
        btnReview_2->setGeometry(QRect(10, 90, 93, 29));
        btnExit_2 = new QPushButton(centralwidget);
        btnExit_2->setObjectName("btnExit_2");
        btnExit_2->setGeometry(QRect(1070, 530, 93, 29));
        btnMenuHide = new QPushButton(centralwidget);
        btnMenuHide->setObjectName("btnMenuHide");
        btnMenuHide->setGeometry(QRect(180, 530, 93, 29));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(340, 340, 511, 192));
        frmMainLeft = new QFrame(centralwidget);
        frmMainLeft->setObjectName("frmMainLeft");
        frmMainLeft->setGeometry(QRect(80, 230, 211, 191));
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
        btnMenuShow_2 = new QPushButton(centralwidget);
        btnMenuShow_2->setObjectName("btnMenuShow_2");
        btnMenuShow_2->setGeometry(QRect(260, 170, 93, 29));
        frmAddAnalisator = new QFrame(centralwidget);
        frmAddAnalisator->setObjectName("frmAddAnalisator");
        frmAddAnalisator->setGeometry(QRect(310, 90, 621, 231));
        frmAddAnalisator->setFrameShape(QFrame::StyledPanel);
        frmAddAnalisator->setFrameShadow(QFrame::Raised);
        btnSaveAnal = new QPushButton(frmAddAnalisator);
        btnSaveAnal->setObjectName("btnSaveAnal");
        btnSaveAnal->setGeometry(QRect(390, 100, 93, 29));
        cbxAddProducent = new QComboBox(frmAddAnalisator);
        cbxAddProducent->setObjectName("cbxAddProducent");
        cbxAddProducent->setGeometry(QRect(10, 40, 111, 26));
        cbxAddModel = new QComboBox(frmAddAnalisator);
        cbxAddModel->setObjectName("cbxAddModel");
        cbxAddModel->setGeometry(QRect(180, 40, 101, 26));
        lineAddSN = new QLineEdit(frmAddAnalisator);
        lineAddSN->setObjectName("lineAddSN");
        lineAddSN->setGeometry(QRect(340, 40, 113, 26));
        lblAddProducent = new QLabel(frmAddAnalisator);
        lblAddProducent->setObjectName("lblAddProducent");
        lblAddProducent->setGeometry(QRect(20, 10, 101, 20));
        lblAddModel = new QLabel(frmAddAnalisator);
        lblAddModel->setObjectName("lblAddModel");
        lblAddModel->setGeometry(QRect(182, 10, 91, 20));
        lblAddSN = new QLabel(frmAddAnalisator);
        lblAddSN->setObjectName("lblAddSN");
        lblAddSN->setGeometry(QRect(340, 10, 63, 20));
        btnMenuShow = new QPushButton(centralwidget);
        btnMenuShow->setObjectName("btnMenuShow");
        btnMenuShow->setGeometry(QRect(90, 60, 93, 29));
        frmAddAnalisator_2 = new QFrame(centralwidget);
        frmAddAnalisator_2->setObjectName("frmAddAnalisator_2");
        frmAddAnalisator_2->setGeometry(QRect(480, 200, 621, 231));
        frmAddAnalisator_2->setFrameShape(QFrame::StyledPanel);
        frmAddAnalisator_2->setFrameShadow(QFrame::Raised);
        btnSaveAnal_2 = new QPushButton(frmAddAnalisator_2);
        btnSaveAnal_2->setObjectName("btnSaveAnal_2");
        btnSaveAnal_2->setGeometry(QRect(390, 100, 93, 29));
        cbxAddProducent_2 = new QComboBox(frmAddAnalisator_2);
        cbxAddProducent_2->setObjectName("cbxAddProducent_2");
        cbxAddProducent_2->setGeometry(QRect(10, 40, 111, 26));
        cbxAddModel_2 = new QComboBox(frmAddAnalisator_2);
        cbxAddModel_2->setObjectName("cbxAddModel_2");
        cbxAddModel_2->setGeometry(QRect(180, 40, 101, 26));
        lineAddSN_2 = new QLineEdit(frmAddAnalisator_2);
        lineAddSN_2->setObjectName("lineAddSN_2");
        lineAddSN_2->setGeometry(QRect(340, 40, 113, 26));
        lblAddProducent_2 = new QLabel(frmAddAnalisator_2);
        lblAddProducent_2->setObjectName("lblAddProducent_2");
        lblAddProducent_2->setGeometry(QRect(20, 10, 101, 20));
        lblAddModel_2 = new QLabel(frmAddAnalisator_2);
        lblAddModel_2->setObjectName("lblAddModel_2");
        lblAddModel_2->setGeometry(QRect(182, 10, 91, 20));
        lblAddSN_2 = new QLabel(frmAddAnalisator_2);
        lblAddSN_2->setObjectName("lblAddSN_2");
        lblAddSN_2->setGeometry(QRect(340, 10, 63, 20));
        tableView_2 = new QTableView(centralwidget);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(510, 450, 511, 192));
        btnExit = new QPushButton(centralwidget);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(900, 420, 93, 29));
        btnMenuHide_2 = new QPushButton(centralwidget);
        btnMenuHide_2->setObjectName("btnMenuHide_2");
        btnMenuHide_2->setGeometry(QRect(350, 640, 93, 29));
        Test10->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Test10);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1242, 26));
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
        btnAnalyserAdd_2->setText(QCoreApplication::translate("Test10", "btnAnalyserAdd", nullptr));
        btnSettings_2->setText(QCoreApplication::translate("Test10", "btnSettings", nullptr));
        btnReview_2->setText(QCoreApplication::translate("Test10", "btnReview", nullptr));
        btnExit_2->setText(QCoreApplication::translate("Test10", "btnExit", nullptr));
        btnMenuHide->setText(QCoreApplication::translate("Test10", "btnMenuHide", nullptr));
        btnAnalyserAdd->setText(QCoreApplication::translate("Test10", "btnAnalyserAdd", nullptr));
        btnSettings->setText(QCoreApplication::translate("Test10", "btnSettings", nullptr));
        btnReview->setText(QCoreApplication::translate("Test10", "btnReview", nullptr));
        btnMenuShow_2->setText(QCoreApplication::translate("Test10", "btnMenuShow", nullptr));
        btnSaveAnal->setText(QCoreApplication::translate("Test10", "btnSaveAnal", nullptr));
        lblAddProducent->setText(QCoreApplication::translate("Test10", "lblAddProducent", nullptr));
        lblAddModel->setText(QCoreApplication::translate("Test10", "lblAddModel", nullptr));
        lblAddSN->setText(QCoreApplication::translate("Test10", "lblAddSN", nullptr));
        btnMenuShow->setText(QCoreApplication::translate("Test10", "btnMenuShow", nullptr));
        btnSaveAnal_2->setText(QCoreApplication::translate("Test10", "btnSaveAnal", nullptr));
        lblAddProducent_2->setText(QCoreApplication::translate("Test10", "lblAddProducent", nullptr));
        lblAddModel_2->setText(QCoreApplication::translate("Test10", "lblAddModel", nullptr));
        lblAddSN_2->setText(QCoreApplication::translate("Test10", "lblAddSN", nullptr));
        btnExit->setText(QCoreApplication::translate("Test10", "btnExit", nullptr));
        btnMenuHide_2->setText(QCoreApplication::translate("Test10", "btnMenuHide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Test10: public Ui_Test10 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST10_H
