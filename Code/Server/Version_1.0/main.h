#ifndef MAIN_H
#define MAIN_H

#include "masterserver.h"
#include <QObject>
#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <QFile>
#include <QIODevice>
#include <QTextStream>
#include <QDateTime>

class Printer : public QObject
{
    Q_OBJECT
public:
    explicit Printer(QObject *parent = 0);
    virtual ~Printer();

public slots:
    void print(QString message);

private:
    QString LOG_PATH;
    QFile *log;
    QTextStream *out;
};

#endif // MAIN_H
