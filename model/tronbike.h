#ifndef TRONBIKE_H
#define TRONBIKE_H

#include "account.h"

#include <QObject>

#include <model/joinable/game.h>
#include <model/joinable/lobby.h>
#include <model/joinable/queue.h>

#include <model/player/abstractplayer.h>

class TronBike
{
public:
    explicit TronBike();
    ~TronBike();

public slots:
    void handle(Account *account);
    void handle(Game *game);
    void handle(Lobby *lobby);
    void handle(Queue *queue);
    void handle(AbstractPlayer *abstractPlayer);
private:
    Lobby *lobby;
    QList<Game*> *game;
};

#endif // TRONBIKE_H
