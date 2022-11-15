/********************************************************************************
** Form generated from reading UI file 'dbmain.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBMAIN_H
#define UI_DBMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DbMain
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DbMain)
    {
        if (DbMain->objectName().isEmpty())
            DbMain->setObjectName("DbMain");
        DbMain->resize(1181, 651);
        centralwidget = new QWidget(DbMain);
        centralwidget->setObjectName("centralwidget");
        DbMain->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DbMain);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1181, 22));
        DbMain->setMenuBar(menubar);
        statusbar = new QStatusBar(DbMain);
        statusbar->setObjectName("statusbar");
        DbMain->setStatusBar(statusbar);

        retranslateUi(DbMain);

        QMetaObject::connectSlotsByName(DbMain);
    } // setupUi

    void retranslateUi(QMainWindow *DbMain)
    {
        DbMain->setWindowTitle(QCoreApplication::translate("DbMain", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DbMain: public Ui_DbMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBMAIN_H
