# include<iostream>
using namespace std;

#include"taxt_79点和圆的头文件point.h"
#include"taxt_79点和圆的头文件Circle.h"
//点和圆关系案例

//点类
//class point
//{
//public:
//	//设置x
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//获取x	
//	
//	int getX()
//	{
//		return m_X;
//	}
//	//设置x
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//获取x	
//
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//
//	int m_Y;
//
//};
//
////圆类
//class Circle
//{
//
//public:
//
//	//设置半径
//	void strR(int r)
//	{
//		m_R = r;
//	}
//	//获取半径
//	int  getR()
//	{
//		return m_R;
//	}
//
//	//设置圆心
//	void setCenter(point center)
//	{
//		m_Center = center;
//	}
//	//获取圆心
//	point  getCenter()
//	{
//		return m_Center;
//	}
//private:
//
//	int m_R;  //半径
//
//
//	//在类中可以让另一个类  作为本来中的成员
//	point m_Center;  //圆心
//};
//
//判断点和圆的函数

void isInCircle(Circle& c, point& p)
{

	//计算两点之间距离  平方
	int distance = 
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//计算半径的平方
	int rDistance = c.getR() * c.getR();
	//判断关系
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}
int main() {

	//创建一个圆
	Circle c;
	c.strR(10);   //设置圆的半径
	point center;   //这里是创建一个圆心 

		//这里初始化的位置不能放错  假如放前面会导致设置的圆心坐标没有用处
	
		//c.setCenter(center);
	
	center.setX(10);	//设置圆心的坐标
	center.setY(0);		//设置圆心的坐标
	c.setCenter(center);  //设置圆的圆心   因为圆心又创建了一个类名  所以参数里要放圆心的类名  

	//创建点
	
	point p;  //这里是设置一个点的位置
	p.setX(10);
	p.setY(10);
	//判断关系
	
	isInCircle(c,p);  //这里判断关系的函数只需要输入上面创建的圆类的名称和点的名称就可以了




	//案例学习的核心是     
	//1.在类中可以让另一个类来作为本来这个类中的成员   属于可以嵌套类
	//2.如何把不同的类拆分成不同的文件中  流程是 创建头文件,创建源文件  然后include一下就可以了
	system("pause");

	return 0;

}