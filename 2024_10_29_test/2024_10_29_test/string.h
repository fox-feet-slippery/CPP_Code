#pragma once
#include<iostream>
#include<assert.h>
using namespace std;
namespace mystring
{ 
	class string
	{
	public:
		using iterator = char*;
		using const_iterator = const char*;


		//string();
		string(const char* str = "");
		~string();

		void reserve(size_t n);
		void push_back(char ch);
		void append(const char* str);
		string& operator+=(char ch);
		string& operator+=(const char* str);
		void insert(size_t pos, char ch);
		void insert(size_t pos, char* str);
		void earse(size_t pos, size_t n);


		char& operator[](size_t i)
		{
			assert(i < _size);
			return _str[i];
		}

		char& operator[](size_t i)const
		{
			assert(i < _size);
			return _str[i];
		}

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}

		const_iterator begin()const
		{
			return _str;
		}

		const_iterator end()const
		{
			return _str + _size;
		}

		size_t size() const
		{
			return _size;
		}

		const char* c_str() const
		{
			return _str;
		}

	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	}; 
}
