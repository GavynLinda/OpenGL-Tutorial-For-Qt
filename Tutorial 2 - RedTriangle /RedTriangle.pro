#-------------------------------------------------
#
# Project created by QtCreator 2015-10-12T10:58:09
#
#-------------------------------------------------

QT       += core gui

CONFIG += C++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RedTriangle
TEMPLATE = app

INCLUDEPATH += ../External/glew-1.13.0/include

SOURCES +=\
    Main.cpp \
    RedTriangle.cpp

HEADERS  += \
    RedTriangle.hpp

LIBS += ../External/glew-1.13.0/lib/libGLEW.a

RESOURCES += \
    glsl.qrc
