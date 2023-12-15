# include<iostream>
using namespace std;


//构造函数的调用规则
//1.创建一个类,C++编译器会给每个类都添加至少三个函数
//默认构造  (空实现)
//析构函数  (空实现)
//拷贝构造	(值拷贝)

//2.如果我们写了有参构造函数,编译器就不在提供默认构造,但是依然会提供拷贝构造

//3.如果我们写了拷贝构造函数,编译器就不再提供其他普通构造函数了



class Penson444
{

public:

	//Penson444()
	//{
	//	cout << "Penson 的默认构造函数调用" << endl;
	//}


	Penson444(int age)
	{
		m_age = age;

		cout << "Penson 的有参构造函数调用" << endl;
		
	}

	//Penson444(const Penson444 & p)
	//{
	//	m_age = p.m_age;

	//	cout << "Penson 的拷贝构造函数调用" << endl;
	//}

	~Penson444()
	{
		cout << "Penson 的析构函数调用" << endl;
	}

	int m_age;

};

//void text44401()
//{
//	Penson444 p1;
//	p1.m_age = 18;
//
//	Penson444 p2(p1);
//	cout << "p2的年龄为:  " << p2.m_age << endl;
//
//	//如果不写拷贝构造函数的话    编译器会帮我们写
//
//}

void test44402()
{

	//Penson444 p;   如果没有写默认构造函数的话,去调用默认构造函数的话就会出现报错

	Penson444 p(28);

	Penson444 p2(p); 

	cout << "p2的年龄为:  " << p2.m_age << endl;
}
int main83() {

	//text44401();

	test44402();


	system("pause");

	return 0;

}