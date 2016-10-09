QT += core network
QT -= gui

CONFIG += c++11

TARGET = TronBikeServer
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    model/serializable.cpp \
    model/packet.cpp \
    model/tronbike.cpp \
    model/joinable/queue.cpp \
    model/joinable/joinable.cpp \
    model/player/playermanager.cpp \
    model/player/abstractplayer.cpp \
    model/player/human.cpp \
    model/player/bot.cpp \
    model/joinable/lobby.cpp \
    model/joinable/game.cpp \
    model/account.cpp \
    control/server.cpp

HEADERS += \
    model/serializable.h \
    model/packet.h \
    model/tronbike.h \
    model/joinable/queue.h \
    model/joinable/joinable.h \
    model/player/playermanager.h \
    model/player/abstractplayer.h \
    model/player/human.h \
    model/player/bot.h \
    model/joinable/lobby.h \
    model/joinable/game.h \
    model/account.h \
    control/server.h
