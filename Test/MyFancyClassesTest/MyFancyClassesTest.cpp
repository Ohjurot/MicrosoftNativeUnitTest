#include "CppUnitTest.h"

#include <MyFancyClasses/MyString.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


TEST_CLASS(StringTest)
{
	public:
		TEST_METHOD(LengthTest)
		{
			// Test if length is correct
			const char* testStr = "Hello World!";
			Assert::AreEqual<int>(
				(int)strlen(testStr), MyFancyClasses::MyString::Length(testStr),
				L"MyFancyClasses::MyString::Length needs to behave the same as strlen()"
			);

			// Test if nullptr works
			Assert::AreEqual(
				-1, MyFancyClasses::MyString::Length(nullptr),
				L"Inputing nullptr as string should return -1"
			);
		}
};
