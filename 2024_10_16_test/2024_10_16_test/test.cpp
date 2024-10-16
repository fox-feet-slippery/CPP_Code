#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<assert.h>
using namespace std;

//class Stack
//{
//public:
//	void Init(int capacity = 4)
//	{
//		_array = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == _array)
//		{
//			perror("malloc fail!");
//			return;
//		}
//		_capacity = capacity;
//		_top = 0;
//	}
//
//	void Push(int x)
//	{
//		//...扩容
//		_array[_top++] = x;
//	}
//
//	int Top()
//	{
//		assert(_top > 0);
//		return _array[_top - 1];
//	}
//
//	void Destroy()
//	{
//		free(_array);
//		_array = nullptr;
//		_top = _capacity = 0;
//	}
//
//private:
//	//成员变量
//	int* _array;
//	size_t _capacity;
//	size_t _top;
//};
//
//struct Person
//{
//public:
//	void Init(const char* name, int age, int tel)
//	{
//		strcpy(_name, name);
//		_age = age;
//		_tel = tel;
//	}
//
//	void Print()
//	{
//		cout << "姓名：" << _name << endl;
//		cout << "年龄：" << _age << endl;
//		cout << "电话：" << _tel << endl;
//	}
//
//private:
//	char _name[10];
//	int _age;
//	int _tel;
//};
//
////类名就是类型
//int main()
//{
//	Stack st1;
//	st1.Init();
//	st1.Push(1);
//	st1.Push(2);
//	st1.Push(3);
//	st1.Push(4);
//
//	cout << st1.Top() << endl;
//
//	st1.Destroy();
//
//	Person p1;
//	p1.Init("张三", 18, 120);
//	p1.Print();
//
//
//
//	return 0;
//}



//class Queue
//{
//public:
//	void Init();
//private:
//};

//#include"Stack.h"
//int main()
//{
//	Stack st;
//	st.Init();
//
//
//	return 0;
//}

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	//声明
//	int _year;
//	int _month;
//	int _day;
//};
//
////定义 区别：有无开空间
//int year;
//
//int main()
//{
//	//类实例化出对象
//	//1对n
//	Date d1;
//	Date d2;
//	d1.Init(2004, 2, 13);
//	d2.Init(2003, 11, 7);
//	d1.Print();
//	d2.Print();
//
//	
//	cout << sizeof(d1) << endl;
//	cout << sizeof(d2) << endl;
//	cout << sizeof(Date) << endl;
//
//
//	return 0;
//}

//灭有成员变量的类对象，开1byte占位，不存储有效数据
//标识对象的存在
//class A
//{
//
//};
//
//class B
//{
//	void Print()
//	{
//
//	}
//};
//class C
//{
//public:
//	void Print()
//	{
//
//	}
//
//private:
//	char c;
//	int i;
//};
//int main()
//{
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//	cout << sizeof(C) << endl;
//
//	return 0;
//}

//class Date
//{
//public:
//	//void Init(Date* const this,int year, int month, int day)
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	//void Print(Date* const this)
//	void Print()
//	{
//		//cout << this->_year << "/" << this->_month << "/" << this->_day << endl;
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	//声明
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	//类实例化出对象
//	//1对n
//	Date d1;
//	Date d2;
//	//d1.Init(&d1,2004, 2, 13);
//	//d2.Init(&d2,2003, 11, 7);
//	d1.Init(2004, 2, 13);
//	d2.Init(2003, 11, 7);
//	d1.Print();
//	d2.Print();
//
//	cout << sizeof(d1) << endl;
//	cout << sizeof(d2) << endl;
//	//cout << sizeof(Date) << endl;
//
//
//	return 0;
//}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////


//构造函数
//class Date
//{
//public:
//	/*void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//
//	//函数名与类名相同
//	//无参构造函数
//	//Date()
//	//{
//	//	_year = 1;
//	//	_month = 1;
//	//	_day = 1;
//	//}
//	////带参数构造函数
//	//Date(int year, int month, int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	//自动调用
//	Date d1;//调用无参构造函数
//	Date d2(2004, 2, 13);//调用带参数构造函数
//
//	d1.Print();
//	d2.Print();
//
//	Date d3(2024);
//	d3.Print();
//
//
//	return 0;
//}

//自动生成默认构造
//class Date
//{
//public:
//		
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//	
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//typedef int type;
//class Stack
//{
//public:
//	Stack(int capacity = 4)
//	{
//		_a = (type*)malloc(sizeof(type) * capacity);
//		if (nullptr == _a)
//		{
//			perror("malloc fail");
//			return;
//		}
//		_capacity = capacity;
//		_top = 0;
//	}
//private:
//	type* _a;
//	size_t _capacity;
//	size_t _top;
//};
//int main()
//{
//	Date d1;//不传实参调用构造，都叫默认构造
//	d1.Print();
//
//	Stack st1;
//
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//析构函数

/*class Date
{
public:

	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
		
	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
	
	~Date()
	{
		cout << "~Date()" << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};*/

