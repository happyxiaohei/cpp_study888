#pragma once            //��ֹͷ�ļ��ظ�����
# include<iostream>     //�������������ͷ�ļ�
using namespace std;	//ʹ�ñ�׼�����ռ�
#include<string>


//1.�������ģ�����ͨ���������Ե���,���ȵ�����ͨ����
//2.����ͨ����ģ������б�  ǿ�Ƶ��ú���ģ��
//3.����ģ����Է�������
//4.�������ģ����Բ������õ�ƥ��,���ȵ��ú���ģ��

void myPrint12401(int a, int b)
{

	cout << "������ͨ����" << endl;

}

template<class T>
void myPrint12401(T a, T b)
{

	cout << "����ģ��" << endl;

}

template<class T>
void myPrint12401(T a, T b,T c)
{

	cout << "��������ģ��" << endl;

}
void test12401()
{

	int a = 10;
	int b = 20;

	//myPrint12401(a, b);

	//ͨ����ģ������б�,ǿ�Ƶ��ú���ģ��
	//myPrint12401<>(a, b);

	//��������غ���ģ��ĵ���
	//myPrint12401(a, b, 100);


	//�������ģ����Բ������õ�ƥ��,���ȵ��ú���ģ��
	char c1 = 'a';
	char c2 = 'b';
	myPrint12401(c1, c2);

	//�����ṩ�˺���ģ��,��þͲ�Ҫ�ṩ��ͨ����,�������׳��ֶ�����,���Ǳ���

}
int main() {


	test12401();

	system("pause");

	return 0;

}