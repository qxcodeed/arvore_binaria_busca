TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -L/usr/lib -lsfml-graphics -lsfml-window -lsfml-system
INCLUDEPATH += /usr/lib/
CONFIG += c++11

SOURCES += main.cpp \
    binaria/btree.cpp

HEADERS += \
    binaria/btree.h \
    binaria/node.h \
    libs/btreeview.h \
    libs/player.h

