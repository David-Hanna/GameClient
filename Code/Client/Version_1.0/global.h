#ifndef GLOBAL_H
#define GLOBAL_H

#include <QString>
#include <QStandardPaths>

namespace FileStrings
{
    const QString SETTINGS_PATH = QString(QStandardPaths::DataLocation);
}

namespace XMLStrings
{
    const QString SETTINGS_NODE = QString("Settings");
    const QString FULLSCREEN_NODE = QString("FullScreen");
    const QString WINDOW_SIZE_NODE = QString("WindowSize");
    const QString VALUE_ATTRIBUTE = QString("value");
}

namespace WindowSizes
{
    const QString SIZE_1024x768 = QString("1024x768");
    const QString SIZE_1280x960 = QString("1280x960");
    const QString SIZE_1344x1008 = QString("1344x1008");
    const QString SIZE_1600x900 = QString("1600x900");
    const QString SIZE_1600x1200 = QString("1600x1200");
    const QString SIZE_2048x1152 = QString("2048x1152");
    const QString SIZE_2560x1440 = QString("2560x1440");
}

#endif // GLOBAL_H
