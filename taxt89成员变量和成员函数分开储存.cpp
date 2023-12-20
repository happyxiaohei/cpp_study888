# include<iostream>
using namespace std;

//成员变量  和  成员函数 分开存储的

class person8901
{
	int m_A;               //非静态成员变量  属于类的对的对象上

	static int m_B;        //静态成员变量    不属于类对象上

	void func()  {}        //非静态成员函数  不属于类对象上

	static void func2(){}   //静态成员函数   不属于类对象上

};

int person8901::m_B = 100;

void test8901()
{

	person8901 p;

	//空对象占用内存空间为  :  1
	//C++编译器会给每个空对象也分配一个字节空间,是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址


	cout << "size of p = " << sizeof(p) << endl;
}

void test8902() 
{
	person8901 p;

	cout << "size of p = " << sizeof(p) << endl;
}
int main89() {

	//test8901();

	test8902();


	system("pause");

	return 0;

}