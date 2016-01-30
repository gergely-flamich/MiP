#-------------------------------------------------
#
# Project created by QtCreator 2016-01-23T12:26:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT += bluetooth

CONFIG += c++11

TARGET = MIP
TEMPLATE = app


SOURCES += main.cpp\
        mipcontroller.cpp

HEADERS  += mipcontroller.h

FORMS    += mipcontroller.ui
