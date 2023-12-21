# include<iostream>
using namespace std;


//加号运算符重载


class Person9601
{

public:

//1.成员函数重载加号

	//重载的关键词是    operator   哦普尔瑞特  
	//Person9601 operator+ (Person9601& p)
	//{

	//	Person9601 temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}

	int m_A;
	int m_B;
};


//2.全局函数重载加号

Person9601 operator+ (Person9601& p1, Person9601& p2)
{
	Person9601 temp;

	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	
	return temp;

}

//3.函数重载

Person9601 operator+ (Person9601& p1, int nuw)
{
	Person9601 temp;

	temp.m_A = p1.m_A + nuw;
	temp.m_B = p1.m_B + nuw;

	return temp;

}

void test9601()
{

	Person9601 p1;
	p1.m_A = 10;
	p1.m_B = 10;
	

	Person9601 p2;

	p2.m_A = 10;
	p2.m_B = 10;



	//成员函数重载的本质调用
	//Person9601 p3 = p1.operator+(p2);

	//全局函数重载的本质调用

	Person9601 p3 = operator+(p1, p2);

	
	
	
	//这个是加号重载的简化写法
	//Person9601 p3 = p1 + p2;
	
	//运算符重载  也可以发生函数重载

	Person9601 p4 = p1 + 100;




	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;
	cout << "p3.m_A = " << p4.m_A << endl;
	cout << "p3.m_B = " << p4.m_B << endl;

	//总结  对于内置的数据类型的表达式的运算符是不可能改变的     不要滥用运算符重载

}




int main() {

	test9601();


	system("pause");

	return 0;

}