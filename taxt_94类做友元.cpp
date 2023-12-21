# include<iostream>
using namespace std;


//类做友元
class Building;


class GoodGay
{

public:
	GoodGay();

	void visit();  //参观函数  访问Building中的属性
	Building* building;

};

class Building
{
	
	//告诉编译器,GoodGay类是Building类的好朋友, 可以发访问到Buliding类中的私有成员
	friend class GoodGay;

	
public:

	Building();    


public:

	string m_SittingRoom;  //客厅

private:

	string m_BedRoom;  //卧室

};

//类外写成员函数

Building::Building()
{

	m_SittingRoom = "客厅";

	m_BedRoom = "卧室";

}

GoodGay::GoodGay()
{

	//创建建筑物对象

	building = new	Building;    //相当于在堆区创建一个对象

}


void GoodGay::visit()
{

	cout << "好基友类正在访问:  " << building->m_SittingRoom << endl;
	cout << "好基友类正在访问:  " << building->m_BedRoom << endl;


}


void test9401()
{

	GoodGay gg;

	gg.visit();


}
int main94() {

	test9401();


	system("pause");

	return 0;

}