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

    static bool fullScreen();
    static QString windowSize();

    static void setFullScreen(bool pFullScreen);
    static void setWindowSize(QString pWindowSize);

private:
    static bool mFullScreen;
    static QString mWindowSize;
};

#endif // SETTINGSDATA_H
