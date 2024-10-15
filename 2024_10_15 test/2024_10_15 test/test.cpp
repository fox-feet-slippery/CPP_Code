#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//struct A
//{
//	int arr[1000];
//};
//
//void Fun(A& a)
//{
//
//}
//
//int main()
//{
//	A a1;
//	Fun(a1);
//
//
//
//	return 0;
//}

//void f1(const int& fx)
//{
//	
//}
//
//int main()
//{
//	//const int a = 10;
//	////权限不能放大
//	////int& ra = a;
//	//const int& ra = a;
//	//
//	////权限可以缩小
//	//int b = 1;
//	//const int& rb = b;
//	//b = 2;
//	//int& rb1 = b;
//	//rb1 = 3;
//	//cout << rb << endl;
//	//cin >> rb1;
//	//cout << rb << endl;
//
//	int a = 10;
//	const int& rb = a * 3;
//	f1(a);
//	f1(a * 3);
//
//
//	return 0;
//}
//
//int main()
//{
//	/*int& ar;xxx
//	int* ap;*/
//
//	char x = 'a';
//	char& rx = x;
//	char* px = &x;
//
//	cout << sizeof(rx) << endl;
//	cout << sizeof(px) << endl;
//
//
//	return 0;
//}
//野引用
//int& func()
//{
//	int ret = 10;
//	ret++;
//	//...
//
//	return ret;
//}

//int main()
//{
//	int x = 0;
//	int& rx = x;
//	rx += 1;
//
//	int* px = &x;
//	*px += 1;
//
//	return 0;
//}

//#define ADD(a,b) ((a) + (b))
////cout << ADD(1, 2) << endl;分号
////ADD(1,2) * 3;外括号
////ADD(x & y,X | y);内括号
//
//int main()
//{
//	int ret = ADD(1, 2); // int ret = ((1) + (2))
//	cout << ret << endl;
//	if (ADD(1, 2))
//	{
//
//	}
//	ADD(x & y,X | y);
//
//	return 0;
//}

//inline 没有宏函数的坑，也不用建立栈帧，提效
//inline int Add(int x, int y)
//{
//	int ret = x + y;
//	return ret;
//}
//int main()
//{
//	int x = 1, y = 2;
//	int ret = Add(1, 2);
//	cout << ret << endl;
//
//	return 0;
//} 

int main()
{

	return 0;
}