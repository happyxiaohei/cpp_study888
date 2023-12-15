# include<iostream>
using namespace std;

//拷贝构造函数的调用时机


class Person333
{
public:
	Person333()
	{
		cout << "Person333 默认构造函数的调用" << endl;
	}
	Person333(int age)
	{
		cout << "Person333 有参构造函数的调用" << endl;
		m_age = age;
	}

	Person333(const Person333 & p)
	{
		cout << "Person333 拷贝构造函数的调用" << endl;
		m_age = p.m_age;

	}

	~Person333()
	{
		cout << "Person333 析构造函数的调用" << endl;
	}

	int m_age;
};


//1.使用一个已经创建完毕的对象来初始化一个新对象

void test33301()
{
	Person333 p1(20);
	Person333 p2(p1);

	cout << "p2的年龄为:  " << p2.m_age << endl;
}
//2.值传递的方式给函数参数传值

void dowork(Person333 p)
{


}

void test33302()
{
	Person333 p;
	dowork(p);
}
//3.以值方式返回局部对象

Person333 dowork2()
{

	Person333 p1;
	
	cout << (int*)&p1<< endl;
	//return p1;
	return Person333(p1);
	//这里和教程上不一样   因为vs2022这个版本做了优化 所以导致了看不到拷贝构造函数的调用
}

void test33303()
{
	Person333 p = dowork2();
	
	cout << (int*)&p << endl;
}

int main82() {


	//test33301();
	//test33302();
	test33303();

	system("pause");

	return 0;

}