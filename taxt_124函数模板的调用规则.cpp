#pragma once            //防止头文件重复包含
# include<iostream>     //包含输入输出流头文件
using namespace std;	//使用标准命名空间
#include<string>


//1.如果函数模板和普通函数都可以调用,优先调用普通函数
//2.可以通过空模板参数列表  强制调用函数模板
//3.函数模板可以发生重载
//4.如果函数模板可以产生更好的匹配,优先调用函数模板

void myPrint12401(int a, int b)
{

	cout << "调用普通函数" << endl;

}

template<class T>
void myPrint12401(T a, T b)
{

	cout << "调用模版" << endl;

}

template<class T>
void myPrint12401(T a, T b,T c)
{

	cout << "调用重载模版" << endl;

}
void test12401()
{

	int a = 10;
	int b = 20;

	//myPrint12401(a, b);

	//通过空模板参数列表,强制调用函数模板
	//myPrint12401<>(a, b);

	//这就是重载函数模版的调用
	//myPrint12401(a, b, 100);


	//如果函数模板可以产生更好的匹配,优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';
	myPrint12401(c1, c2);

	//建议提供了函数模板,最好就不要提供普通函数,否则容易出现二义性,就是报错

}
int main() {


	test12401();

	system("pause");

	return 0;

}