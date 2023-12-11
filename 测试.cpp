
#include<iostream>
#include<string.h>

using namespace std;
class Person
{
public:
	void setname(string name)
	{
		m_name = name;
	}
	string getname()
	{
		return m_name;
	}

	int getage()
	{
		
		return m_age;
	}

	void setlover(string lover)
	{
		m_lover = lover;
	}
private:
	//姓名   可读可写
	string m_name;
	//年龄   只读
	int m_age = 50;
	//情人   只写
	string m_lover;
};
int main6546546()
{
	Person p;
	//p.m_name = "sd";//私有权限，不可访问

	p.setname("carbon");
	cout << "姓名为：" << p.getname() << endl;

	//年龄
	//p.getage = 88;//有错误，不能修改年龄
	cout << "年龄为:" << p.getage() << endl;

	//情人   只写
	p.setlover("hello");//设置情人
	system("pause");
	return 0;
}
