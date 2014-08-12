#ifndef SETTINGSDATA_H
#define SETTINGSDATA_H

#include <QString>
#include <QFile>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>

extern bool fullScreen;

void writeSettings();
void readSettings();

#endif // SETTINGSDATA_H
