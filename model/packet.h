#ifndef PACKET_H
#define PACKET_H

#include "serializable.h"

class Packet
{
public:
    explicit Packet(QObject *content);
    Serializable *getContent() const;

private:
    int *size;
    Serializable *content;
};

#endif // PACKET_H
