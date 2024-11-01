#define _CRT_SECURE_NO_WARNINGS 1
#include"string.h"

namespace mystring
{ 
	/*string::string()
		:_str(new char[1] {'\0'})
		, _size(0)
		, _capacity(0)
	{}*/

	string::~string()
	{
		delete[] _str;
		_str = nullptr;
		_size = _capacity = 0;
	}

	string::string(const char* str)
		: _size(strlen(str))
	{
		_capacity = _size;
		_str = new char[_size + 1];
		strcpy(_str, str);
	}


	void string::reserve(size_t n)
	{
		if (n > _capacity)
		{
			char* tmp = new char[n + 1];
			strcpy(tmp, _str);
			delete[] _str;
			_str = tmp;

			_capacity = n;
		}
	}

	void string::push_back(char ch)
	{
		if (_size == _capacity)
		{
			reserve(_capacity == 0 ? 4 : _capacity * 2);
		}

		_str[_size++] = ch;
		_str[_size] = '\0';
	}
	
	void string::append(const char* str)
	{
		size_t len = strlen(str);
		if (_size + len > _capacity)
		{
			size_t newcapacity = 2 * _capacity;
			if (newcapacity < _size + len)
				newcapacity = _size + len;

			reserve(newcapacity);
		}
		strcpy(_str + _size, str);
		_size += len;
		
	}

	string& string::operator+=(char ch)
	{
		push_back(ch);
		return *this;
	}
	string& string::operator+=(const char* str)
	{
		append(str);
		return *this;
	}
}
