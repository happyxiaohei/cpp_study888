#pragma once            //��ֹͷ�ļ��ظ�����
# include<iostream>     //�������������ͷ�ļ�
using namespace std;	//ʹ�ñ�׼�����ռ�
#include<string>


template<class NameType, class AgeType = int>  //����������ǲ����б�
class Person12701
{

public:
	Person12701(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson12701()
	{

		cout << "name:  " << this->m_Name << "  age:  " << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};



//��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
void test12701()
{

	//Person12701 p1("�����", 555);  //���Ǵ����   �޷����Զ������Ƶ�
	Person12701 <string, int> p1("�����", 555);
	p1.showPerson12701();
}
// 
//��ģ����ģ������б��п�����Ĭ�ϲ���

void test12702()
{

	//Person12701 p1("�����", 555);  //���Ǵ����   �޷����Զ������Ƶ�
	Person12701 <string> p2("��˽�", 8888);
	p2.showPerson12701();
}

int main127() {

	test12701();
	test12702();

	system("pause");

	return 0;

}