#pragma once            //��ֹͷ�ļ��ظ�����
# include<iostream>     //�������������ͷ�ļ�
using namespace std;	//ʹ�ñ�׼�����ռ�
#include<string>

//��ģ��
template<class NameType ,class AgeType >
class Person12601
{

public:
	Person12601(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson12601()
	{

		cout << "name:  " << this->m_Name << "  age:  " << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};

void test12601()
{

	Person12601<string, int> p1("�����", 555);
	p1.showPerson12601();
}

//�ܽ�,��ģ��ͺ���ģ���﷨����,������ģ��template�������,�����Ϊ��ģ��
int main126() {

	test12601();
	


	system("pause");

	return 0;

}