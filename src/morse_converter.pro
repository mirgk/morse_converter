QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app
CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG(release, debug|release) : TARGET = MorseConverter
CONFIG(debug, debug|release) : TARGET = MorseConverterd

CONFIG(release, debug|release) : DESTDIR = $$_PRO_FILE_PWD_/../bin
CONFIG(debug, debug|release) : DESTDIR = $$_PRO_FILE_PWD_/../bin

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    morseconverter.cpp

HEADERS += \
    mainwindow.h \
    morse_alphabet.h \
    morseconverter.h

FORMS += \
    mainwindow.ui

#uncomment following line to enable unit testing
#CONFIG += test
CONFIG(test) {

    QT += testlib

    INCLUDEPATH += $$_PRO_FILE_PWD_/../test/unit/src

    SOURCES += \
    ../test/unit/src/testmorseconverter.cpp

    HEADERS += \
    ../test/unit/src/testmorseconverter.h

    DEFINES += UNIT_TESTING

    DESTDIR = $$_PRO_FILE_PWD_/../test/unit/bin/

    TARGET = Morse_Converter_Unit_Test
}

