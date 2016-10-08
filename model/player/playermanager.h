#ifndef PLAYERMANAGER_H
#define PLAYERMANAGER_H

#include <model/serializable.h>

class PlayerManager : public Serializable
{
public:
    static quint8 networkID = 7;
    explicit PlayerManager();
    ~PlayerManager();
};

#endif // PLAYERMANAGER_H
