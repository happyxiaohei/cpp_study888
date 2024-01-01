# include<iostream>
using namespace std;
#include <string>

//虚析构和纯虚析构

class Animal114
{

public:

	Animal114()
	{
		cout << "Animal的构造函数调用" << endl;
	}

	//利用虚析构 可以解决父类指针释放子类对象时不干净的问题
	//virtual ~Animal114()  // 不加virtual 关键字的话  就不会走下面子类中的析构函数   ~Cat114()   不会走这里的代码
	//{
	//	cout << "Animal的析构函数调用" << endl;
	//}


	//这行是纯虚析构    需要声明也需要实现
	// 有了纯虚析构之后,这个类也属于抽象类,无法实例化对象 
	virtual ~Animal114() = 0;
	

	//纯虚函数
	virtual void speak() = 0;

};

Animal114::~Animal114()
{

	cout << "Animal的纯虚析构函数调用" << endl;
}

class Cat114 : public Animal114
{

public:

	Cat114(string name)
	{
		cout << "Cat构造函数调用" << endl;
		m_Name = new string(name);
	}

	virtual void speak()
	{

		
		cout << *m_Name << "小猫在说话" << endl;

	}

	~Cat114()
	{

		if (m_Name != NULL)
		{
			cout << "Cat的析构函数" << endl;
			delete m_Name;
			m_Name = NULL;

		}
	}

	string *m_Name;
};

void test11401()
{

	Animal114* animal = new Cat114("Tom");
	animal->speak();

	//父类指针在析构时候 不会调用子类中析构函数,导致子类如果有堆区属性 出现内存泄漏
	delete animal;


}
int main114() {

	test11401();


	//总结,
	//1.虚析构或纯虚析构就是用来解决通过父类指针释放子类对象
	//2.如果子类中没有堆区数据,可以不写为虚析构或纯虚析构
	//3.拥有纯虚析构的类也属于抽象类


	system("pause");

	return 0;

}