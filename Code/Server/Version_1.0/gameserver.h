#ifndef GAMESERVER_H
#define GAMESERVER_H

#include "playerserver.h"
#include <QObject>
#include <QVector>

class GameServer : public QObject
{
    Q_OBJECT
public:
    explicit GameServer(QObject *parent = 0);

private:
    QVector<PlayerServer> *playerServers;

signals:

public slots:

};

#endif // GAMESERVER_H
