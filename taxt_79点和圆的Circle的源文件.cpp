#include"taxt_79点和圆的头文件Circle.h"




//设置半径
void Circle::strR(int r)
{
	m_R = r;
}
//获取半径
int  Circle::getR()
{
	return m_R;
}

//设置圆心
void Circle::setCenter(point center)
{
	m_Center = center;
}
//获取圆心
point  Circle::getCenter()
{
	return m_Center;
}
