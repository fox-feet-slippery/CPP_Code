#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<list>
using namespace std;

//C++20��ʼ֧��
//void func1(auto x)
//{}

//����ʹ��
//auto func2()
//{
//	int x = 0;
//	//...
//	return x;
//}

//int main()
//{
//	string s1("hello world");
//
//	// �±�+[]
//	for (int i = 0; i < s1.size(); ++i)
//	{
//		cout << s1[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < s1.size(); ++i)
//	{
//		s1[i]++;
//		cout << s1[i] << " ";
//	}
//	cout << endl;
//
//	//������ -- ����ָ��
//	string::iterator it1 = s1.begin();
//	while (it1 != s1.end()) //s1.endָ��'\0'
//	{
//		(*it1)--;
//		cout << *it1 << " ";
//		++it1;
//	}
//	cout << endl;
//
//	list<int> lt;
//	lt.push_back(1);
//	lt.push_back(2);
//	lt.push_back(3);
//	lt.push_back(4);
//
//	int i = 0;
//	int j = i;
//	// auto �Լ��Ƶ����� C++11
//	auto z = i;   // int
//	auto x = 1.1; // double
//	auto p = &i;  // int*
//	int& r1 = i;
//	auto r2 = r1; // int
//	auto& r3 = r1;// int&
//	//auto r4;    // ����
//
//	//list<int>::iterator it = lt.begin();
//	//�򻯴��룬���д������������
//	auto it = lt.begin();
//	while (it != lt.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	// ��Χfor C++11
//	// �����������������������
//	// �Զ�ȡ��������ֵ��ֵ����ߵĶ���
//	// �Զ�++���Զ��жϽ���
//	// ԭ����Χfor�ײ��ǵ�����
//	//for (char ch : s1)
//	for(auto ch : s1)
//	{
//		cout << ch << " ";
//	}
//	cout << endl;
//
//	for (auto& ch : s1)
//	{
//		ch++;
//		cout << ch << " ";
//	}
//	cout << endl;
//
//	for (auto ch : s1)
//	{
//		cout << ch << " ";
//	}
//	cout << endl;
//	cout << endl;
//
//	for (auto e : lt)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	int arr[] = { 1,2,3,4,5,6 };
//	for (auto a : arr)
//	{
//		cout << a << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1("hello world");
//	//string::reverse_iterator rs1 = s1.rbegin();
//	auto rs1 = s1.rbegin();
//	while (rs1 != s1.rend())
//	{
//		cout << *rs1 << " ";
//		++rs1;
//	}
//	cout << endl;
//
//	const string s2(s1);
//	string::const_iterator it1 = s2.begin();
//	string::const_reverse_iterator it2 = s2.rbegin();
//	//auto it1 = s2.begin();
//	while (it1 != s2.end())
//	{
//		cout << *it1 << " ";
//		++it1;
//	}
//	cout << endl;
//
//	return 0;
//}

//int main()
//{
//	try
//	{
//	string s1("hello world11111");
//	//������'\0'
//	cout << size(s1) << endl;//��ѡ
//	cout << s1.length() << endl;
//	cout << s1.max_size() << endl;//������
//	cout << s1.capacity() << endl;//ʵ��+1
//	cout << endl << endl;
//
//	s1.clear();//�����ռ�
//	cout << size(s1) << endl;//��ѡ
//	cout << s1.capacity() << endl;//ʵ��+1
//
//	s1.at(20);
//	}
//
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	string s1("hello");
//	s1.push_back(',');
//	s1.push_back('w');
//	cout << s1 << endl;
//
//
//	s1.append("orld");
//	cout << s1 << endl;
//	s1.append(10, '!');
//	cout << s1 << endl;
//
//	string s2("hello bit hello world");
//	s1.append(s2.begin() + 6, s2.end());
//	cout << s1 << endl;
//
//	string s3("hello");
//	s3 += ',';
//	s3 += "world";
//	cout << s3 << endl;
//
//
//	return 0;
//}

// reserve ����
// reverse ��ת

//int main()
//{
//	string s1;
//	// ��ǰ���ռ䣬��������
//	s1.reserve(50);
//
//	size_t old = s1.capacity();
//	cout << "capacity:" << old << endl;
//	for (size_t i = 0; i < 2000; ++i)
//	{
//		s1 += 'x';
//		if (s1.capacity() != old)
//		{
//			cout << "capacity:" << s1.capacity() << endl;
//			old = s1.capacity();
//		}
//	}
//
//	return 0;
//}

class Solution
{
public:

    string addStrings(string num1, string num2)
    {
        string str;
        int end1 = num1.size() - 1, end2 = num2.size() - 1;
        int next = 0;
        while (end1 >= 0 || end2 >= 0)
        {
            int x1 = end1 >= 0 ? num1[end1--] - '0' : 0;
            int x2 = end2 >= 0 ? num2[end2--] - '0' : 0;
            int ret = x1 + x2 + next;
            next = ret / 10;
            ret = ret % 10;

            //str += ('0' + ret);
            str.insert(str.begin(), '0' + ret);

        }
        if (next == 1)
            str.insert(str.begin(), '1');
        return str;

    }
};

int main()
{
    string num1("19");
    string num2("123");
    Solution solution;
    string ret = solution.addStrings(num1, num2);
    cout << ret << endl;

    return 0;
}