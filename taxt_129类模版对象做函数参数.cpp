#pragma once            //��ֹͷ�ļ��ظ�����
# include<iostream>     //�������������ͷ�ļ�
using namespace std;	//ʹ�ñ�׼�����ռ�
#include<string>

template<class T1,class T2>

class Persong12901
{

public:

	Persong12901(T1 name, T2 age)
	{

		this->m_Name = name;
		this->m_Age = age;

	}

	void showPersong12901()
	{

		cout << "����:  " << this->m_Name << "  ����:  " << this->m_Age << endl;

	}

	T1 m_Name;
	T2 m_Age;
};
//1.ָ����������

void printPersong1(Persong12901<string, int>& p)
{

	p.showPersong12901();
}
void test12901()
{

	Persong12901<string, int>p("�����", 5555);
	printPersong1(p);

}

//2.����ģ�滯

//3.������ģ�滯
int main() {

	test12901();


	system("pause");

	return 0;

}