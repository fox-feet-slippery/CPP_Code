#pragma once
#include<iostream>
#include<assert.h>
using namespace std;

class Date
{
public:

	Date(int year = 1, int month = 1, int day = 1);
	void Print();
	
	bool operator<(const Date& d);
	bool operator<=(const Date& d);
	bool operator>(const Date& d);
	bool operator>=(const Date& d);
	bool operator==(const Date& d);
	bool operator!=(const Date& d);

	//��Ƶ���õĺ�������������ߣ������龲̬static
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

	//++d ǰ��++
	Date& operator++();
	//d++ ����++
	Date operator++(int);
	//--d ǰ��--
	Date& operator--();
	//d-- ����--
	Date operator--(int);

	int operator-(const Date& d);

private:
	int _year;
	int _month;
	int _day;
};

