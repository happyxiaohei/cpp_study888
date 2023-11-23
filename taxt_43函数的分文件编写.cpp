# include<iostream>
using namespace std;
#include"taxt_43函数的分文件的头文件swap1.h"

//#include  这个是包含头文件的意思


//函数的分文件编写
//实现两个数字进行交换的函数

////函数的声明
//void swap1(int a, int b);
//


////函数的定义
//
//void swap1(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}


//1.创建.h后缀名的头文件
//2.创建.cpp后缀的源文件
//3.在头文件中写函数的声明
//3.在源文件中写函数的定义

int main43() {

	int a = 10;
	int b = 20;

	swap1(a, b);
	system("pause");

	return 0;

}