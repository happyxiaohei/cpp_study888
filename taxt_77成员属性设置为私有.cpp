
# include<iostream>
#include<string.h>

using namespace std;
//成员属性设置私有
//1.可以自己控制读写权限
//2.对于写可以检测数据有效性

class person
{
public:
	//设置姓名

	void steName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}

	////获取年龄
	//int getage()
	//{
	//	return m_age;
	//}

	int getage()
	{
		
		return m_age;
	}

private :

	string m_Name; //姓名   可读可写

	int m_age = 12;  //年龄   只读不写


	string m_Idol;  //偶像  只写
};

int main() {


	person p1;
	//设置姓名
	p1.steName("张三");
	//获取姓名
	cout << "  姓名  : " <<p1.getName()<< endl;


	//年龄设置
	//p1.gatAge(20);
	//p1.m_Age = 20;
	
	//获取年龄

	//cout << "  年龄  : " << p1.getage() << endl;
	cout << "年龄为:" << p1.getage() << endl;

	system("pause");

	return 0;

}



