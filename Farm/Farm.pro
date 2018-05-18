QT += core
QT -= gui

CONFIG += c++11

TARGET = Farm
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Animal.cpp \
    Cow.cpp \
    Chicken.cpp \
    Pork.cpp \
    Creator.cpp \
    Farm.cpp \
    FarmAge.cpp \
    Dog.cpp

HEADERS += \
    Animal.h \
    Cow.h \
    Chicken.h \
    Pork.h \
    Creator.h \
    Farm.h \
    FarmAge.h \
    Dog.h
