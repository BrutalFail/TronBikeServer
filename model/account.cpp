#include "account.h"

Account::Account(bool *signUp, QString *username, QString *password)
{
    this->signUp = signUp;
    this->username = username;
    this->password = password;
}

Account::~Account()
{
    delete this->signUp;
    delete this->username;
    delete this->password;
}

bool *Account::getSignUp() const
{
    return signUp;
}

void Account::setSignUp(bool *value)
{
    signUp = value;
}

QString *Account::getUsername() const
{
    return username;
}

void Account::setUsername(QString *value)
{
    username = value;
}

QString *Account::getPassword() const
{
    return password;
}

void Account::setPassword(QString *value)
{
    password = value;
}

QDataStream &operator<<(QDataStream &ds, const Account &obj)
{
    ds << obj.getSignUp();
    ds << obj.getUsername();
    ds << obj.getPassword();
    return ds;
}

QDataStream &operator>>(QDataStream &ds, Account &obj)
{
    bool signUp;
    QString username;
    QString password;
    ds >> signUp >> username >> password;
    obj.setSignUp(&signUp);
    obj.setUsername(&username);
    obj.setPassword(&password);
    return ds;
}
