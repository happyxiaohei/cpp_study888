#pragma once            //防止头文件重复包含
# include<iostream>     //包含输入输出流头文件
using namespace std;	//使用标准命名空间
#include<string>


template<class NameType, class AgeType = int>  //尖括号里就是参数列表
class Person12701
{

public:
	Person12701(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson12701()
	{

		cout << "name:  " << this->m_Name << "  age:  " << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};



//类模版没有自动类型推到使用方式
void test12701()
{

	//Person12701 p1("孙悟空", 555);  //这是错误的   无法用自动类型推到
	Person12701 <string, int> p1("孙悟空", 555);
	p1.showPerson12701();
}
// 
//类模版在模版参数列表中可以有默认参数

void test12702()
{

	//Person12701 p1("孙悟空", 555);  //这是错误的   无法用自动类型推到
	Person12701 <string> p2("猪八戒", 8888);
	p2.showPerson12701();
}

int main127() {

	test12701();
	test12702();

	system("pause");

	return 0;

}