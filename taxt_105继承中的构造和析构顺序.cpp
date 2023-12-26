# include<iostream>
using namespace std;

class Base105
{
public:

	Base105()
	{
		cout << "Base构造函数" << endl;
	}

	~Base105()
	{
		cout << "Base析构函数" << endl;
	}
};

class Son105 :public	Base105
{

public:

	Son105()
	{

		cout << "Son构造函数" << endl;
	}

	~Son105()
	{
		cout << "Son析构函数" << endl;
	}
};

void test10501()
{

	//Base105 b;

	//继承中的构造和析构如下
	//
	//先构造父类,再构造子类  ,析构的顺序与构造的顺序相反

	//继承中,先调用父类构造函数,再调用子类构造函数,析构顺序与构造相反
	Son105 s;


}
int main105() {


	test10501();

	system("pause");

	return 0;

}