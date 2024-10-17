#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}

void Date::Print()
{
	cout << _year << '/' << _month << '/' << _day << endl;
}

bool Date::operator<(const Date& d)
{

	if (_year < d._year)
	{
		return true;
	}
	else if (_year == d._year
		&& _month < d._month)
	{
		return true;
	}
	else if (_year == d._year
		&& _month == d._month
		&& _day < d._day)
	{
		return true;
	}

	return false;
}

bool Date::operator<=(const Date& d)
{
	return *this < d || *this == d;
}

bool Date::operator>(const Date& d)
{
	return !(*this < d);
}
bool Date::operator>=(const Date& d)
{
	return !(*this < d);
}

bool Date::operator==(const Date& d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}


bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}

Date& Date::operator+=(int day)
{
	if (_day < 0)
		return *this -= -day;

	_day += day;

	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}
	return *this;
}

//d1 + 100
Date Date::operator+(int day)
{
	Date tmp = *this;
	tmp += day;
	return tmp;
}

Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		return *this += -day;
	}
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			_year--;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}

Date Date::operator-(int day)
{
	Date tmp = *this;
	tmp -= day;
	return tmp;
}


//++d ǰ��++
Date& Date::operator++()
{
	*this += 1;
	return *this;
}

//d++ ����++
Date Date::operator++(int)
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}

//--d ǰ��--
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}

//d-- ����--
Date Date::operator--(int)
{
	Date tmp(*this);
	*this -= 1;
	return tmp;
}

int GettoNYDay(int year, int month, int day)
{
	int _day = 0;
	int MonthDayArray[13] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		MonthDayArray[2] += 1;
	}
	for (int i = 1; i < month; ++i)
	{
		_day += MonthDayArray[i];
	}
	_day += day - 1;
	return _day;
}

int GetYtoYDay(int year1, int year2)
{
	int day = (year1 - year2) * 365;
	for (int i = year2; i < year1; ++i)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			day += 1;
		}
	}
	return day;
}


int Date::operator-(const Date& d)
{
	int day1 = GettoNYDay(_year, _month, _day);
	int day2 = GettoNYDay(d._year, d._month, d._day);
	int day3 = day1 - day2;
	int day = GetYtoYDay(_year, d._year);
	return day + day3;
}