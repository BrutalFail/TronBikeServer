#ifndef SERIALIZABLE_H
#define SERIALIZABLE_H

#include <QObject>

class Serializable : public QObject
{
public:
    static quint8 networkID = 0;

signals:

public slots:
};

#endif // SERIALIZABLE_H
