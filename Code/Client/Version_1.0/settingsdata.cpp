#include "settingsdata.h"

bool SettingsData::fullScreen = false;
int SettingsData::windowWidth = 1024;
int SettingsData::windowHeight = 768;

void SettingsData::readSettings()
{
    QFile settingsFile(FileStrings::SETTINGS_PATH);
    if (settingsFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QXmlStreamReader in(&settingsFile);
        while (!in.atEnd() && !in.hasError())
        {
            QXmlStreamReader::TokenType token = in.readNext();

            if (token == QXmlStreamReader::StartDocument)
                continue;

            if (token == QXmlStreamReader::StartElement)
            {
                if (in.name() == XMLStrings::FULLSCREEN_NODE)
                {
                    QXmlStreamAttributes attributes = in.attributes();
                    if (attributes.hasAttribute(XMLStrings::VALUE_ATTRIBUTE))
                    {
                        if (attributes.value(XMLStrings::VALUE_ATTRIBUTE).toInt())
                        {
                            fullScreen = true;
                        }
                    }
                }
                if (in.name() == XMLStrings::WINDOW_SIZE_NODE)
                {
                    QXmlStreamAttributes attributes = in.attributes();
                    if (attributes.hasAttribute(XMLStrings::VALUE_ATTRIBUTE))
                    {
                        setWindowSize(attributes.value(XMLStrings::VALUE_ATTRIBUTE).toString());
                    }
                }
            }
        }
    }
    else
    {
        qWarning() << "WARNING: Failed to read settings ("
                   << FileStrings::SETTINGS_PATH << "): "
                   << settingsFile.errorString();
    }
}

bool SettingsData::writeSettings()
{
    QFile settingsFile(FileStrings::SETTINGS_PATH);
    if (settingsFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QXmlStreamWriter out(&settingsFile);
        out.writeStartDocument();
        out.writeStartElement(XMLStrings::SETTINGS_NODE);

        out.writeStartElement(XMLStrings::WINDOW_SIZE_NODE);
        out.writeAttribute(XMLStrings::VALUE_ATTRIBUTE, getWindowSize());
        out.writeEndElement();

        out.writeStartElement(XMLStrings::FULLSCREEN_NODE);
        out.writeAttribute(XMLStrings::VALUE_ATTRIBUTE, QString::number(fullScreen));
        out.writeEndElement();

        out.writeEndElement();
        out.writeEndDocument();

        return true;
    }
    qWarning() << "WARNING: Failed to write settings ("
               << FileStrings::SETTINGS_PATH << "): "
               << settingsFile.errorString();
    return false;
}

bool SettingsData::isFullScreen()
{
    return fullScreen;
}

QString SettingsData::getWindowSize()
{
    return QString::number(windowWidth).append("x").append(QString::number(windowHeight));
}

int SettingsData::getWindowWidth()
{
    return windowWidth;
}

int SettingsData::getWindowHeight()
{
    return windowHeight;
}

void SettingsData::setFullScreen(bool pFullScreen)
{
    fullScreen = pFullScreen;
}

void SettingsData::setWindowSize(QString pWindowSize)
{
    QStringList windowSize = pWindowSize.split("x");
    windowWidth = windowSize[0].toInt();
    windowHeight = windowSize[1].toInt();
}

void SettingsData::setWindowWidth(int pWindowWidth)
{
    windowWidth = pWindowWidth;
}

void SettingsData::setWindowHeight(int pWindowHeight)
{
    windowHeight = pWindowHeight;
}
