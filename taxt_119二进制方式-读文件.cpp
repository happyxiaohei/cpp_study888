# include<iostream>
using namespace std;
#include<fstream>


class Person119
{

public:

	char m_Name[64];  //����

	int m_Age;  //����
};

//�������ļ�  ���ļ�

void test11901()
{

	//1.����ͷ�ļ�

//2.����������
	ifstream ifs("taxt_118 person118.txt", ios::in | ios::binary);

	//3.���ļ�  �ж��Ƿ�򿪳ɹ�
	// 
	//ifs.open("person.txt", ios::in|ios::binary);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��!" << endl;
		return;
	}

	//4.���ļ�


	Person119 p;

	ifs.read((char*)&p, sizeof(Person119));    //ͨ��read����,�Զ����Ʒ�ʽ������

	cout << "����:  "<<p.m_Name << endl;
	cout << "����:  "<<p.m_Age << endl;

	//5.�ر��ļ�
	ifs.close();

}

int main119() {

	test11901();


	system("pause");

	return 0;

}