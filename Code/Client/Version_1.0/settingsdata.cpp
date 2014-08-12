#include "settingsdata.h"

QString SETTINGS_PATH("Settings.xml");
QString SETTINGS_NODE("Settings");
QString FULLSCREEN_NODE("FullScreen");
QString VALUE_ATTRIBUTE("value");

bool fullScreen = false;

void writeSettings()
{
    QFile settingsFile(SETTINGS_PATH);
    if (settingsFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QXmlStreamWriter out(&settingsFile);
        out.writeStartDocument();
        out.writeStartElement(SETTINGS_NODE);
        out.writeStartElement(FULLSCREEN_NODE);
        out.writeAttribute(VALUE_ATTRIBUTE, QString::number(fullScreen));
        out.writeEndElement();
        out.writeEndElement();
        out.writeEndDocument();
    }
}

void readSettings()
{
    QFile settingsFile(SETTINGS_PATH);
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
                if (in.name() == SETTINGS_NODE)
                    continue;

                if (in.name() == FULLSCREEN_NODE)
                {
                    QXmlStreamAttributes attributes = in.attributes();
                    if (attributes.hasAttribute(VALUE_ATTRIBUTE))
                    {
                        if (attributes.value(VALUE_ATTRIBUTE).toInt())
                        {
                            fullScreen = true;
                        }
                    }
                }
            }
        }
    }
}
