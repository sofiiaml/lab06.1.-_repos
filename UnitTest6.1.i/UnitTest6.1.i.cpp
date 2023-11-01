#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.1.i/PR6.1.i.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int cout = 0;
			int r[5] = { 10,12,15,18,20 };

			sumElements(r, 5);

			Assert::AreEqual(0, cout);
		}
	};
}
