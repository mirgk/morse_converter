#include "testmorseconverter.h"

#include <iostream>

#include "morse_alphabet.h"
#include "morseconverter.h"

using namespace std;

using namespace morse_converter::util;
using namespace morse_converter::test;

TestMorseConverter::TestMorseConverter()
{
    MorseConverter::init();
}

TestMorseConverter::~TestMorseConverter()
{

}

void TestMorseConverter::testtoMorseChar()
{
    // test lowercase
    QCOMPARE(MorseConverter::toMorseChar('a'), morse_alphabet::A);

    // test uppercase
    QCOMPARE(MorseConverter::toMorseChar('Q'), morse_alphabet::Q);

    // test digit
    QCOMPARE(MorseConverter::toMorseChar('0'), morse_alphabet::ZERO);

    // test an invalid character
    QCOMPARE(MorseConverter::toMorseChar('-'), "-");
}

void TestMorseConverter::testtoMorseString()
{
    // test lowercase
    QCOMPARE(MorseConverter::toMorseString("ab"), morse_alphabet::A + morse_alphabet::B);

    // test uppercase
    QCOMPARE(MorseConverter::toMorseString("QZ"), morse_alphabet::Q + morse_alphabet::Z);

    // test mixed with digits and invalid characters
    QCOMPARE(MorseConverter::toMorseString("?QsZ1 p0"), "?" + morse_alphabet::Q + morse_alphabet::S + morse_alphabet::Z +
             morse_alphabet::ONE + " " + morse_alphabet::P + morse_alphabet::ZERO);
}
