#pragma once            //��ֹͷ�ļ��ظ�����
# include<iostream>     //�������������ͷ�ļ�
using namespace std;	//ʹ�ñ�׼�����ռ�
#include<string>

template<class T> //typename�����滻��class

void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;

}
//1.�Զ������Ƶ�,�����Ƶ���һ�µ���������T�ſ���ʹ��

void test12101()
{

	int a = 165;
	int b = 20;
	char c = 'c';

	mySwap(a, b);
	//mySwap(a, c);   //����д���Ǵ����   �Ƶ�����һ�µ�T����

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
//2.ģ�����Ҫȷ������T����������,�ſ���ʹ��

template<class T>
void func()
{
	cout << "func  ����" << endl;

}

void test12102()
{

	func<int >();
}

int main121() {

	test12101();

	test12102();
	

	system("pause");

	return 0;

}