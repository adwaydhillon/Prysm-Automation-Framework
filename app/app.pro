#-------------------------------------------------
#
# Project created by QtCreator 2015-06-25T16:12:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = app
TEMPLATE = app

SOURCES += main.cpp\
    home.cpp \
    validated.cpp \
    mainwindow.cpp \
    configure.cpp \
    testselection.cpp

HEADERS  += \
    home.h \
    validated.h \
    mainwindow.h \
    configure.h \
    testselection.h

FORMS    += \
    home.ui \
    validated.ui \
    mainwindow.ui \
    configure.ui \
    testselection.ui

RESOURCES += \
    app.qrc
