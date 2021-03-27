#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.3B/Pair.cpp"
#include "../lab3.3B/Pair.h"
#include "../lab3.3B/Vector2D.cpp"
#include "../lab3.3B/Vector2D.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector2D a(3, 4);
			Assert::AreEqual(a.Modul(), 5.0);
		}
	};
}
