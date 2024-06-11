#include <iostream>
#include "classEx.h"

DateClass::DateClass(int year, int month, int day)
{
	if (year < 1970)
	{
		mYear = 1970;
		mMonth = 1;
		mDay = 1;
	}
	else
	{
		mYear = year;
		mMonth = month;
		mDay = day;
	}
}

void DateClass::DatePrint() const
{
	std::cout << mYear << "-" << mMonth << "-" << mDay << std::endl;
}

bool DateClass::IsLeapYear() const
{
	if (mYear % 4 == 0)
	{
		if (mYear % 400 == 0)
		{
			return true;
		}
		if (mYear % 100 == 0)
		{
			return false;
		}
	}
	return true;
}

String::String(char* string);
{
	char* mString = new char[sizeof(string)];
	for (int i = 0; i < sizeof(string); i++)
	{
		mString[i] = string[i];
	}
}

String::~String()
{
	delete mString;
	mString = nullptr;
}

void String::PrintString()const
{
	std::cout << mString << std::endl;
}
