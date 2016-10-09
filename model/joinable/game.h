#ifndef GAME_H
#define GAME_H

#include "joinable.h"

class Game : public Joinable
{
public:
    static quint8 networkID = 2;
    explicit Game();
    ~Game();
};

#endif // GAME_H
