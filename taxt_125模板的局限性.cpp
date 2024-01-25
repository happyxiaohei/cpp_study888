#pragma once            //防止头文件重复包含
# include<iostream>     //包含输入输出流头文件
using namespace std;	//使用标准命名空间
#include<string>


//模版并不是万能的  有些特定数据类型  需要用具体化方式做特殊实现


class Person12501
{

public:

	Person12501(string name, int age)
	{

		this->m_Name = name;

		this->m_Age = age;

	}
	//姓名
	string m_Name;
	//年龄
	int m_Age;
};
//对比两个数据是否相等函数

template<class T>
bool myCompare(T& a, T& b)
{

	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//利用具体化的Person的版本实现代码,具体化优先调用
template<> bool myCompare(Person12501& p1, Person12501& p2)
{

	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
	{

		return true;
	}
	else
	{

		return false;
	}
}

void test12501()
{

	int a = 10;
	int b = 20;

	bool ret = myCompare(a, b);

	if (ret)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;

	}
}

void test12502()
{

	Person12501 p1("Tom", 10);
	Person12501 p2("Tom", 10);

	bool ret = myCompare(p1, p2);

	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{

		cout << "p1 != p2" << endl;

	}
}

//总结   利用具体化的模版,可以解决自定义类型的通用化,'
//学习模版并不是为了写模版,而是在STL能够运用系统提供的模版
int main125() {

	//est12501();
	test12502();

	system("pause");

	return 0;

}