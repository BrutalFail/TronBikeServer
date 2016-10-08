#ifndef ABSTRACTPLAYER_H
#define ABSTRACTPLAYER_H

#include <QObject>

#include <model/serializable.h>

class AbstractPlayer : public Serializable
{
public:
    static quint8 networkID = 4;
    ~AbstractPlayer();
    QString *username;
    QList<QVector2D*> path;
    bool *ready;
};

#endif // ABSTRACTPLAYER_H
