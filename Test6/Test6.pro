QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DBase/dbmain.cpp \
    Settings/settings.cpp \
    Timery/dates.cpp \
    Timery/timedate.cpp \
    main.cpp \
    test10.cpp

HEADERS += \
    DBase/dbmain.h \
    Settings/settings.h \
    Timery/dates.h \
    Timery/timedate.h \
    test10.h

FORMS += \
    DBase/dbmain.ui \
    Settings/settings.ui \
    test10.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    DBase/2022.11.02 — kopia.db \
    DBase/2022.11.02.db
