#include "morseconverter.h"

#include <QDebug>

#include "morse_alphabet.h"

using namespace morse_converter::util;

QHash<QChar, QString> MorseConverter::m_to_morse_hash = QHash<QChar, QString>();

void MorseConverter::init()
{
    m_to_morse_hash.insert('A', morse_alphabet::A);
    m_to_morse_hash.insert('B', morse_alphabet::B);
    m_to_morse_hash.insert('C', morse_alphabet::C);
    m_to_morse_hash.insert('D', morse_alphabet::D);
    m_to_morse_hash.insert('E', morse_alphabet::E);
    m_to_morse_hash.insert('F', morse_alphabet::F);
    m_to_morse_hash.insert('G', morse_alphabet::G);
    m_to_morse_hash.insert('H', morse_alphabet::H);
    m_to_morse_hash.insert('I', morse_alphabet::I);
    m_to_morse_hash.insert('J', morse_alphabet::J);
    m_to_morse_hash.insert('K', morse_alphabet::K);
    m_to_morse_hash.insert('L', morse_alphabet::L);
    m_to_morse_hash.insert('M', morse_alphabet::M);
    m_to_morse_hash.insert('N', morse_alphabet::N);
    m_to_morse_hash.insert('O', morse_alphabet::O);
    m_to_morse_hash.insert('P', morse_alphabet::P);
    m_to_morse_hash.insert('Q', morse_alphabet::Q);
    m_to_morse_hash.insert('R', morse_alphabet::R);
    m_to_morse_hash.insert('S', morse_alphabet::S);
    m_to_morse_hash.insert('T', morse_alphabet::T);
    m_to_morse_hash.insert('U', morse_alphabet::U);
    m_to_morse_hash.insert('V', morse_alphabet::V);
    m_to_morse_hash.insert('W', morse_alphabet::W);
    m_to_morse_hash.insert('X', morse_alphabet::X);
    m_to_morse_hash.insert('Y', morse_alphabet::Y);
    m_to_morse_hash.insert('Z', morse_alphabet::Z);

    m_to_morse_hash.insert('0', morse_alphabet::ZERO);
    m_to_morse_hash.insert('1', morse_alphabet::ONE);
    m_to_morse_hash.insert('2', morse_alphabet::TWO);
    m_to_morse_hash.insert('3', morse_alphabet::THREE);
    m_to_morse_hash.insert('4', morse_alphabet::FOUR);
    m_to_morse_hash.insert('5', morse_alphabet::FIVE);
    m_to_morse_hash.insert('6', morse_alphabet::SIX);
    m_to_morse_hash.insert('7', morse_alphabet::SEVEN);
    m_to_morse_hash.insert('8', morse_alphabet::EIGHT);
    m_to_morse_hash.insert('9', morse_alphabet::NINE);
}

QString MorseConverter::toMorseString(const QString& str)
{
    QString result;
    for (QChar ch : str)
        result += toMorseChar(ch);

    return result;
}

QString MorseConverter::toMorseChar(const QChar& ch)
{
    QChar upper = ch.toUpper();
    if (m_to_morse_hash.contains(upper) == false)
        return ch;

    return m_to_morse_hash.value(upper);
}
