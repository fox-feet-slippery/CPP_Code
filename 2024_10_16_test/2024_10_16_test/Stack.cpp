#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void Stack::Init(int capacity)//÷∏∂®¿‡”Ú
{
	_a = (int*)malloc(sizeof(int) * capacity);
	if (nullptr == _a)
	{
		perror("malloc fail");
		return;
	}
	_capacity = capacity;
	_top = 0;
}