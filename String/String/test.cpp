#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include <string>
using namespace std;

//std::string::string;
//std::string::string�� C++ ��׼����std::string��Ĺ��캯����
// std::string�����ڴ����ַ��������ṩ��һ�ַ���ķ�ʽ�������ı����ݣ�
// �� C �����ַ�������'\0'��β���ַ����飩����ȫ�����á�
//int main()
//{
//	//string();
//	string str1;
//	cout << "str1: " << str1 << endl;//�����str1: ��һ�����У���ʾ���ַ�����
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
//	//������
//	string str9("Hello World");
//	string::iterator it1 = str9.begin();
//	while (it1 != str9.end()) //str9.endָ��'\0'
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
// �� C++ ��׼����std::string��ĳ�Ա������
// ���ڻ�ȡ�ַ�������ʼ��������
// std::string::end
// �� C++ ��׼����std::string��ĳ�Ա������
// ���ڻ�ȡ�ַ����Ľ�����������
//int main() 
//{
//    string str = "Hello, World!";
//
//    // ʹ����ͨ�������������޸��ַ���
//   //string::iterator it = str.begin();
//    auto it = str.begin();
//    *it = 'h';
//    cout << "Modified string: " << str << endl;
//
//    // ʹ�ó������������������ַ���
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

//std::string::rbegin�� 
// C++ ��׼����std::string��ĳ�Ա������
// ���ڻ�ȡ�ַ����ķ�����ʼ��������
//int main() 
//{
//    string str = "Hello, World.";
//
//    // ʹ�÷������������������޸��ַ���
//    string::reverse_iterator rit = str.rbegin();
//    cout << "original dtring: " << str << endl;
//    *rit = '!';
//    cout << "Modified string: " << str << endl;
//
//    // ʹ�ó������������������������ַ���
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


//�� C++ �У�std::string::size��һ����Ա���������ڻ�ȡ�ַ����ĳ��ȡ�
//int main() 
//{
//    string str = "Hello, world!";
//    cout << "�ַ�������Ϊ��" << str.size() << endl;
//    return 0;
//}

//�� C++ �У�std::string::capacity��std::string���һ����Ա������
// �����ص�ǰ�ַ����������Ĵ洢�ռ��С��
// �����С�����ֽ�Ϊ��λ�ģ��ܹ����ɵ��ַ��������������ַ�����β�Ŀ��ַ� '\0'����
//int main()
//{
//    string str = "Hello";
//    cout << "�ַ�����ǰ����: " << str.capacity() << endl;
//    return 0;
//}
//std::string::size�������ص����ַ�����ʵ���ַ���������
// ��std::string::capacity�������ص����ַ��������ڲ��洢�������ܹ����ɵ�����ַ�������

//�� C++ �У�std::string::reserve�������������ַ�������Ԥ���㹻���������洢����n���ַ���
// ����һ��Ԥ�����ڴ�Ļ��ƣ�Ŀ���Ǳ��������ַ���Ƶ������ַ�ʱƵ�������·����ڴ棬�Ӷ�������ܡ�
//int main()
//{
//    string str;
//    cout << "��ʼ����: " << str.capacity() << endl;
//    str.reserve(20);
//    cout << "Ԥ��20���ַ��������: " << str.capacity() << endl;
//    return 0;
//}

//std::string::clear��std::string��ĳ�Ա������
// ��������ַ��������ݣ������ַ����ĳ�������Ϊ 0�������ı���������
//int main() {
//    string str = "Hello, world!";
//    cout << "��ʼ�ַ�����" << str << endl;
//    cout << "��ʼ�ַ���size��" << str.size() << endl;
//    cout << "��ʼ�ַ���capacity��" << str.capacity() << endl;
//
//    str.clear();
//    cout << "��պ���ַ�����" << str << endl;
//    cout << "��պ���ַ���size��" << str.size() << endl;
//    cout << "��պ���ַ���capacity��" << str.capacity() << endl;
//
//    return 0;
//}

//std::string::operator[]��std::string��ĳ�Ա������
// ���ڷ����ַ������ض�λ�õ��ַ���
// ���ṩ��һ�ַ���ķ�ʽ����ȡ���޸��ַ����еĵ����ַ���
//int main() 
//{
//    string str = "Hello, world!";
//    // ��ȡ�ַ�
//    char ch = str[4];
//    cout << "�� 5 ���ַ��ǣ�" << ch << endl;
//    // �޸��ַ�
//    str[4] = 'X';
//    cout << "�޸ĺ���ַ�����" << str << endl;
//    return 0;
//}

