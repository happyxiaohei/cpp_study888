# include<iostream>
using namespace std;

//重载递增运算符

class MyInteger
{

	friend ostream& operator <<(ostream& cout, MyInteger myint);

public:
	MyInteger ()
	{

		m_Num = 0;
	}

	
	//重载 前置++ 运算符      返回引用为了一直对一个数据进行递增操作
	
	MyInteger& operator++()   
	{
		//先进行++
		m_Num++;
		
		//再将自身做返回
		return *this;
	}
	
	//重载 后置++ 运算符     
	//void operator++(int)    int 代表占位参数,可以用于区分前置和后置递增

	//后置递增返回的一定是局部对象的值    前置递增返回的一定是引用
	MyInteger operator++(int)
	{
		//先   记录当时结果

		MyInteger temp = *this;


		//后  递增
		m_Num++;

		//最后将记录结果做返回

		return temp;
	}

	//重载 前置-- 运算符

	MyInteger& operator--()
	{

		m_Num--;
		return *this;
	}

	
	//重载 后置-- 运算符

	MyInteger operator--(int)
	{
		MyInteger temp01 = *this;

		m_Num--;

		return temp01;

	}

private:

	int m_Num;
};



//重载<<左移运算符

ostream& operator <<(ostream& cout, MyInteger myint)
{

	cout << myint.m_Num<<endl;
		return cout;
}

void test9801()
{

	MyInteger myint;

	cout << ++(++myint) << endl;   
	cout << myint << endl;    

}

void test9802()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;

}

void test9803()
{

	MyInteger myint;

	cout << --(--myint) << endl;
	cout << myint << endl;
}

void test9804()
{

	MyInteger myint;

	cout << myint-- << endl;
	cout << myint << endl;
}

//总结 前置递增返回  引用,   后置递增返回  值
int main98() {

	//test9801();   //前置递增

	//int a = 0;
	//cout << ++(++a) << endl;
	//cout << a << endl;


	//test9802();  //后置递增

	test9803();  //前置递减

	test9804();  //后置递减
	system("pause");

	return 0;

}