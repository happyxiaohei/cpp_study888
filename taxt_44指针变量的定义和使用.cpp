# include<iostream>
using namespace std;

int main() {

	//可以通过指针来保存一个地址    指针就是一个地址
	//定义一个指针

	int a = 10;

	//指针定义的语法:  数据类型 * 指针变量名

	int* p;  //这里指针变量名和普通的变量名是一样的   教程用的是P而已 

	//让指针记录变量a 的地址

	p = &a;
	cout << "a 的地址为: " << &a << endl;
	cout << "指针p为:" << p << endl;



	//使用指针

	//可以用解引用的方式来找到指针指向的内存
	//指针前加*号,代表解引用,找到指针指向的内存中的数据
	*p = 1000;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;




	system("pause");

	return 0;

}