# include<iostream>
using namespace std;


//多继承语法

class Base10801
{

public:

	Base10801()
	{

		m_A = 100;
	}
	int m_A;

};

class Base10802
{

public:

	Base10802()
	{

		m_A = 200;
	}
	int m_A;
 };


//子类  需要继承  Base1和Base2

//语法   class 子类 : 继承方式 父类 1 , 继承方式 父类 2  
class Son108:public Base10801,public Base10802
{
public:

	Son108()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;

};

void test10801()
{
	Son108 s;
	
	cout << "sizeof son = " << sizeof(s) << endl;

	//当父类中出现同名成员,需要加作用域区分
	cout << "m_A = " << s.Base10801::m_A << endl;
	cout << "m_A = " << s.Base10802::m_A << endl;

}
int main() {

	test10801();


	system("pause");

	return 0;

}