//有资源申请时，一定要自己写析构
//class Stack
//{
//public:
//	Stack(size_t capacity = 4)
//	{
//		_arr = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == _arr)
//		{
//			perror("malloc fail");
//			return;
//		}
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	void push(int x)
//	{
//		_arr[_size++] = x;
//	}
//
//	int Top()
//	{
//		return _arr[_size - 1];
//	}
//	
//	// ...
//
//	~Stack()
//	{
//		if (_arr)
//		{
//			cout << "~Stack()" << endl;
//			free(_arr);
//			_arr = nullptr;
//			_capacity = _size = 0;
//		}
//	}
//private:
//	int* _arr;
//	int _capacity;
//	int _size;
//};
//
//class MyQueue
//{
//
//private:
//	Stack _pushst;
//	Stack _popst;
//};

//后定义的先析构
//int main()
//{
//	Date d;
//	d.Print();
//
//	Stack st;
//	st.push(1);
//	st.push(2);
//	cout << st.Top() << endl;
//
//	MyQueue mq;
//
//	return 0;
//}
//一般情况下显示申请了资源，才需要自己实现析构，其他情况基本都不需要自己写

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//拷贝构造函数

//class Date
//{
//public:
//
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//
//	//Date d2(d1); 
//	//拷贝构造
//	Date(const Date& d)// d 为 d1，this为d2
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	//不是拷贝构造，就是一个普通构造
//	/*Date(Date* p)
//	{
//		_year = p->_year;
//		_month = p->_month;
//		_day = p->_day;
//	}*/
//
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//class Stack
//{
//public:
//	Stack(size_t capacity = 4)
//	{
//		_arr = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == _arr)
//		{
//			perror("malloc fail");
//			return;
//		}
//		_capacity = capacity;
//		_size = 0;
//	}
//
//	//st2(st1)
//	Stack(const Stack& st)
//	{
//		_arr = (int*)malloc(sizeof(int) * st._capacity);
//		if (nullptr == _arr)
//		{
//			perror("malloc fail");
//			return;
//		}
//		memcpy(_arr, st._arr, sizeof(int) * st._size);
//		_capacity = st._capacity;
//		_size = st._size;
//	}
//
//	void push(int x)
//	{
//		_arr[_size++] = x;
//	}
//
//	int Top()
//	{
//		return _arr[_size - 1];
//	}
//
//	// ...
//
//	~Stack()
//	{
//		if (_arr)
//		{
//			cout << "~Stack()" << endl;
//			free(_arr);
//			_arr = nullptr;
//			_capacity = _size = 0;
//		}
//	}
//private:
//	int* _arr;
//	size_t _capacity;
//	size_t _size;
//};
//
//Stack Func()
//{
//	Stack st;
//
//	st.push(1);
//	st.push(2);
//	st.push(3);
//
//	return st;
//}
//
//int main()
//{
//	Stack ret = Func();
//	cout << ret.Top() << endl;
//	return 0;
//}

//int main()
//{
//	Date d1(2024, 8, 9);
//	Date d2(d1);//拷贝构造
//	d2.Print();
//
//	Stack st1(10);
//	Stack s2(st1);
//
//	return 0;
//}

//类类型(自定义类型)传值传参必须调用拷贝构造
//void Func(Date d)
//{
//
//}
//
//void Func1(Date& d)
//{
//
//}
//
//Date f()
//{
//	Date ret;
//	//...
//	return ret;//临时对象具有常性 const
//}
//
//int main()
//{
//	Date d1(2024, 8, 9);
//	Date d2(d1);//拷贝构造
//
//	Func(d1);
//	Func1(d1);
//	
//	//Date d3(&d1);
//	Date d4 = d1;//也是拷贝构造
//	Date d5(f());
//	Date d6 = f();
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//赋值运算符重载

class Date
{
public:

	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	bool operator<(const Date& d)
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

	int operator-(const Date& d);

	int GetMonthDay(int year, int month)
	{
		assert(month > 0 && month < 13);
		static int MonthDayArray[13] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };
		if (month == 2 && (year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			return 29;
		}
		else
		{
			return MonthDayArray[month];
		}
	}
	int operator+(int day)
	{

	}


private:
	int _year;
	int _month;
	int _day;
};

//1、提供对应getxxx函数
//2、有元
//3、重载为成员函数

//bool operator<(const Date& x1, const Date& x2)
//{
//	if (x1._year < x2._year)
//	{
//		return true;
//	}
//	else if(x1._year == x2._year 
//		&& x1._month < x2._month)
//	{
//		return true;
//	}
//	else if (x1._year == x2._year 
//		&& x1._month == x2._month 
//		&& x1._day < x2._day)
//	{
//		return true;
//	}
//
//	return false;
//}

int main()
{
	//自定义（内）类型不支持直接使用运算符
	Date d1(2024, 8, 9);
	Date d2(2024, 8, 10);

	bool ret = d1 < d2;

	int n = d1 - d2;
	Date n = d1 + 100;

	return 0;
}

