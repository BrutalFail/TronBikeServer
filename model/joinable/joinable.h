#ifndef JOINABLE_H
#define JOINABLE_H

#include <model/player/playermanager.h>

#include <model/serializable.h>

class Joinable : public Serializable
{
public:

private:
    PlayerManager *manager;
};

#endif // JOINABLE_H
