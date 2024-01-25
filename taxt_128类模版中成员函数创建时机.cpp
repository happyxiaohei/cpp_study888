#pragma once            //防止头文件重复包含
# include<iostream>     //包含输入输出流头文件
using namespace std;	//使用标准命名空间
#include<string>

class person12801
{

public:

	void showPerson1()
	{

		cout << "Person1 show" << endl;
	}
};

class person12802
{

public:

	void showPerson2()
	{

		cout << "Person2 show" << endl;
	}
};

template<class T>
class MyClass
{

public:

	T obj;

	//;类模版中的成员函数

	void func1()
	{

		obj.showPerson1();

	}

	void func2()
	{

		obj.showPerson2();

	}
};

void test12801()
{

	MyClass<person12802>m;
	//m.func1();
	m.func2();


}

//总结,类模版中的成员函数并不是一开始就创建的,在调用时才去创建
int main128() {


	test12801();

	system("pause");

	return 0;

}