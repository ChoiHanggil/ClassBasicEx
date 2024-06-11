#pragma once

class DateClass
{
public:
	DateClass(int year, int month, int day);

	void DatePrint()const;
	bool IsLeapYear()const;
private:
	int mYear;
	int mMonth;
	int mDay;
};

class String
{
public:
	String(char* string);
	String() : mString(nullptr) {}
	~String();
	void PrintString()const;
private:
	char* mString;
};