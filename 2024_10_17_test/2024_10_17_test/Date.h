#pragma once
#include<iostream>
#include<assert.h>
using namespace std;

class Date
{
	//友元声明
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);

public:

	Date(int year = 1, int month = 1, int day = 1);
	void Print();
	bool CheckDate()
	{
		if (_month < 1 || _month > 12 || _day < 1 || _day > GetMonthDay(_year, _month))
		{
			return false;
		}
		else
			return true;
	}
	
	bool operator<(const Date& d);
	bool operator<=(const Date& d);
	bool operator>(const Date& d);
	bool operator>=(const Date& d);
	bool operator==(const Date& d);
	bool operator!=(const Date& d);

	//高频调用的函数，放在域里边，且数组静态static
	int GetMonthDay(int year, int month)
	{

		assert(month > 0 && month < 13);
		static int MonthDayArray[13] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2
			&& ((year % 4 == 0 && year % 100 != 0)
			|| year % 400 == 0))
		{
			return 29;
		}
		else
		{
			return MonthDayArray[month];
		}
	}

	Date& operator+=(int day);
	Date operator+(int day);
	Date& operator-=(int day);
	Date operator-(int day);

	//++d 前置++
	Date& operator++();
	//d++ 后置++
	Date operator++(int);
	//--d 前置--
	Date& operator--();
	//d-- 后置--
	Date operator--(int);

	int operator-(const Date& d);

	/*void operator<<(ostream& out);*/

private:
	int _year;
	int _month;
	int _day;
};


ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);

