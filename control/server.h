#ifndef SERVER_H
#define SERVER_H

#include <QtNetwork/qtcpserver.h>
#include <QtNetwork/qudpsocket.h>

class Server
{
public:
    explicit Server();
    ~Server();

private:
    QTcpServer *tcp;
    QUdpSocket *udp;
};

#endif // SERVER_H
