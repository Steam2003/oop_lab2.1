#include "pch.h"
#include "CppUnitTest.h"
#include "../Bill.h"
#include "../Bill.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Bill b(5, 3);
			int test = b.cost();
			Assert::AreEqual(15, test);
		}
	};
}
