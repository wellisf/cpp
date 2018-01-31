QT += core
QT -= gui

CONFIG += c++11

TARGET = phoneCheck
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    PhoneCheck.cpp

HEADERS += \
    PhoneCheck.h
