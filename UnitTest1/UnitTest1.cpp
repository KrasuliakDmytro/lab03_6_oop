#include "pch.h"
#include "CppUnitTest.h"

#include <iostream>
#include <sstream>

#include "../lr3_6/B1.h"
#include "../lr3_6/B2.h"
#include "../lr3_6/D1.h"
#include "../lr3_6/D2.h"
#include "../lr3_6/D3.h"
#include "../lr3_6/D4.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        // Тест функції show() класу B1
        TEST_METHOD(Test_B1_Show)
        {
            B1 obj(10);

            ostringstream output;
            streambuf* old = cout.rdbuf(output.rdbuf());

            obj.show();

            cout.rdbuf(old);

            Assert::IsTrue(
                output.str() == "Class B1: b1 = 10\n"
            );
        }

        // Тест функції show() класу B2
        TEST_METHOD(Test_B2_Show)
        {
            B2 obj(20);

            ostringstream output;
            streambuf* old = cout.rdbuf(output.rdbuf());

            obj.show();

            cout.rdbuf(old);

            Assert::IsTrue(
                output.str() == "Class B2: b2 = 20\n"
            );
        }

        // Тест функції show() класу D1
        TEST_METHOD(Test_D1_Show)
        {
            D1 obj(10, 30);

            ostringstream output;
            streambuf* old = cout.rdbuf(output.rdbuf());

            obj.show();

            cout.rdbuf(old);

            Assert::IsTrue(
                output.str() ==
                "Class B1: b1 = 10\n"
                "Class D1: d1 = 30\n"
            );
        }

        // Тест функції show() класу D2
        TEST_METHOD(Test_D2_Show)
        {
            D2 obj(40, 50);

            ostringstream output;
            streambuf* old = cout.rdbuf(output.rdbuf());

            obj.show();

            cout.rdbuf(old);

            Assert::IsTrue(
                output.str() ==
                "Class B1: b1 = 40\n"
                "Class D2: d2 = 50\n"
            );
        }

        // Тест функції show() класу D3
        TEST_METHOD(Test_D3_Show)
        {
            D3 obj(60, 70, 80, 90);

            ostringstream output;
            streambuf* old = cout.rdbuf(output.rdbuf());

            obj.show();

            cout.rdbuf(old);

            Assert::IsTrue(
                output.str() ==
                "Class B1: b1 = 60\n"
                "Class D2: d2 = 70\n"
                "Class B2: b2 = 80\n"
                "Class D3: d3 = 90\n"
            );
        }

        // Тест функції show() класу D4
        TEST_METHOD(Test_D4_Show)
        {
            D4 obj(100, 110, 120, 130, 140, 150, 160);

            ostringstream output;
            streambuf* old = cout.rdbuf(output.rdbuf());

            obj.show();

            cout.rdbuf(old);

            Assert::IsTrue(
                output.str() ==
                "Class B1: b1 = 100\n"
                "Class D1: d1 = 110\n"
                "Class B1: b1 = 120\n"
                "Class D2: d2 = 130\n"
                "Class B2: b2 = 140\n"
                "Class D3: d3 = 150\n"
                "Class D4: d4 = 160\n"
            );
        }
	};
}
