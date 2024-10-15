#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//int rand = 10;

//int x = 0;
//
//namespace bit //命名空间只能定义在全局
//{
//	int rand = 10;
//	int x = 1;
//	int add(int x, int y)
//	{
//		return x + y;
//	}
//
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//}
//
//void func()
//{
//	int x = 2;
//}
//
//int main()
//{
//	/*printf("%d\n", bit::rand);
//	printf("%d\n", bit::add(1, 2));*/
//	int x = 3;
//	printf("%d\n", bit::x);
//	printf("%d\n", ::x);//访问全局变量
//	printf("%d\n", x);
//
//	return 0;
//}

//命名空间可以嵌套
//namespace bit
//{
//	int rand = 0;
//
//	//pg
//	namespace pg
//	{
//		int rand = 1;
//		int add(int x, int y)
//		{
//			return x + y;
//		}
//	}
//
//	//hg
//	namespace hg
//	{
//		int rand = 2;
//		int add(int x, int y)
//		{
//			return x + y;
//		}
//	}
//}
//
//int main()
//{
//	printf("%d\n", bit::rand);
//	printf("%d\n", bit::pg::rand);
//	printf("%d\n", bit::hg::rand);
//
//	return 0;
//}

//namespace bit
//{
//	int a = 0;
//	int b = 1;
//}

//using namespace bit;//不推荐，冲突风险大
//int a = 1;

//using bit::a;//项目经常的，访问且不冲突的

//int main()
//{
//	printf("%d\n", a);
//	printf("%d\n", bit::b);
//
//
//	return 0;
//}

#include<iostream>
using std::cout;
using std::endl;

//int main()
//{
//	// << 流插入
//	std::cout << "hello word" << "\n";
//
//	int i = 10; 
//	std::cout << i << '\n';
//
//	double d = 1.1;
//	std::cout << d << std::endl;
//
//	// >> 流提取
//	std::cin >> i >> d; 
//	std::cout << i << " " << d << std::endl;
//
//	return 0;
//}

//缺省参数
void Func(int a = 0)
{
	std::cout << a << endl;
}
//全缺省
void Func1(int a = 10, int b = 20, int c = 30)
{
	std::cout << "a = " << a << endl;
	std::cout << "b = " << b << endl;
	std::cout << "c = " << c << endl;
}
//半缺省
void Func2(int a, int b, int c = 20)//只能从左往右缺省
{
	std::cout << "a = " << a << endl;
	std::cout << "b = " << b << endl;
	std::cout << "c = " << c << endl;
}
//int main()
//{
//	Func();
//	Func(10);
//	Func1();
//	Func1(1);
//	Func1(1,2);
//	Func1(1,2,3); 
//	//不支持
//	// Func1(, 2, ); 
//	Func2(1,2);
//
//	return 0;
//}

//函数重载
//int add(int x, int y)
//{
//	std::cout << "int add(int x, int y)" << endl;
//	return x + y;
//}
//double add(double x, double y)
//{
//	std::cout << "double add(double x, double y)" << endl;
//	return x + y;
//}
//
//int main()
//{
//	
//	
//	std:: cout << add(1, 2) << endl;
//	std::cout << add(1.1, 1.2) << endl;
//
//	return 0;
//}

//引用 给存在的对象取别名
//typedef unsigned int uint  给类型取别名
//#define N 10； 宏

void swap(int& rx, int& ry)
{
	int tmp = rx;
	rx = ry;
	ry = tmp;
}

int main()
{
	int a = 0;
	//也可以给别名取别名
	int& b = a;
	int& c = a;
	int& d = a;

	d++;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	std::cout << std::endl;

	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
	std::cout << &c << std::endl;
	std::cout << &d << std::endl;

	std::cout << std::endl;

	int* p1 = &a;
	int*& p2 = p1;
	int e = 10;
	p2 = &e;

	std::cout << *p1 << std::endl;

	swap(a, e);

	return 0;
}

