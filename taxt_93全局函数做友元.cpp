# include<iostream>
using namespace std;
#include<string>

//建筑类

class Building93
{
	//全局函数做 友元,需要加上friend在类里声明
	//下面是友元的关键字   friend    弗兰德   

	//goodGay全局函数是Buliding 的好朋友    可以访问Buliding中的私有成员
	friend void goodGay(Building93& building93);

public:

	Building93()
	{

		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}

public:

	string m_SittingRoom;

private:
	
	string m_BedRoom;
};

//全局函数

void goodGay(Building93& building93)
{

	cout << "好基友全局函数正在访问 :  " << building93.m_SittingRoom << endl;
	
	cout << "好基友全局函数正在访问 :  " << building93.m_BedRoom << endl;

}

void test9301()
{

	Building93 building;
	goodGay(building);
}
int main() {

	test9301();
	

	system("pause");

	return 0;

}