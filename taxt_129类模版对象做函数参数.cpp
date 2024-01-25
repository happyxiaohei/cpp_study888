#pragma once            //防止头文件重复包含
# include<iostream>     //包含输入输出流头文件
using namespace std;	//使用标准命名空间
#include<string>

template<class T1,class T2>

class Persong12901
{

public:

	Persong12901(T1 name, T2 age)
	{

		this->m_Name = name;
		this->m_Age = age;

	}

	void showPersong12901()
	{

		cout << "姓名:  " << this->m_Name << "  年龄:  " << this->m_Age << endl;

	}

	T1 m_Name;
	T2 m_Age;
};
//1.指定传入类型

void printPersong1(Persong12901<string, int>& p)
{

	p.showPersong12901();
}
void test12901()
{

	Persong12901<string, int>p("孙悟空", 5555);
	printPersong1(p);

}

//2.参数模版化

//3.整个类模版化
int main() {

	test12901();


	system("pause");

	return 0;

}