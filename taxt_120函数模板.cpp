#pragma once            //��ֹͷ�ļ��ظ�����
# include<iostream>     //�������������ͷ�ļ�
using namespace std;	//ʹ�ñ�׼�����ռ�
#include<string>


//template    ��������ģ��
//typename    ���������ķ�����һ����������,������class���
//  T         ͨ�õ���������,���ƿ����滻,ͨ��Ϊ��д��ĸ

//����ģ��

//�������ͽ�������

void swapInt12001(int& a, int& b)
{

	int temp = a;
	a = b;
	b = temp;

}

//�������������ͺ���

void swapDouble12001(double& a, double& b)
{

	double temp = a;
	a = b;
	b = temp;



}

//ģ�庯��

template<typename T>  //����һ��ģ��,���߱�������������н����ŵ�T��Ҫ����,T��һ��ͨ����������
void mySwap12001 (T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;

}

void test12001()
{
	int a = 10;
	int b = 20;

	//�����ַ�ʽʹ��ģ��
	//1.�Զ������Ƶ�

	//mySwap12001(a, b);

	//2.��ʾָ������
	
	mySwap12001<int>(a, b);
	
	
	//swapInt12001(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 45.1;
	double d = 66.6;
	mySwap12001<double>(c, d);

	//swapDouble12001(c, d);

	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
}
int main120() {

	test12001();


	system("pause");

	return 0;

}