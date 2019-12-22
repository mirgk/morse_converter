#include "mainwindow.h"

#include <QApplication>

#ifndef UNIT_TESTING

using namespace morse_converter::gui;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}

#endif

#ifdef UNIT_TESTING
#include "testmorseconverter.h"

using namespace morse_converter::test;

int main(int argc, char** argv)
{
   int status = 0;

   TestMorseConverter tmc;
   status |= QTest::qExec(&tmc, argc, argv);

   return status;
}

#endif
