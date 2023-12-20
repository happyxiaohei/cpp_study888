# include<iostream>
using namespace std;


//常函数


class person92
{

public:

	//this指针的本质   是指针常量  指针的指向是不可以修改的
	//下面的函数意思翻译成代码的意思是    const person02 * const this 
	//在成员函数后面加const,修饰的是this指向,让指针指向的值也不可以修改
	
	void showperson92() const
	{

		this -> m_B = 100;
		//this->m_A = 100;
		//this = NULL;  //this 指针不可以修改指针的指向
	}

	void func()
	{


	}


	int m_A;

	//假如想修改常函数中的变量的话   在前面加上  mutable   (牛特波)  这个关键字
	mutable int m_B; //特殊变量,即使在常函数中,也可以修改这个值
	
};

void test9201()
{

	person92 p1;
	p1.showperson92();
}


//常对象


void test9202()
{

	const person92 p2;  //在对象前面加const,变为常对象
	
	//p2.m_A = 100;//
	
	p2.m_B = 100;//  m_B是特殊值 ,  在常对象下也可以修改

	
	//常对象只能调用常函数

	//p2.func();   //常对象  不可以调用普通成员函数,因为普通成员函数可以修改属性


}

int main92() {




	system("pause");

	return 0;

}