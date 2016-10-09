#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "serializable.h"

class Account : public Serializable
{
public:
    static quint8 networkID = 1;

    explicit Account(bool *signUp, QString *username, QString *password);
    ~Account();

    bool *getSignUp() const;
    void setSignUp(bool *value);

    QString *getUsername() const;
    void setUsername(QString *value);

    QString *getPassword() const;
    void setPassword(QString *value);

private:
    bool *signUp;
    QString *username;
    QString *password;
};

QDataStream &operator<<(QDataStream &ds, const Account &obj);
QDataStream &operator>>(QDataStream &ds, Account &obj) ;

#endif // ACCOUNT_H
