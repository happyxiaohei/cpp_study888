# include<iostream>
using namespace std;
#include<fstream>

//�������ļ�  д�ļ�

class Person118
{

public:

	char m_Name[64];  //����

	int m_Age;  //����
};

void test11801()
{

	//1.����ͷ�ļ�

	//2.����������
	ofstream ofs("taxt_118 person118.txt", ios::out | ios::binary);   //�����ʽҲ���Դ��ļ�   �ڶ����������Ժϲ�

	//3.���ļ�
	//ofs.open("person.txt", ios::out|ios::binary);


	//4.д�ļ�
	Person118 p = { "����",18 };
	ofs.write((const char*)&p, sizeof(Person118));
	//5.�ر��ļ�
	ofs.close();
}

int main119() {

	test11801();
	//�ܽ�: �ļ�������������ͨ��write����,�Զ����Ʒ�ʽд����

	system("pause");

	return 0;

}