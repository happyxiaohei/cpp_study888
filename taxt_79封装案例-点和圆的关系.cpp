# include<iostream>
using namespace std;

#include"taxt_79���Բ��ͷ�ļ�point.h"
#include"taxt_79���Բ��ͷ�ļ�Circle.h"
//���Բ��ϵ����

//����
//class point
//{
//public:
//	//����x
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//��ȡx	
//	
//	int getX()
//	{
//		return m_X;
//	}
//	//����x
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//��ȡx	
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
////Բ��
//class Circle
//{
//
//public:
//
//	//���ð뾶
//	void strR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int  getR()
//	{
//		return m_R;
//	}
//
//	//����Բ��
//	void setCenter(point center)
//	{
//		m_Center = center;
//	}
//	//��ȡԲ��
//	point  getCenter()
//	{
//		return m_Center;
//	}
//private:
//
//	int m_R;  //�뾶
//
//
//	//�����п�������һ����  ��Ϊ�����еĳ�Ա
//	point m_Center;  //Բ��
//};
//
//�жϵ��Բ�ĺ���

void isInCircle(Circle& c, point& p)
{

	//��������֮�����  ƽ��
	int distance = 
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//����뾶��ƽ��
	int rDistance = c.getR() * c.getR();
	//�жϹ�ϵ
	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}
int main() {

	//����һ��Բ
	Circle c;
	c.strR(10);   //����Բ�İ뾶
	point center;   //�����Ǵ���һ��Բ�� 

		//�����ʼ����λ�ò��ܷŴ�  �����ǰ��ᵼ�����õ�Բ������û���ô�
	
		//c.setCenter(center);
	
	center.setX(10);	//����Բ�ĵ�����
	center.setY(0);		//����Բ�ĵ�����
	c.setCenter(center);  //����Բ��Բ��   ��ΪԲ���ִ�����һ������  ���Բ�����Ҫ��Բ�ĵ�����  

	//������
	
	point p;  //����������һ�����λ��
	p.setX(10);
	p.setY(10);
	//�жϹ�ϵ
	
	isInCircle(c,p);  //�����жϹ�ϵ�ĺ���ֻ��Ҫ�������洴����Բ������ƺ͵�����ƾͿ�����




	//����ѧϰ�ĺ�����     
	//1.�����п�������һ��������Ϊ����������еĳ�Ա   ���ڿ���Ƕ����
	//2.��ΰѲ�ͬ�����ֳɲ�ͬ���ļ���  ������ ����ͷ�ļ�,����Դ�ļ�  Ȼ��includeһ�¾Ϳ�����
	system("pause");

	return 0;

}