#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include <string>

//int main()
//{
//	string s1("111111111111111111111111");
//	cout << s1 << endl;
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	// < size
//	s1.resize(15);
//	cout << s1 << endl;
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	// size < n < capacity
//	s1.resize(25);
//	cout << s1 << endl;
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	// n > capacity
//	s1.resize(33);
//	cout << s1 << endl;
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//
//	return 0;
//}

//int main()
//{
//	string s1("123456789");
//	s1.insert(0, "000");
//	cout << s1 << endl;
//
//	s1.erase(0, 1);
//	cout << s1 << endl;
//
//	s1.erase(s1.begin());
//	cout << s1 << endl;
//
//	s1.erase(3);
//	cout << s1 << endl;
//
//	string s2("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
//	cout << s2 << endl;
//	s2.replace(5, 1, "00");
//	cout << s2 << endl;
//
//	string s3("hello  world aa bit hhello");
//	cout << s3 << endl;
//
//	size_t i = s3.find(' ');
//	while (i != string::npos)
//	{
//		s3.replace(i, 1, "%%");
//		i = s3.find(' ', i + 2);
//	}
//	cout << s3 << endl;
//
//	string s4;
//	for (auto ch : s3)
//	{
//		if (ch != ' ')
//		{
//			s4 += ch;
//		}
//		else
//		{
//			s4 += "%%";
//		}
//	}
//	cout << s4 << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1("hello world");
//	cout << s1 << endl;
//	cout << s1.c_str() << endl;
//
//	return 0;
//}


//int main() 
//{
//    string str1 = to_string(11.11);
//    string str;
//    //cin >> str;
//    getline(cin, str);
//    size_t pos = str.rfind(' ');
//
//    cout << str.size() - pos - 1 << endl;
//
//    return 0;
//}

#include"string.h"
//int main()
//{
//	mystring::string str1;
//	cout << str1.c_str() << endl;
//
//	mystring::string str2("hello world");
//	cout << str2.c_str() << endl;
//
//	str2[0] = 'x';
//
//	for (size_t i = 0; i < str2.size(); ++i)
//	{
//		cout << str2[i] << " ";
//	}
//	cout << endl;
//
//	mystring::string::iterator it1 = str2.begin();
//	while (it1 != str2.end())
//	{
//		(*it1)--;
//		it1++;
//	}
//
//	it1 = str2.begin();
//	while (it1 != str2.end())
//	{
//		cout << *it1 << " ";
//		it1++;
//	}
//	cout << endl;
//
//	for (auto& ch : str2)
//	{
//		cout << ch << " ";
//	}
//	cout << endl;
//
//	return 0;
//}


void test()
{
	mystring::string s1("hello world");
	cout << s1.c_str() << endl;

	s1 += '!';
	cout << s1.c_str() << endl;

	s1 += "me too";
	cout << s1.c_str() << endl;

}
int main()
{
	test();

	return 0;
}