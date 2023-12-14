#pragma once    //这是防止头文件重复包含
#include<iostream>
using namespace std;
class point
{
public:
	//设置x

	void setX(int x);

		//获取x	

		int getX();

	//设置x
	void setY(int y);

		//获取x	

		int getY();

private:
	int m_X;

	int m_Y;

};


