#include "taxt_43函数的分文件的头文件swap1.h"

//函数的定义

void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

