#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include <string>
using namespace std;

//std::string::string;
//std::string::string是 C++ 标准库中std::string类的构造函数。
// std::string类用于处理字符串，它提供了一种方便的方式来操作文本数据，
// 比 C 风格的字符串（以'\0'结尾的字符数组）更安全和易用。
//int main()
//{
//	//string();
//	string str1;
//	cout << "str1: " << str1 << endl;//输出：str1: （一个空行，表示空字符串）
//
//	//string(const string& str);
//	string str2("Hello World");
//	string str3(str2);
//	cout << "str3: " << str3 << endl; //str3: Hello World
//
//	//string(const string& str, size_t pos, size_t len = npos);
//	string str4("Hello World");
//	string str5(str4, 6, 5);
//	cout << "str5: " << str5 << endl;
//
//	//string(const char* s);
//	const char* cstr = "GoodBye";
//	string str6(cstr);
//	cout << "str6: " << str6 << endl;
//
//	//string(const char* s, size_t n);
//	const char* cstr2 = "This is a long string";
//	string str7(cstr2, 4);
//	cout << "str7: " << str7 << endl;
//
//	//string(size_t n, char c);
//	string str8(3, '*');
//	cout << "str8: " << str8 << endl;
//
//	//迭代器
//	string str9("Hello World");
//	string::iterator it1 = str9.begin();
//	while (it1 != str9.end()) //str9.end指向'\0'
//	{
//		cout << *it1 << " ";
//		++it1;
//	}
//	cout << endl;
//
//
//	return 0;
//}

//std::string::begin
// 是 C++ 标准库中std::string类的成员函数，
// 用于获取字符串的起始迭代器。
// std::string::end
// 是 C++ 标准库中std::string类的成员函数，
// 用于获取字符串的结束迭代器。
//int main() 
//{
//    string str = "Hello, World!";
//
//    // 使用普通迭代器遍历并修改字符串
//   //string::iterator it = str.begin();
//    auto it = str.begin();
//    *it = 'h';
//    cout << "Modified string: " << str << endl;
//
//    // 使用常量迭代器遍历常量字符串
//    string constStr = "This is a constant string";
//    //string::const_iterator constIt = constStr.begin();
//    auto constIt = constStr.begin();
//    while (constIt != constStr.end()) {
//        cout << *constIt;
//        ++constIt;
//    }
//    cout << endl;
//
//    return 0;
//}

//std::string::rbegin是 
// C++ 标准库中std::string类的成员函数，
// 用于获取字符串的反向起始迭代器。
//int main() 
//{
//    string str = "Hello, World.";
//
//    // 使用反向迭代器反向遍历并修改字符串
//    string::reverse_iterator rit = str.rbegin();
//    cout << "original dtring: " << str << endl;
//    *rit = '!';
//    cout << "Modified string: " << str << endl;
//
//    // 使用常量反向迭代器反向遍历常量字符串
//    const string constStr = "This is a constant string";
//    string::const_reverse_iterator constRit = constStr.rbegin();
//    while (constRit != constStr.rend()) {
//        cout << *constRit;
//        ++constRit;
//    }
//    cout << endl;
//
//    string str2 = "Hello World";
//    for (auto it = str2.rbegin(); it != str2.rend(); ++it) {
//        cout << *it;
//    }
//    cout << endl;
//    cout << *(str2.rend() - 1);
//
//    return 0;
//}


//在 C++ 中，std::string::size是一个成员函数，用于获取字符串的长度。
//int main() 
//{
//    string str = "Hello, world!";
//    cout << "字符串长度为：" << str.size() << endl;
//    return 0;
//}

//在 C++ 中，std::string::capacity是std::string类的一个成员函数。
// 它返回当前字符串对象分配的存储空间大小，
// 这个大小是以字节为单位的，能够容纳的字符数量（不包括字符串结尾的空字符 '\0'）。
//int main()
//{
//    string str = "Hello";
//    cout << "字符串当前容量: " << str.capacity() << endl;
//    return 0;
//}
//std::string::size函数返回的是字符串中实际字符的数量，
// 而std::string::capacity函数返回的是字符串对象内部存储缓冲区能够容纳的最大字符数量。

//在 C++ 中，std::string::reserve函数用于请求字符串对象预留足够的容量来存储至少n个字符。
// 这是一种预分配内存的机制，目的是避免在向字符串频繁添加字符时频繁地重新分配内存，从而提高性能。
//int main()
//{
//    string str;
//    cout << "初始容量: " << str.capacity() << endl;
//    str.reserve(20);
//    cout << "预留20个字符后的容量: " << str.capacity() << endl;
//    return 0;
//}

