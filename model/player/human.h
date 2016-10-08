#ifndef HUMAN_H
#define HUMAN_H

#include "abstractplayer.h"

class Human : public AbstractPlayer
{
public:
    static quint8 networkID = 7;

    explicit Human();
    ~Human();

};

#endif // HUMAN_H
