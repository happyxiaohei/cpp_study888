#pragma once
#include<iostream>
using namespace std;
#include"taxt_79���Բ��ͷ�ļ�point.h"


class Circle
{

public:

	//���ð뾶
	void strR(int r);

	//��ȡ�뾶
	int  getR();


	//����Բ��
	void setCenter(point center);

	//��ȡԲ��
	point  getCenter();

private:

	int m_R;  //�뾶


	//�����п�������һ����  ��Ϊ�����еĳ�Ա
	point m_Center;  //Բ��
};