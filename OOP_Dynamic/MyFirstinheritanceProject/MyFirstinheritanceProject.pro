TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    myparentclass.cpp \
    mysubclass.cpp \
    mybaseclass.cpp

HEADERS += \
    myparentclass.h \
    mysubclass.h \
    mybaseclass.h
