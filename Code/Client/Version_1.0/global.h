#ifndef GLOBAL_H
#define GLOBAL_H

#include <QString>
#include <QStandardPaths>
#include <QDir>
#include <QHash>
#include <QFile>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QDebug>
#include <QVector>

namespace FileStrings
{
    extern const QString SETTINGS_PATH;
    const QString GAME_STRINGS_PATH = QString(":/xmls/strings/strings.xml");
    const QString MENU_CONFIG_PATH = QString(":/xmls/config/MenuConfig.xml");
}

namespace XMLStrings
{
    const QString SETTINGS_NODE = QString("Settings");
    const QString FULLSCREEN_NODE = QString("FullScreen");
    const QString WINDOW_SIZES_NODE = QString("WindowSizes");
    const QString WINDOW_SIZE_NODE = QString("WindowSize");
    const QString STRING_NODE = QString("string");

    const QString VALUE_ATTRIBUTE = QString("value");
    const QString ID_ATTRIBUTE = QString("id");
    const QString WIDTH_ATTRIBUTE = QString("width");
    const QString HEIGHT_ATTRIBUTE = QString("height");
}

namespace GameStrings
{
    extern const QHash<QString, QString> STRING;
}

namespace Config
{
    extern const QVector<QString> WINDOW_SIZES;
}

namespace Offsets
{
    const int MENU_BUTTON_HORIZONTAL_OFFSET = 10;
    const int MENU_BUTTON_VERTICAL_OFFSET = 10;
}

#endif // GLOBAL_H
