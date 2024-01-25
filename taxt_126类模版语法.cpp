#pragma once            //防止头文件重复包含
# include<iostream>     //包含输入输出流头文件
using namespace std;	//使用标准命名空间
#include<string>

//类模版
template<class NameType ,class AgeType >
class Person12601
{

public:
	Person12601(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson12601()
	{

		cout << "name:  " << this->m_Name << "  age:  " << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};

void test12601()
{

	Person12601<string, int> p1("孙悟空", 555);
	p1.showPerson12601();
}

//总结,类模版和函数模版语法相似,在声明模版template后面加类,此类称为类模版
int main126() {

	test12601();
	


	system("pause");

	return 0;

}