//std::string::operator+=��std::string��ĳ�Ա������
// ���ڽ�һ���ַ�����C ����ַ������Կ��ַ���β���ַ����飩
// �򵥸��ַ����ӵ���ǰ�ַ�����ĩβ�������ضԵ�ǰ�ַ��������á�
//int main()
//{
//	//������һ��std::string����
//	string str1 = "Hello";
//	string str2 = ", world!";
//	str1 += str2;
//	cout << str1 << endl;
//
//	//���� C ����ַ���
//	string str = "Hello";
//	str += ", world!";
//	cout << str << endl;
//
//	//���ӵ����ַ�
//	string str3 = "Hello, World";
//	str3 += '!';
//	cout << str3 << endl;
//
//	//����ֵ
//	string str4 = "Hello";
//	str4 += ", ";
//	str4 += "world!";
//	cout << str4 << endl;
//
//	return 0;
//}

//std::string::insert��std::string��ĳ�Ա������
// ������ָ��λ�ò������ݵ��ַ����С�
// ���Բ�����һ���ַ�����C ����ַ����������ַ���һ����������ͬ�ַ�����һ���ַ���Χ��
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
 
//std::string::erase��std::string���е�һ����Ա������
// ���ڴ��ַ�����ɾ���ַ��������������ذ汾���ֱ�����ɾ��ָ��λ�úͳ��ȵ��ַ����С�
// ɾ�������ַ��Լ�ɾ��һ���ַ���Χ��
//int main()
//{
//	string str1 = "abcdefghij";//��λ�� 3���ַ� 'd'����ʼɾ�� 4 ���ַ�
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

//std::string::c_str��std::string��ĳ�Ա������
// ������һ��ָ���Կ��ַ���β�� C ����ַ�����const char*����ָ�롣
// ��� C ����ַ�������������øú�����std::string�����������ͬ��
//int main() 
//{
//    string str = "Hello, world!";
//    const char* cStr = str.c_str();
//    cout << cStr << endl;
//    return 0;
//}

//std::string::find��std::string���еĳ�Ա������
// �������ַ����в���ָ�����Ӵ���C - ����ַ����򵥸��ַ���
// �����ĸ����ذ汾���ṩ�˲�ͬ�Ĳ��ҷ�ʽ��
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
//	//size_t find(const char* s, size_t pos = 0) const��
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

//std::string::rfind��std::string��ĳ�Ա������
// �������ַ����дӺ���ǰ����ָ�����Ӵ���C ����ַ����򵥸��ַ���
// �������ҵ���Ŀ�����ַ����е�λ�ã����δ�ҵ��򷵻�std::string::npos��
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

//�� C++ �У�std::string::substr��std::string���һ����Ա������
// ���ڴ�һ���ַ�������ȡ���ַ�����
//int main()
//{
//    std::string str = "Hello, world!";
//
//    // ��ȡ������ 7 ��ʼ���ַ���ĩβ�����ַ���
//    std::string sub1 = str.substr(7);
//    std::cout << "Substring 1: " << sub1 << std::endl;
//
//    // ��ȡ������ 0 ��ʼ������Ϊ 5 �����ַ���
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
//    // ����ԱȽ�
//    std::cout << "str1 == str2: " << (str1 == str2) << std::endl;
//    std::cout << "str1 == cstr: " << (str1 == cstr) << std::endl;
//
//    // ������ԱȽ�
//    std::cout << "str1!= str2: " << (str1 != str2) << std::endl;
//    std::cout << "str1!= cstr: " << (str1 != cstr) << std::endl;
//
//    // С�ڱȽ�
//    std::cout << "str1 < str2: " << (str1 < str2) << std::endl;
//    std::cout << "str1 < cstr: " << (str1 < cstr) << std::endl;
//
//    // С�ڵ��ڱȽ�
//    std::cout << "str1 <= str2: " << (str1 <= str2) << std::endl;
//    std::cout << "str1 <= cstr: " << (str1 <= cstr) << std::endl;
//
//    // ���ڱȽ�
//    std::cout << "str1 > str2: " << (str1 > str2) << std::endl;
//    std::cout << "str1 > cstr: " << (str1 > cstr) << std::endl;
//
//    // ���ڵ��ڱȽ�
//    std::cout << "str1 >= str2: " << (str1 >= str2) << std::endl;
//    std::cout << "str1 >= cstr: " << (str1 >= cstr) << std::endl;
//
//    return 0;
//}

//�� C++ �У�std::operator>> (istream& is, string& str)
// �����ڴ������������׼������ļ���������
// ��ȡ���ݵ�std::string����Ĳ��������غ�����
//�� C++ �У�std::operator<< (ostream& os, const string& str)
// �����ڽ�std::string������������������������׼������ļ���������Ĳ��������غ�����
//�� C++ �У�std::getline��һ������
// ���������ж�ȡһ���ı����洢��std::string�����еĺ�����
int main() 
{
    /*string str1;
    cout << "������һ���ַ�����";
    cin >> str1;
    cout << "��������ַ����ǣ�" << str1 << endl;

    string str2 = "Hello, C++!";
    cout << str2 << endl;*/

    string str3;
    cout << "������һ���ı���";
    getline(std::cin, str3);
    cout << "��������ı��ǣ�" << str3 << endl;

    return 0;
}