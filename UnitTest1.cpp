#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int i, n = 6, a[6] = { -2,11,-4,13,-5,-2 };
			int s2 = 0;
			int s1 = 0;
			for (i = 0; i < n; i++)
			{
				if (s1 <= 0)
					s1 = a[i];
				else
					s1 += a[i];
				if (s1 > s2)
					s2 = s1;
			}
			int real = 20;
			Assert::AreEqual(s2, real);
		}
		TEST_METHOD(TestMethod2)
		{
			int i, n = 3, a[3] = { -1,-5,-2 };
			int s2 = 0;
			int s1 = 0;
			for (i = 0; i < n; i++)
			{
				if (s1 <= 0)
					s1 = a[i];
				else
					s1 += a[i];
				if (s1 > s2)
					s2 = s1;
			}
			int real = 0;
			Assert::AreEqual(s2, real);
		}
		TEST_METHOD(TestMethod3)
		{
			int i, n = -4, a[4] = { 0,3,-6,7 };
			int s2 = 0;
			int s1 = 0;
			for (i = 0; i < n; i++)
			{
				if (s1 <= 0)
					s1 = a[i];
				else
					s1 += a[i];
				if (s1 > s2)
					s2 = s1;
			}
			int real = 0;
			Assert::AreEqual(s2, real);
		}
	};
}
