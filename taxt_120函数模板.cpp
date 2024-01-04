#pragma once            //防止头文件重复包含
# include<iostream>     //包含输入输出流头文件
using namespace std;	//使用标准命名空间
#include<string>


//template    声明创建模版
//typename    表明其后面的符号是一种数据类型,可以用class替代
//  T         通用的数据类型,名称可以替换,通常为大写字母

//函数模版

//两个整型交换函数

void swapInt12001(int& a, int& b)
{

	int temp = a;
	a = b;
	b = temp;

}

//交换两个浮点型函数

void swapDouble12001(double& a, double& b)
{

	double temp = a;
	a = b;
	b = temp;



}

//模板函数

template<typename T>  //声明一个模版,告诉编译器后面代码中紧跟着的T不要报错,T是一个通用数据类型
void mySwap12001 (T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;

}

void test12001()
{
	int a = 10;
	int b = 20;

	//有两种方式使用模版
	//1.自动类型推导

	//mySwap12001(a, b);

	//2.显示指定类型
	
	mySwap12001<int>(a, b);
	
	
	//swapInt12001(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 45.1;
	double d = 66.6;
	mySwap12001<double>(c, d);

	//swapDouble12001(c, d);

	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
}
int main120() {

	test12001();


	system("pause");

	return 0;

}