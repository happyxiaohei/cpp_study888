
#include<iostream>
#include<string.h>

using namespace std;
class Person
{
public:
	void setname(string name)
	{
		m_name = name;
	}
	string getname()
	{
		return m_name;
	}

	int getage()
	{
		
		return m_age;
	}

	void setlover(string lover)
	{
		m_lover = lover;
	}
private:
	//����   �ɶ���д
	string m_name;
	//����   ֻ��
	int m_age = 50;
	//����   ֻд
	string m_lover;
};
int main6546546()
{
	Person p;
	//p.m_name = "sd";//˽��Ȩ�ޣ����ɷ���

	p.setname("carbon");
	cout << "����Ϊ��" << p.getname() << endl;

	//����
	//p.getage = 88;//�д��󣬲����޸�����
	cout << "����Ϊ:" << p.getage() << endl;

	//����   ֻд
	p.setlover("hello");//��������
	system("pause");
	return 0;
}
