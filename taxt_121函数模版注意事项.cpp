#pragma once            //防止头文件重复包含
# include<iostream>     //包含输入输出流头文件
using namespace std;	//使用标准命名空间
#include<string>

template<class T> //typename可以替换成class

void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;

}
//1.自动类型推导,必须推导出一致的数据类型T才可以使用

void test12101()
{

	int a = 165;
	int b = 20;
	char c = 'c';

	mySwap(a, b);
	//mySwap(a, c);   //这种写法是错误的   推导不出一致的T类型

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
//2.模版必须要确定出的T的数据类型,才可以使用

template<class T>
void func()
{
	cout << "func  调用" << endl;

}

void test12102()
{

	func<int >();
}

int main121() {

	test12101();

	test12102();
	

	system("pause");

	return 0;

}