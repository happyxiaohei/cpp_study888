# include<iostream>
using namespace std;

//深拷贝 和浅拷贝

class Penson555
{

public:

	Penson555()
	{

		cout << "Person555 的默认构造函数调用" << endl;
	}

	Penson555(int age , int height)
	{

		m_aeg = age;

		m_Height = new int(height);
		cout << "Person555 的有参构造函数调用" << endl;
	}

	//自己实现拷贝构造函数   解决浅拷贝带来的问题

	Penson555(const Penson555 &p)
	{
		cout << "Person555 的拷贝构造函数的调用" << endl;
		m_aeg = p.m_aeg;

		//m_Height = p.m_Height;   //这段代码是编译器默认实现的代码

		//深拷贝操作

		   
		m_Height = new int(*p.m_Height);



	}

	~Penson555()
	{
		//析构代码,将堆区开辟的数据做释放操作

		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person555 的析构函数调用" << endl;
	}

	int m_aeg;  //年龄
	int *m_Height; //身高
};

void test55501()
{

	Penson555 p1(88,180);

	cout << "p1的年龄为:   " << p1.m_aeg  <<"p1的身高为:  " << *p1.m_Height << endl;

	Penson555 p2(p1);
	cout << "p2的年龄为:   " << p2.m_aeg << "p2的身高为:  " << *p2.m_Height << endl;

}
int main84() {

	test55501();

	//浅拷贝带来的问题就是  堆区的内存重复释放
	
	//浅拷贝的问题要利用深拷贝进行解决

	//总结     
	//浅拷贝  是简单的赋值拷贝操作
	//深拷贝  是在堆区重新申请空间,进行拷贝操作

	//如果属性有在堆区开辟的    一定要自己提供拷贝构造函数  防止浅拷贝带来的问题
	system("pause");

	return 0;

}