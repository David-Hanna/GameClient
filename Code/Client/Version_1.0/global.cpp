#include "global.h"

const QString FileStrings::SETTINGS_PATH = QStandardPaths::writableLocation(QStandardPaths::DataLocation).append(QString(QDir::separator()).append("UPEIGameSettings.xml"));

QHash<QString, QString> initializeStrings()
{
    QHash<QString, QString> strings;

    QFile stringsFile(FileStrings::GAME_STRINGS_PATH);
    if (stringsFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QXmlStreamReader in(&stringsFile);
        while (!in.atEnd() && !in.hasError())
        {
            QXmlStreamReader::TokenType token = in.readNext();

            if (token == QXmlStreamReader::StartDocument)
                continue;

            if (token == QXmlStreamReader::StartElement)
            {
                if (in.name() == XMLStrings::STRING_NODE)
                {
                    QXmlStreamAttributes attributes = in.attributes();
                    if (attributes.hasAttribute(XMLStrings::ID_ATTRIBUTE))
                    {
                        strings[attributes.value(XMLStrings::ID_ATTRIBUTE).toString()] = in.readElementText();
                    }
                }
            }
        }
    }

    return strings;
}
const QHash<QString, QString> GameStrings::STRING = initializeStrings();

QVector<QString> initializeWindowSizes()
{
    QVector<QString> windowSizes;

    QFile menuConfig(FileStrings::MENU_CONFIG_PATH);
    if (menuConfig.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QXmlStreamReader in(&menuConfig);
        while (!in.atEnd() && !in.hasError())
        {
            QXmlStreamReader::TokenType token = in.readNext();

            if (token == QXmlStreamReader::StartDocument)
                continue;

            if (token == QXmlStreamReader::StartElement)
            {
                if (in.name() == XMLStrings::WINDOW_SIZE_NODE)
                {
                    QXmlStreamAttributes attributes = in.attributes();
                    if (attributes.hasAttribute(XMLStrings::WIDTH_ATTRIBUTE)
                            && attributes.hasAttribute(XMLStrings::HEIGHT_ATTRIBUTE))
                    {
                        QString windowSize = attributes.value(XMLStrings::WIDTH_ATTRIBUTE).toString();
                        windowSize = windowSize + QString("x") + attributes.value(XMLStrings::HEIGHT_ATTRIBUTE).toString();
                        windowSizes.push_back(windowSize);
                    }
                }
            }
        }
    }
    return windowSizes;
}
const QVector<QString> Config::WINDOW_SIZES = initializeWindowSizes();