//std::string::clear是std::string类的成员函数，
// 用于清空字符串的内容，即将字符串的长度设置为 0，但不改变其容量。
//int main() {
//    string str = "Hello, world!";
//    cout << "初始字符串：" << str << endl;
//    cout << "初始字符串size：" << str.size() << endl;
//    cout << "初始字符串capacity：" << str.capacity() << endl;
//
//    str.clear();
//    cout << "清空后的字符串：" << str << endl;
//    cout << "清空后的字符串size：" << str.size() << endl;
//    cout << "清空后的字符串capacity：" << str.capacity() << endl;
//
//    return 0;
//}

//std::string::operator[]是std::string类的成员函数，
// 用于访问字符串中特定位置的字符。
// 它提供了一种方便的方式来读取和修改字符串中的单个字符。
//int main() 
//{
//    string str = "Hello, world!";
//    // 读取字符
//    char ch = str[4];
//    cout << "第 5 个字符是：" << ch << endl;
//    // 修改字符
//    str[4] = 'X';
//    cout << "修改后的字符串：" << str << endl;
//    return 0;
//}

//std::string::operator+=是std::string类的成员函数，
// 用于将一个字符串、C 风格字符串（以空字符结尾的字符数组）
// 或单个字符连接到当前字符串的末尾，并返回对当前字符串的引用。
//int main()
//{
//	//连接另一个std::string对象
//	string str1 = "Hello";
//	string str2 = ", world!";
//	str1 += str2;
//	cout << str1 << endl;
//
//	//连接 C 风格字符串
//	string str = "Hello";
//	str += ", world!";
//	cout << str << endl;
//
//	//连接单个字符
//	string str3 = "Hello, World";
//	str3 += '!';
//	cout << str3 << endl;
//
//	//返回值
//	string str4 = "Hello";
//	str4 += ", ";
//	str4 += "world!";
//	cout << str4 << endl;
//
//	return 0;
//}

//std::string::insert是std::string类的成员函数，
// 用于在指定位置插入内容到字符串中。
// 可以插入另一个字符串、C 风格字符串、单个字符、一定数量的相同字符或者一个字符范围。
//int main()
//{
//	string str1("Hello");
//	str1.insert(5, ", World!");
//	cout << "str1: " << str1 << endl;
//
//	string str2 ("Hello ");
//	string other("world");
//	str2.insert(6, other, 0, 5);
//	cout << "str2: " << str2 << endl;
//
//	string str3 = "Hello";
//	str3.insert(5, ", world!");
//	cout << "str3: " << str3 << endl;
//
//	string str4 = "Hello ";
//	const char* s = "world!";
//	str4.insert(6, s, 5);
//	cout << "str4: " << str4 << endl;
//
//	string str5 = "Hello";
//	str5.insert(5, 3, '!');
//	cout << "str5: " <<  str5 << endl;
//
//	string str6 = "Hello";
//	auto it = str6.begin() + 5;
//	str6.insert(it, '!');
//	cout << "str6: " <<  str6 << endl;
//
//	string str7 = "Hello";
//	string other1 = "world";
//	auto it1 = str7.begin() + 5;
//	str7.insert(it1, other1.begin(), other1.end());
//	cout << "str7: " << str7 << endl;
//
//	return 0;
//}
 
//std::string::erase是std::string类中的一个成员函数，
// 用于从字符串中删除字符。它有三个重载版本，分别用于删除指定位置和长度的字符序列、
// 删除单个字符以及删除一个字符范围。
//int main()
//{
//	string str1 = "abcdefghij";//从位置 3（字符 'd'）开始删除 4 个字符
//	str1.erase(3, 4);
//	cout << "str1: " << str1 << endl;
//
//	string str2 = "abcdef";
//	auto it = str2.begin() + 3;
//	str2.erase(it);
//	cout << "str2: " <<  str2 << endl;
//
//	string str3 = "abcdefghij";
//	auto first = str3.begin() + 2;
//	auto last = str3.begin() + 6;
//	str3.erase(first, last);
//	cout << "str3: " <<  str3 << endl;
//
//	return 0;
//}

//std::string::c_str是std::string类的成员函数，
// 它返回一个指向以空字符结尾的 C 风格字符串（const char*）的指针。
// 这个 C 风格字符串的内容与调用该函数的std::string对象的内容相同。
//int main() 
//{
//    string str = "Hello, world!";
//    const char* cStr = str.c_str();
//    cout << cStr << endl;
//    return 0;
//}

