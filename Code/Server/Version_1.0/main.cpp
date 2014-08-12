#include "main.h"

Printer::Printer(QObject *parent) :
    QObject(parent)
{
    LOG_PATH = "Log.txt";

    log = new QFile(LOG_PATH);
    log->open(QIODevice::Append | QIODevice::WriteOnly | QIODevice::Text);
    out = new QTextStream(log);
}

Printer::~Printer()
{
    delete out;
    delete log;
}

void Printer::print(QString message)
{
    *out << message << "\n";
    out->flush();
    qDebug() << message;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Printer printer;
    printer.print ("Server Started - " + QDateTime::currentDateTime().toString());

    MasterServer masterServer;
    QObject::connect(&masterServer, SIGNAL(printSignal(QString)), &printer, SLOT(print(QString)));
    masterServer.listen();

    return a.exec();
}
