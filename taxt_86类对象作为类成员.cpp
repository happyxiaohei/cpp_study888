# include<iostream>
using namespace std;
#include<string>

//类对象作为类成员

//手机类

class Phone
{

	Phone(string p)
	{

		m_PName = p;
	}

public:

	//手机品牌
	string m_PName;
};

//人类

class Person
{

public:

	//Person(string name, string pName):m_name(name) , m_Phone(pName)
	//{


	//}

	Person(string name, string pName) :m_name(name), m_Phone(pName)
	{

	}

	//姓名
	string m_name;
	//手机
	Phone m_Phone;
};


int main() {


	system("pause");

	return 0;

}





