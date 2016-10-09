#ifndef LOBBY_H
#define LOBBY_H

#include "joinable.h"
#include "queue.h"

class Lobby : public Joinable
{
public:
    static quint8 networkID = 3;
    explicit Lobby();
    ~Lobby();

private:
    QList<Queue*> *queue;
};

#endif // LOBBY_H
