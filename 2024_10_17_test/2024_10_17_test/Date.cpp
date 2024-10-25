#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;

	if (!CheckDate())
	{
		cout << "日期非法" << "->";
		cout << *this;
	}
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


//++d Ç°ÖÃ++
Date& Date::operator++()
{
	*this += 1;
	return *this;
}

//d++ ºóÖÃ++
Date Date::operator++(int)
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}

//--d Ç°ÖÃ--
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}

//d-- ºóÖÃ--
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
	Date max = *this;
	Date min = d;
	if (*this < d)
	{
		max = d;
		min = *this;
	}
	int day1 = GettoNYDay(max._year, max._month, max._day);
	int day2 = GettoNYDay(min._year, min._month, min._day);
	int day3 = day1 - day2;
	int day = GetYtoYDay(max._year, min._year);
	return day + day3;
}

//int Date::operator-(const Date& d)
//{
//	Date max = *this;
//	Date min = d;
//	int flag = 1;
//	if (*this < d)
//	{
//		max = d;
//		min = *this;
//		flag = -1;
//	}
//
//	int n = 0;
//	while (min != max)
//	{
//		++min;
//		++n;
//	}
//	return n * flag;
//
//}

ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "年" << d._month << "月" << d._day << "日" << endl;
	return out;
}

istream& operator>>(istream& in, Date& d)
{
	while(1)
	{
		cout << "请依次输入年月日：>";
		in >> d._year >> d._month >> d._day;
		if (d.CheckDate())
		{
			break;
		}
		else
		{
			cout << "日期非法" << "->";
			cout << d;
			cout << "请重新输入..." << endl;
		}
	}
	return in;
}
