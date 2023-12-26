# include<iostream>
using namespace std;

//继承中的同名静态成员处理

class Base107
{

public:

	static int m_A;

	static void func()
	{
		cout << "Base  -  static void func() " << endl;
	}
	static void func(int a )
	{
		cout << "Son  -  static void func(int a ) " << endl;
	}
};

int Base107::m_A = 100;

class Son107:public Base107
{

public:

	static int m_A;

	static void func()
	{
		cout << "Son  -  static void func() " << endl;
	}
	static void func(int a)
	{
		cout << "Son  -  static void func(int a ) " << endl;
	}

};

int Son107::m_A = 200;


//同名静态成员属性

void test10701()
{

	//1.通过对象访问
	cout << "通过对象访问:  " << endl;

	Son107 s;

	cout << "Son  下 m_A = " << s.m_A << endl;
	cout << "Base 下 m_A = " << s.Base107::m_A << endl;

	//2.通过类名访问

	cout << "通过类名访问:  " << endl;

	cout << "Son  下 m_A = " << Son107::m_A << endl;

	//第一个::代表通过类名方式访问  第二个::代表访问父类作用域下
	cout << "Base 下 m_A = " << Son107::Base107::m_A << endl;


}

//同名静态成员函数

void test10702()
{

	//1.通过对象访问

	cout << "通过对象访问" << endl;
	Son107 s;
	s.func();
	s.Base107::func();

	//2.通过类名访问

	cout << "通过类名访问" << endl;

	Son107::func();

	Son107::Base107::func();

	// 子类出现和父类同名静态成员函数,也会隐藏父类中所有同名成员函数
	//如果想访问父类中被隐藏同名成员,需要加作用域
	Son107::Base107::func(500);



}
int main107() {



	//test10701();
	test10702();


	system("pause");

	return 0;

}