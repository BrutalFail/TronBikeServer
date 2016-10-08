#ifndef QUEUE_H
#define QUEUE_H

#include "joinable.h"

class Queue : public Joinable
{
public:
    static quint8 networkID = 4;
    explicit Queue();
    ~Queue();
};

#endif // QUEUE_H
