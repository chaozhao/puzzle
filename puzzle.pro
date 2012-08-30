#-------------------------------------------------
#
# Project created by QtCreator 2012-06-04T09:38:46
#
#-------------------------------------------------

QT       += core gui

TARGET = puzzle
TEMPLATE = app


SOURCES += main.cpp\
    tile.cpp \
    board.cpp \
    search.cpp \
    dfs.cpp \
    dimension.cpp \
    puzzlewindow.cpp

HEADERS  += \
    tile.h \
    board.h \
    search.h \
    dfs.h \
    dimension.h \
    puzzlewindow.h

FORMS    += mainwindow.ui
