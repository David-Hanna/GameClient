#include "settingsdata.h"

bool SettingsData::mFullScreen = false;
QString SettingsData::mWindowSize = QString("1024x768");

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
                            mFullScreen = true;
                        }
                    }
                }
                if (in.name() == XMLStrings::WINDOW_SIZE_NODE)
                {
                    QXmlStreamAttributes attributes = in.attributes();
                    if (attributes.hasAttribute(XMLStrings::VALUE_ATTRIBUTE))
                    {
                        mWindowSize = attributes.value(XMLStrings::VALUE_ATTRIBUTE).toString();
                    }
                }
            }
        }
    }
    else qWarning() << "WARNING: Failed to read settings (first time player?): " << settingsFile.errorString();
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
        out.writeAttribute(XMLStrings::VALUE_ATTRIBUTE, mWindowSize);
        out.writeEndElement();

        out.writeStartElement(XMLStrings::FULLSCREEN_NODE);
        out.writeAttribute(XMLStrings::VALUE_ATTRIBUTE, QString::number(mFullScreen));
        out.writeEndElement();

        out.writeEndElement();
        out.writeEndDocument();

        return true;
    }
    return false;
}

bool SettingsData::fullScreen()
{
    return mFullScreen;
}

QString SettingsData::windowSize()
{
    return mWindowSize;
}

void SettingsData::setFullScreen(bool pFullScreen)
{
    mFullScreen = pFullScreen;
}

void SettingsData::setWindowSize(QString pWindowSize)
{
    mWindowSize = pWindowSize;
}
