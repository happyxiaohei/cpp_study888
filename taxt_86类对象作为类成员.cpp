# include<iostream>
using namespace std;
#include<string>

//类对象作为类成员

//手机类



class Phone
{
public:

	Phone(string pName)//clone(string name)
	{

		cout << "phone的构造函数调用" << endl;
		m_PName = pName;

	}

	~Phone()
	{

		cout << "phone的析构函数调用" << endl;
	}

	//品牌
	string m_PName;

};

//人类



class Person8601    //之前报错的原因是因为有重名    更改后就不会报错了
{
public:


	   //Phone m_Phone = pName   隐式转换法
	Person8601(string name, string pName) :m_name(name), m_Phone(pName)
	{
		cout << "Person的构造函数调用" << endl;
	}
	~Person8601() 
	{
		cout << "Person的析构函数调用" << endl;
	}


	//姓名
	string m_name;
	//手机
	Phone m_Phone;

};

//当其他类对象作为本类成员,  我们称该成员为对象成员
// 构造时候先构造类对象,再构造自身    
// 析构的顺序与构造相反




void test8601()
{


	Person8601 p1("张三", "华为");
	cout << "姓名为:" << p1.m_name << endl;
	cout << "手机为:" << p1.m_Phone.m_PName << endl;

}

int main86() {

	test8601();
	system("pause");

	return 0;

}





