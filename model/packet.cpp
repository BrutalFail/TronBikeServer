#include "packet.h"

Packet::Packet(QObject *content)
{

}

Serializable *Packet::getContent() const
{
    return content;
}
