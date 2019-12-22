#ifndef TEST_MORSE_CONVERTER_H
#define TEST_MORSE_CONVERTER_H

#include <QtTest/QTest>
#include <QObject>

namespace morse_converter {
	namespace test {

        class TestMorseConverter : public QObject
		{
			Q_OBJECT
		public:
            TestMorseConverter();
            ~TestMorseConverter();

		private slots:
            void testtoMorseChar();
            void testtoMorseString();
		};
	}
}

#endif

