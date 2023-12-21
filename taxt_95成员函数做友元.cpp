# include<iostream>
using namespace std;

//成员函数做友元
class Building9501;

class GoodGay9501
{

public:

	GoodGay9501();

	void visit();  //让visit函数可以访问Building中私有成员
	void visit2();  //让visit2函数不可以访问Building中私有成员

	Building9501* building9501;
};

class Building9501
{

	//告诉编译器    GoodGay类中的visit成员函数  是Building类中的好朋友   可以访问私有内容
	friend void GoodGay9501::visit();  //这个是重点   假如想访问visit2中的内容的话   就重新给与权限就可以了

public:

	Building9501();

public:

	string m_SittingRoom;  //客厅

private:

	string m_BenRoom;  //卧室

};

Building9501::Building9501()
{

	m_SittingRoom = "客厅";
	m_BenRoom = "卧室";

}

GoodGay9501::GoodGay9501()
{

	building9501 = new Building9501;

}

void GoodGay9501::visit()
{
	cout << "visit 函数正在访问:  " << building9501->m_SittingRoom << endl;
	cout << "visit 函数正在访问:  " << building9501->m_BenRoom << endl;

}

void GoodGay9501::visit2()
{

	cout << "visit2 函数正在访问:  " << building9501->m_SittingRoom << endl;

	//cout << "visit2 函数正在访问:  " << building9501->m_BenRoom << endl;

}

void test9501()
{

	GoodGay9501 gg;
	gg.visit();
	gg.visit2();
}
int main95() {


	test9501();

	system("pause");

	return 0;

}