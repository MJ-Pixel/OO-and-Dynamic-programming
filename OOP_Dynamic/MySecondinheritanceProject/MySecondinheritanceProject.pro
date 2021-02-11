TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    myparentclass.cpp \
    myfirstsubclass.cpp \
    mysecondsubclass.cpp

HEADERS += \
    myparentclass.h \
    myfirstsubclass.h \
    mysecondsubclass.h
