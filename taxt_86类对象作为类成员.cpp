# include<iostream>
using namespace std;
#include<string>

//�������Ϊ���Ա

//�ֻ���



class Phone
{
public:

	Phone(string pName)//clone(string name)
	{

		cout << "phone�Ĺ��캯������" << endl;
		m_PName = pName;

	}

	~Phone()
	{

		cout << "phone��������������" << endl;
	}

	//Ʒ��
	string m_PName;

};

//����



class Person8601    //֮ǰ�����ԭ������Ϊ������    ���ĺ�Ͳ��ᱨ����
{
public:


	   //Phone m_Phone = pName   ��ʽת����
	Person8601(string name, string pName) :m_name(name), m_Phone(pName)
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	~Person8601() 
	{
		cout << "Person��������������" << endl;
	}


	//����
	string m_name;
	//�ֻ�
	Phone m_Phone;

};

//�������������Ϊ�����Ա,  ���ǳƸó�ԱΪ�����Ա
// ����ʱ���ȹ��������,�ٹ�������    
// ������˳���빹���෴




void test8601()
{


	Person8601 p1("����", "��Ϊ");
	cout << "����Ϊ:" << p1.m_name << endl;
	cout << "�ֻ�Ϊ:" << p1.m_Phone.m_PName << endl;

}

int main86() {

	test8601();
	system("pause");

	return 0;

}





