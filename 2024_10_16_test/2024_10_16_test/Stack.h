#pragma once
#include<iostream>
#include<assert.h>
using namespace std;

class Stack
{
public:
	void Init(int capacity = 4);

private:
	int* _a;
	int _top;
	int _capacity;
};