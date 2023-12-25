# include<iostream>
using namespace std;

//函数调用运算符重构

class MyPrint10101
{

public:

	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};

//正常的函数调用

void MyPrint10102(string text)
{

	cout << text << endl;

}


void test10101()
{

	MyPrint10101 myprint;
	myprint("hello world!");  //由于使用起来非常类似于函数调用,因此成为仿函数
	MyPrint10102("hello world");

}

//仿函数非常灵活,因此没有固定的写法

class MyAdd
{

public:

	int operator()(int num1, int num2)
	{

		return num1 + num2;


	}
};

void test10102()
{

	MyAdd myadd;
	int ret = myadd(50, 100);
	cout << "ret =  " << ret << endl;

	//匿名函数对象调用
	//一个类型加一个小括号   就属于匿名对象    后面的小括号相当于传值到Myadd里
	cout << "匿名对象输出的值为:  " << MyAdd()(100, 100) << endl;
}
int main101() {


	//test10101();

	test10102();

	system("pause");

	return 0;

}