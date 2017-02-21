QT += core
QT -= gui

CONFIG += c++11

TARGET = TesterForGameOfLife
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    testmain.cpp \
    test_filleremptyboard.cpp \
    test_generator.cpp \
    ../GameOfLife/checkbuttonpressed.cpp \
    ../GameOfLife/converter.cpp \
    ../GameOfLife/counterofneighbours.cpp \
    ../GameOfLife/displaygameboardonthecommandline.cpp \
    ../GameOfLife/filler.cpp \
    ../GameOfLife/filleremptyboard.cpp \
    ../GameOfLife/fillerwithrandomvalues.cpp \
    ../GameOfLife/game.cpp \
    ../GameOfLife/generator.cpp \
    ../GameOfLife/iteratorOverCells.cpp \
    ../GameOfLife/rules.cpp \
    ../GameOfLife/savetofilewithnameandtext.cpp \
    test_checkfilecheckbuttonpressed.cpp \
    mock_checkbuttonpressed.cpp \
    ../GameOfLife/board.cpp \
    test_converter.cpp \
    test_fillerwithrandomvalues.cpp \
    ../GameOfLife/systemcomand.cpp



# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
    Tester_Catch.h \
    ../GameOfLife/board.h \
    ../GameOfLife/checkbuttonpressed.h \
    ../GameOfLife/converter.h \
    ../GameOfLife/counterofneighbours.h \
    ../GameOfLife/displaygameboardonthecommandline.h \
    ../GameOfLife/filler.h \
    ../GameOfLife/filleremptyboard.h \
    ../GameOfLife/fillerwithrandomvalues.h \
    ../GameOfLife/Game.h \
    ../GameOfLife/generator.h \
    ../GameOfLife/iteratorOverCells.h \
    ../GameOfLife/rules.h \
    ../GameOfLife/savetofilewithnameandtext.h \
    mock_checkbuttonpressed.h \
    ../GameOfLife/systemcomand.h

DISTFILES += \
    TesterForGameOfLife.pro.user \
    ../GameOfLife/GameOfLife.pro.user \
    ../GameOfLife/README.md

SUBDIRS += \
    ../GameOfLife/GameOfLife.pro \
    ../GameOfLife/GameOfLife.pro
