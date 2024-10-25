#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//内部类
//class A
//{
//private:
//	static int _k;
//	int _h = 1;
//
//public:
//	class B //B默认为A的友元
//	{
//	public:
//		void foo(const A& a)
//		{
//			cout << _k << endl;
//			cout << a._h << endl;
//		}
//	private:
//		int _b;
//	};
//};
//
//int main()
//{
//	cout << sizeof(A) << endl;
//	cout << sizeof(A::B) << endl;
//
//
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//
//private:
//	int _a;
//};
//
//void f1(A aa)
//{}
//
//int main()
//{
//	/*A aa1(1);
//	A aa2;*/
//
//	//匿名对象，生命周期只在当前一行
//	/*A(1);
//	A();*/
//
//
//	A aa0 = 1;
//	cout << endl;
//
//	A aa1;
//	f1(aa1);
//	cout << endl;
//
//	f1(1);
//	cout << endl;
//
//	f1(A(2));
//	cout << endl;
//
//	cout << "----------------" << endl;
//
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	A(const A& aa)
//		:_a(aa._a)
//	{
//		cout << "A(const A& aa)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//
//private:
//	int _a;
//};
//
//A f2()
//{
//	A aa;
//	return aa;
//}
//
//int main()
//{
//	f2();
//	cout << endl;
//
//	A aa1 = f2();
//	cout << endl;
//
//	 
//	return 0;
//}

void Test()
{
	//动态申请一个int类型空间
	int* ptr1 = new int;
	//动态申请一个int类型空间,并初始化为0
	int* ptr2 = new int(0);
	//动态申请十个int类型空间
	int* ptr3 = new int[10];
	//动态申请三个int类型空间，并初始化
	int* ptr4 = new int[3] {1, 2, 3};
	int* ptr5 = new int[10] {1, 2, 3};

	delete ptr1;
	delete ptr2;
	delete[] ptr3;
	delete[] ptr4;
	delete[] ptr5;
}

class A
{
public:
	A(int a = 0)
		:_a(a)
	{
		cout << "A():" << this << endl;
	}

	~A()
	{
		cout << "~A():" << this << endl;
	}

private:
	int _a;
};

struct ListNode
{
	int _val;
	ListNode* _next;
	ListNode(int val)
		:_val(val)
		,_next(nullptr)
	{}
};
//int main()
//{
//	//只申请空间
//	A* p1 = (A*)malloc(sizeof(A));
//	cout << endl;
//
//	//申请空间 + 构造函数
//	A* p2 = new A;
//	A* p3 = new A(1);
//	cout << endl;
//
//	// 只释放空间
//	free(p1);
//	cout << endl;
//
//	// 析构函数 + 释放空间
//	delete p2;
//	delete p3;
//	cout << endl;
//
//	A* p4 = new A[10]{ 1,2,3 };
//	cout << endl;
//	delete[] p4;
//	cout << endl;
//
//	ListNode* n1 = new ListNode(1);
//	ListNode* n2 = new ListNode(2);
//	ListNode* n3 = new ListNode(3);
//	ListNode* n4 = new ListNode(4);
//	n1->_next = n2;
//	n2->_next = n3;
//	n3->_next = n4;
//
//	delete n1;
//	delete n2;
//	delete n3;
//	delete n4;
//
//
//	return 0;
//}

//int main()
//{
//	//申请空间 + 构造函数
//	//call operator new + call A::A
//	A* p2 = new A;
//	A* p3 = new A(1);
//	cout << endl;
//
//	// 析构函数 + 释放空间
//	// call operator delete + call ~A
//	delete p2;
//	delete p3;
//	cout << endl;
//
//	return 0;
//}

//测试抛异常
void Func()
{
	int* p1 = new int[1024 * 1024 * 100];
	cout << p1 << endl;

	int* p2 = new int[1024 * 1024 * 100];
	cout << p2 << endl;

	int* p3 = new int[1024 * 1024 * 100];
	cout << p3 << endl;

	int* p4 = new int[1024 * 1024 * 100];
	cout << p4 << endl;

	int* p5 = new int[1024 * 1024 * 100];
	cout << p5 << endl;
}

int main()
{
	try 
	{
		Func();
	}
	catch(const exception& e)
	{
		//bad allocation 直接调到catch
		cout << e.what() << endl;
	}

	//内存池
	A* p1 = (A*)operator new(sizeof(A));
	//不支持
	//p1->A(1);
	new(p1)A(10);

	p1->~A();
	operator delete(p1);

	return 0;
}