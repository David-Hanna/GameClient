#-------------------------------------------------
#
# Project created by QtCreator 2014-07-26T22:00:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Game
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    mainmenu.cpp \
    gameview.cpp \
    settingsview.cpp \
    settingsdata.cpp \
    gameselectionview.cpp \
    global.cpp

HEADERS  += mainwindow.h \
    mainmenu.h \
    gameview.h \
    settingsview.h \
    settingsdata.h \
    global.h \
    gameselectionview.h

OTHER_FILES +=

RESOURCES += resources.qrc
