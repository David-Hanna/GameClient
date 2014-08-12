#ifndef MASTERSERVER_H
#define MASTERSERVER_H

#include "gameserver.h"
#include <QObject>
#include <QString>
#include <QVector>
#include <QTcpServer>
#include <QTcpSocket>
#include <QByteArray>

class MasterServer : public QObject
{
    Q_OBJECT
public:
    explicit MasterServer(QObject *parent = 0);
    virtual ~MasterServer();

    void listen();

private:
    static const int PORT;
    QVector<GameServer> *gameServers;
    QTcpSocket *socket;
    QTcpServer *server;

signals:
    void printSignal(QString message);

public slots:
    void print(QString message);
    void onNewConnection();
    void onReadyRead();
    void onDisconnect();

};

#endif // MASTERSERVER_H
