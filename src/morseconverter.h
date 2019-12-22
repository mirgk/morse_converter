#ifndef MORSE_CONVERTER_H
#define MORSE_CONVERTER_H

#include <QString>
#include <QHash>

namespace morse_converter {
    namespace util {

        /*!
         * \brief Performs char/string based morse conversion
         *        Uses compiler generated constructor, destructor.
         *        Holds some static stuff for providing its functionality.
         */
        class MorseConverter
        {
        public:
            static void init();

            static QString toMorseString(const QString& str);
            static QString toMorseChar(const QChar& ch);

        private:
            static QHash<QChar, QString> m_to_morse_hash;
        };
    }
}

#endif // MORSECONVERTER_H
