#pragma once            //��ֹͷ�ļ��ظ�����
# include<iostream>     //�������������ͷ�ļ�
using namespace std;	//ʹ�ñ�׼�����ռ�
#include<string>


//ģ�沢�������ܵ�  ��Щ�ض���������  ��Ҫ�þ��廯��ʽ������ʵ��


class Person12501
{

public:

	Person12501(string name, int age)
	{

		this->m_Name = name;

		this->m_Age = age;

	}
	//����
	string m_Name;
	//����
	int m_Age;
};
//�Ա����������Ƿ���Ⱥ���

template<class T>
bool myCompare(T& a, T& b)
{

	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//���þ��廯��Person�İ汾ʵ�ִ���,���廯���ȵ���
template<> bool myCompare(Person12501& p1, Person12501& p2)
{

	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
	{

		return true;
	}
	else
	{

		return false;
	}
}

void test12501()
{

	int a = 10;
	int b = 20;

	bool ret = myCompare(a, b);

	if (ret)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;

	}
}

void test12502()
{

	Person12501 p1("Tom", 10);
	Person12501 p2("Tom", 10);

	bool ret = myCompare(p1, p2);

	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{

		cout << "p1 != p2" << endl;

	}
}

//�ܽ�   ���þ��廯��ģ��,���Խ���Զ������͵�ͨ�û�,'
//ѧϰģ�沢����Ϊ��дģ��,������STL�ܹ�����ϵͳ�ṩ��ģ��
int main125() {

	//est12501();
	test12502();

	system("pause");

	return 0;

}