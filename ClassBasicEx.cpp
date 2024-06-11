#include <iostream>
#include "classEx.h"

int main()
{
	int year, month, day;
	while (1)
	{
		std::cout << " Input YYYY,MM,DD : ";
		std::cin >> year >> month >> day;

		if (1 <= month && month <= 12 && 1 <= day && day <= 31)
		{
			break;
		}
		else
		{
			std::cout << "다시 입력해주세요!" << std::endl;
		}
	}

	DateClass d(year, month, day);
	d.DatePrint();

	bool leapYear = d.IsLeapYear();
	if (leapYear)
	{
		std::cout << "Is Leap Year!!!" << std::endl;
	}
	else
	{
		std::cout << "Is Not Leap Year!!!"<< std::endl;
	}

	char str[100];

	std::cout << "Input string :";
	std::cin >> str;
	char* p = str;
	String s;
	String(p);
	s.PrintString();

	
}
