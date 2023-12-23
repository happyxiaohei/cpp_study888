# include<iostream>
using namespace std;

//左移运算符重载

class Person9701
{

public:

	Person9701(int a, int b)
	{
		m_A = a;
		m_B = b;


	}
	 friend ostream& operator <<(ostream& cout, Person9701& p);
private:


	//利用成员函数重载 左移运算符

	//不会利用成员函数重载<<运算符,因为无法为实现cout在左侧    只能利用全局函数重载左移运算符

	
	//void operator<<(cout)
	//{



	//}
	int m_A;
	int m_B;
};


//只能利用全局函数重载左移运算符
ostream & operator <<(ostream &cout,Person9701 &p)    //本质是  operator<<(cout,p )  简化cout<<p



{

	cout << "m_A = " << p.m_A << "  m_B = " << p.m_B;  
	return cout;

}

void test9701()
{

	Person9701 p(10,10);

	//p.m_A = 10;
	//p.m_B = 10;


	cout << p<<"hello world" << endl;

}


//总结  重载左移运算符配合友元可以实现输出自定义数据类型
int main97() {

	test9701();


	system("pause");

	return 0;

}