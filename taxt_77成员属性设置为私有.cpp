#define _CRT_SECURE_NO_WARNINGS 1 
# include<iostream>
#include<string.h>

using namespace std;

//��Ա��������˽��
//1.�����Լ����ƶ�дȨ��
//2.����д���Լ��������Ч��
class Person
{
public:

	void setName(string name)
	{
		m_Name = name;

	}

	string getName()
	{

		return m_Name;
	}

	//��ȡ����
	int getAge()
	{
		return m_Age;
	}
	//��������(0~150)
	void setAge(int age)
	{
		if (age < 0 || age >150)
		{
			cout << "����"<<age<<"��������, ��ֵʧ��" << endl;
			return;
		}
		m_Age = age;
	}

	//����ż��
	void setIdol(string idol)
	{
		m_Idol = idol;

	}
private:

	string m_Name;  //����    �ɶ���д

	int m_Age = 18;  //����   ֻ��   Ҳ����д(���������0-150֮��)

	string m_Idol;  //ż��  ֻд
};

int main77()
{
	Person p;

	//��������

	p.setName("����");

	cout << "����:  " << p.getName() << endl;

	//��������      ��˽��Ȩ���� �����ǲ������޸����ڵ����ݵ�
	p.setAge(180);
	//p.m_Age = 20;
	cout << "����Ϊ:  " << p.getAge() << endl;

	//ż������
	p.setIdol("С��"); //ֻд

	//cout << "ż��Ϊ:  " << p.getIdol() << endl;  //ֻд״̬   �����ʲ���

	system("pause");
	return 0;
}























