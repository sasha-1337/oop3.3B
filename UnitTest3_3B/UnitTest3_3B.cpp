#include "pch.h"
#include "CppUnitTest.h"
#include "../oop3.3B/Pair.h"
#include "D:\Student\oop3.3B\oop3.3B\Pair.cpp"
#include "../oop3.3B/Money.h"
#include "D:\Student\oop3.3B\oop3.3B\Money.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33B
{
	TEST_CLASS(UnitTest33B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money a;
			bool t;
			t = a.Init(1000, 500, 200, 100, 50, 20, 10, 5, 2, 1, 0.50, 0.10);
			Assert::AreEqual(t, true);
		}
	};
}
