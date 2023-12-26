# include<iostream>
using namespace std;


//继承中同名成员处理

class Base106
{

public:

	Base106()
	{

		 m_A = 100;
	}

	void func()
	{

		cout << "Base - func()调用" << endl;
	}

	void func(int a)
	{

		cout << "Base - func(int a )调用" << endl;
	}
	int m_A;
};

class Son106:public Base106
{

public:

	Son106()
	{

		m_A = 200;
	}

	void func()
	{

		cout << "Son106 - func()调用" << endl;
	}



};

void test10601()
{

	Son106 s;

	cout << " Son  下 m_A = " << s.m_A << endl;

	//如果通过子类对象  访问到父类中同名成员  需要加作用域
	cout << " Base  下 m_A = " << s.Base106::m_A << endl;

}

void test10602()
{

	Son106 s;

	s.func();  //直接调用   调用是子类中的同名成员

	//如果子类中出现和父类同名的成员函数   子类的同名成员会隐藏掉所有同名成员函数



	s.Base106::func();  //
	
	//如果想访问到父类中被隐藏的同名成员函数  需要加作用域
	
	s.Base106::func(100);  //


}
int main106() {

	//test10601();

	test10602();


	//总结,
	//子类对象可以直接访问到子类中的同名成员
	
	//子类对象加作用域可以访问到父类同名成员
	
	//当子类与父类拥有同名的成员函数,子类会隐藏父类中同名成员函数,加作用域可以访问到父类中同名函数

	system("pause");

	return 0;

}