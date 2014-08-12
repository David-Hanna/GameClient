#include "masterserver.h"

const int MasterServer::PORT = 1667;

MasterServer::MasterServer(QObject *parent) :
    QObject(parent)
{
    gameServers = new QVector<GameServer>();
    server = new QTcpServer(this);
    connect(server, SIGNAL(newConnection()), this, SLOT(onNewConnection()));
}

MasterServer::~MasterServer()
{
    // send a message to each Game Server before shutting them down.
    delete gameServers;
    delete server;
}

void MasterServer::listen()
{
    server->listen(QHostAddress::Any, PORT);
}

void MasterServer::print(QString message)
{
    emit printSignal(message);
}

void MasterServer::onNewConnection()
{
    socket = server->nextPendingConnection();
    print ("New incoming connection - " + socket->peerAddress().toString());
    connect(socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(onDisconnect()));
}

void MasterServer::onReadyRead()
{
    while (socket->canReadLine())
    {
        QByteArray byteArray = socket->readLine();
        if (strcmp(byteArray.constData(), "!exit\n") == 0)
            socket->disconnectFromHost();
        else
            print(strcat("Received message - ", byteArray.constData()));
    }
}

void MasterServer::onDisconnect()
{
    print("Connection disconnected - " + socket->peerAddress().toString());
    disconnect(socket, SIGNAL(disconnected()));
    disconnect(socket, SIGNAL(readyRead()));
    socket->deleteLater();
}
