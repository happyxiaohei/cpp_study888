#pragma once            //防止头文件重复包含
# include<iostream>     //包含输入输出流头文件
using namespace std;	//使用标准命名空间
#include<string>


//1.普通函数调用可以发生隐式类型转换
//2.函数模版  用自动类型推导,不可以发生隐式类型转换
//3.函数模板  用显示指定类型,可以发生隐式类型转换

int myAdd01(int a, int b)
{

	return a + b;

}

template<class T>
T myAdd02(T a, T b)
{

	return a + b;
}

void test12301()
{

	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd01(a, c) << endl;

	//自动类型推导   不会发生隐式类型转换
	//cout << myAdd02(a, c) << endl;  

	//显示指定类型   会发生隐式类型转换
	cout << myAdd02<int>(a, c) << endl;  
	
	//建议使用显示指定类型的方式,调用函数模板,因为可以自己确定通用类型T

}
int main123() {

	test12301();


	system("pause");

	return 0;

}