
# include<iostream>
#include<string.h>

using namespace std;
//��Ա��������˽��
//1.�����Լ����ƶ�дȨ��
//2.����д���Լ��������Ч��

class person
{
public:
	//��������

	void steName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}

	////��ȡ����
	//int getage()
	//{
	//	return m_age;
	//}

	int getage()
	{
		
		return m_age;
	}

private :

	string m_Name; //����   �ɶ���д

	int m_age = 12;  //����   ֻ����д


	string m_Idol;  //ż��  ֻд
};

int main() {


	person p1;
	//��������
	p1.steName("����");
	//��ȡ����
	cout << "  ����  : " <<p1.getName()<< endl;


	//��������
	//p1.gatAge(20);
	//p1.m_Age = 20;
	
	//��ȡ����

	//cout << "  ����  : " << p1.getage() << endl;
	cout << "����Ϊ:" << p1.getage() << endl;

	system("pause");

	return 0;

}



