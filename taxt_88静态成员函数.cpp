# include<iostream>
using namespace std;


//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量

class person8801
{

public:

	static void func()
	{
		m_A = 100;  //  静态成员函数可以访问静态成员变量
		//m_B = 200;  // 静态成员函数   不可以访问非静态成员变量  ,,无法区分到底是哪个对象的m_B的属性
		cout << "static void func调用" << endl;
	}

	static int m_A;  //静态成员变量
	int m_B;    //非静态成员变量


	//静态成员函数也是有访问权限的

private:

	static void func2()
	{

		cout << "static void func调用" << endl;
	}
};

 int person8801::m_A = 0;

//有两种访问方式
void test8701()
{
	//1.通过对象访问

	person8801 p;
	p.func();
	//2.通过类名访问
	person8801::func();

	//person8801::func2();    类外访问不到私有的静态成员函数
}
int main88() {


	test8701();

	system("pause");

	return 0;

}