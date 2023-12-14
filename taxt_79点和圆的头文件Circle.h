#pragma once
#include<iostream>
using namespace std;
#include"taxt_79点和圆的头文件point.h"


class Circle
{

public:

	//设置半径
	void strR(int r);

	//获取半径
	int  getR();


	//设置圆心
	void setCenter(point center);

	//获取圆心
	point  getCenter();

private:

	int m_R;  //半径


	//在类中可以让另一个类  作为本来中的成员
	point m_Center;  //圆心
};