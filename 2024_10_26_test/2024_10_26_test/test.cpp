#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A():" << this << endl;
//	}
//	~A()
//	{
//		cout << "~A():" << this << endl;
//	}
//
//private:
//	int _a;
//};

//int main()
//{
//	/*A* p2 = (A*)operator new (sizeof(A));
//	new(p2)A(10);
//
//	p2->~A();
//	operator delete(p2);*/
//
//
//
//	return 0;
//}

//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = left;
//}
//
//void Swap(double& left, double& right)
//{
//	double temp = left;
//	left = right;
//	right = left;
//}
//
//void Swap(char& left, char& right)
//{
//	char temp = left;
//	left = right;
//	right = left;
//}

//函数模板
//泛型编程
//template<class T>
//
// 
// template<typename T>
//void Swap(T& left, T& right)
//{
//	T temp = left;
//	left = right;
//	right = temp;
//}
//
////模板参数与函数参数相似
//template<typename T1, typename T2>
//void Swap(T1& left, T2& right)
//{
//	T1 temp = left;
//	left = right;
//	right = temp;
//}
//
//
//int main()
//{
//	int x = 0, y = 1;
//	double m = 1.1, n = 2.2;
//	Swap(x, y);
//	Swap(m, n);
//	cout << "x = " << x << " " << "y = " << " " << y << endl;
//	cout << "m = " << m << " " << "n = " << " " << n << endl;
//
//	//“void Swap(T &,T &)”: 无法从“double”推导出“T &”的 模板 参数
//	//Swap(x, n);
//
//	return 0;
//}
//template<typename T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//template<class T>
//T* Func(size_t  n)
//{
//	return new T[n];
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.1, d2 = 20.1;
//
//	//自动推到类型 隐式实例化
//	Add(a1, a2);
//	Add(d1, d2);
//
//	cout << Add(a1, a2) << endl;
//	cout << Add(a1, (int)d1) << endl;
//	cout << Add((double)a1, d1) << endl;
//
//	//显式实例化
//	cout << Add<int>(a1, d1) << endl;
//	cout << Add<double>(a1, d1) << endl;
//
//	Func<int>(10);
//	
//	return 0;
//}

//template<typename T>
//T Add(T left,  T right)
//{
//	return left + right;
//}
//
//int Add(int left, int right)
//{
//	return (left + right) * 5;
//
//}
//template<typename T1, typename T2>
//T1 Add(int left, int right)
//{
//	return (left + right) * 10;
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.1, d2 = 20.1;
//
//	cout << Add(d1, d2) << endl;
//	cout << Add(a1, a2) << endl;
//	cout << Add<int>(a1, a2) << endl;
//	cout << Add(a1, d1) << endl;
//
//	return 0;
//}

//typedef int STDataType;

//template<typename T>
//class Stack
//{
//public:
//	Stack(size_t capacity = 4)
//		:_capacity(capacity)
//		,_size(0)
//	{
//		_array = new STDataType[capacity];
//	}
//	~Stack()
//	{
//		delete _array;
//		_capacity = _size = 0;
//	}
//private:
//	STDataType* _array;
//	size_t _capacity;
//	size_t _size;
//};


//using STDataType = int;
////类模板
//template<typename T>
//class Stack
//{
//public:
//	Stack(size_t capacity = 4) 
//		: _capacity(capacity)
//		, _size(0)
//	{
//		_array = new T[capacity];
//	}
//	~Stack()
//	{
//		delete[] _array;
//		_capacity = _size = 0;
//	}
//
//private:
//	T* _array;
//	size_t _capacity;
//	size_t _size;
//};
//
//
//int main()
//{
//	Stack<int> st1;//int
//	Stack<double> st2;//double
//
//	return 0;
//}

#include<string.h>
//std::string
int main()
{
	string s1;
	string s2("11111111");
	string s3("11111111", 3);
	string s4(100, 'x');
	string s5(s2, 4, 3);
	string s6(s2, 4);
	string s7(s2, 4,41);



	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;
	cout << s6 << endl;
	cout << s7 << endl;

	s2[0] = 'x';
	cout << s2 << endl;

	for (int i = 0; i < s2.size(); ++i)
	{
		s2[i]++;
	}
	cout << s2 << endl;


	return 0;
}