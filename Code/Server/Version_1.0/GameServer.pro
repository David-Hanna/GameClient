#-------------------------------------------------
#
# Project created by QtCreator 2014-08-01T20:18:05
#
#-------------------------------------------------

QT       += core
QT       += network
QT       -= gui

TARGET = GameServer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    masterserver.cpp \
    gameserver.cpp \
    playerserver.cpp

HEADERS += \
    masterserver.h \
    gameserver.h \
    playerserver.h \
    main.h

OTHER_FILES += \
    Log.txt
