#include "MyString.h"

int MyFancyClasses::MyString::Length(const char* str)
{
	int length = -1;
	if (str)
	{
		length = 0;
		for (const char* ptrHead = str; *str; str++)
		{
			length++;
		}
	}

	return length;
}
