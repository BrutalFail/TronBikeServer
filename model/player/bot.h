#ifndef BOT_H
#define BOT_H

#include "abstractplayer.h"

class Bot : public AbstractPlayer
{
public:
    static quint8 networkID = 6;

    explicit Bot();
    ~Bot();

    Difficulty *difficulty;

    enum Difficulty { EASY, NORMAL, INTERMEDIATE };
};

#endif // BOT_H