//std::string::find是std::string类中的成员函数，
// 用于在字符串中查找指定的子串、C - 风格字符串或单个字符。
// 它有四个重载版本，提供了不同的查找方式。
//int main()
//{
//	string s1 = "Hello, world! Hello again!";
//	string target1 = "Hello";
//	size_t foundPos1 = s1.find(target1);
//	if (foundPos1 != string::npos) {
//		cout << "Found at position: " << foundPos1 <<endl;
//	}
//	else {
//		cout << "Not found." << endl;
//	}
//
//	//size_t find(const char* s, size_t pos = 0) const。
//	string s2 = "Hello, world!";
//	const char* target = "world";
//	size_t foundPos2 = s2.find(target);
//	if (foundPos2 != string::npos) {
//		cout << "Found at position: " << foundPos2 << endl;
//	}
//	else {
//		cout << "Not found." << endl;
//	}
//
//	string s3 = "Hello, world!";
//	const char* source = "wonderful world";
//	size_t foundPos3 = s3.find(source, 0, 5);
//	if (foundPos3 != string::npos) {
//		cout << "Found at position: " << foundPos3 << endl;
//	}
//	else {
//		std::cout << "Not found." << std::endl;
//	}
//
//	string s4 = "Hello, world!";
//	char target4 = 'o';
//	size_t foundPos4 = s4.find(target4);
//	if (foundPos4 != std::string::npos) {
//		cout << "Found at position: " << foundPos4 << endl;
//	}
//	else {
//		cout << "Not found." << endl;
//	}
//
//
//	return 0;
//}

//std::string::rfind是std::string类的成员函数，
// 用于在字符串中从后向前查找指定的子串、C 风格字符串或单个字符。
// 它返回找到的目标在字符串中的位置，如果未找到则返回std::string::npos。
//int main()
//{
//	string s1 = "Hello, world! Hello again!";
//	string target1 = "Hello";
//	size_t foundPos1 = s1.rfind(target1);
//	if (foundPos1 != string::npos) {
//		cout << "Found at position: " << foundPos1 << endl;
//	}
//	else {
//		cout << "Not found." << endl;
//	}
//
//	string s2 = "I love C++ programming.";
//	const char* target2 = "C++";
//	size_t foundPos2 = s2.rfind(target2);
//	if (foundPos2 != string::npos) {
//		cout << "Found at position: " << foundPos2 << endl;
//	}
//	else {
//		cout << "Not found." << endl;
//	}
//
//	string s3 = "abcdefghij";
//	const char* source3 = "defghijkl";
//	size_t foundPos3 = s3.rfind(source3, 0, 4);
//	if (foundPos3 != string::npos) {
//		cout << "Found at position: " << foundPos3 << endl;
//	}
//	else {
//		cout << "Not found." << endl;
//	}
//
//	return 0;
//}

//在 C++ 中，std::string::substr是std::string类的一个成员函数，
// 用于从一个字符串中提取子字符串。
//int main()
//{
//    std::string str = "Hello, world!";
//
//    // 提取从索引 7 开始到字符串末尾的子字符串
//    std::string sub1 = str.substr(7);
//    std::cout << "Substring 1: " << sub1 << std::endl;
//
//    // 提取从索引 0 开始，长度为 5 的子字符串
//    std::string sub2 = str.substr(0, 5);
//    std::cout << "Substring 2: " << sub2 << std::endl;
//
//	return 0;
//}

//int main() {
//    std::string str1 = "apple";
//    std::string str2 = "banana";
//    const char* cstr = "apple";
//
//    // 相等性比较
//    std::cout << "str1 == str2: " << (str1 == str2) << std::endl;
//    std::cout << "str1 == cstr: " << (str1 == cstr) << std::endl;
//
//    // 不相等性比较
//    std::cout << "str1!= str2: " << (str1 != str2) << std::endl;
//    std::cout << "str1!= cstr: " << (str1 != cstr) << std::endl;
//
//    // 小于比较
//    std::cout << "str1 < str2: " << (str1 < str2) << std::endl;
//    std::cout << "str1 < cstr: " << (str1 < cstr) << std::endl;
//
//    // 小于等于比较
//    std::cout << "str1 <= str2: " << (str1 <= str2) << std::endl;
//    std::cout << "str1 <= cstr: " << (str1 <= cstr) << std::endl;
//
//    // 大于比较
//    std::cout << "str1 > str2: " << (str1 > str2) << std::endl;
//    std::cout << "str1 > cstr: " << (str1 > cstr) << std::endl;
//
//    // 大于等于比较
//    std::cout << "str1 >= str2: " << (str1 >= str2) << std::endl;
//    std::cout << "str1 >= cstr: " << (str1 >= cstr) << std::endl;
//
//    return 0;
//}

//在 C++ 中，std::operator>> (istream& is, string& str)
// 是用于从输入流（如标准输入或文件输入流）
// 读取数据到std::string对象的操作符重载函数。
//在 C++ 中，std::operator<< (ostream& os, const string& str)
// 是用于将std::string对象的内容输出到输出流（如标准输出或文件输出流）的操作符重载函数。
//在 C++ 中，std::getline是一个用于
// 从输入流中读取一行文本并存储到std::string对象中的函数。
int main() 
{
    /*string str1;
    cout << "请输入一个字符串：";
    cin >> str1;
    cout << "你输入的字符串是：" << str1 << endl;

    string str2 = "Hello, C++!";
    cout << str2 << endl;*/

    string str3;
    cout << "请输入一行文本：";
    getline(std::cin, str3);
    cout << "你输入的文本是：" << str3 << endl;

    return 0;
}