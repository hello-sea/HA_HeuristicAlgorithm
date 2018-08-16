#-------------------------------------------------
#
# Project created by QtCreator 2017-03-23T14:55:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EightQueens
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mywidget.cpp \
    ga.cpp \
    sa.cpp \
    hillclimbing.cpp

HEADERS  += mainwindow.h \
    mywidget.h \
    ga.h \
    sa.h \
    hillclimbing.h

FORMS    += mainwindow.ui
