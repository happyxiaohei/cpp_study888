# include<iostream>
using namespace std;
#include<string>

//�������Ϊ���Ա

//�ֻ���

class Phone
{

	Phone(string p)
	{

		m_PName = p;
	}

public:

	//�ֻ�Ʒ��
	string m_PName;
};

//����

class Person
{

public:

	//Person(string name, string pName):m_name(name) , m_Phone(pName)
	//{


	//}

	Person(string name, string pName) :m_name(name), m_Phone(pName)
	{

	}

	//����
	string m_name;
	//�ֻ�
	Phone m_Phone;
};


int main() {


	system("pause");

	return 0;

}





