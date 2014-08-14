#include "mainwindow.h"
#include "settingsdata.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    SettingsData::readSettings();

    MainWindow w;
    w.show();

    return a.exec();
}
