#ifndef SETTINGSDATA_H
#define SETTINGSDATA_H

#include "global.h"

#include <QString>
#include <QFile>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QDebug>

class SettingsData : QObject
{
    Q_OBJECT
public:
    static void readSettings();
    static bool writeSettings();

    static bool isFullScreen();
    static QString getWindowSize();
    static int getWindowWidth();
    static int getWindowHeight();

    static void setFullScreen(bool pFullScreen);
    static void setWindowSize(QString pWindowSize);
    static void setWindowWidth(int pWindowWidth);
    static void setWindowHeight(int pWindowHeight);

private:
    static bool fullScreen;
    static int windowWidth;
    static int windowHeight;
};

#endif // SETTINGSDATA_H
