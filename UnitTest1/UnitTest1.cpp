#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_lab_1.3/BitString.h"
#include "../OOP_lab_1.3/BitString.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			BitString zzz;
			Assert::IsTrue(zzz.Init(1, 30));
			Assert::IsFalse(zzz.Init(-1, 30));

		}
	};
}
