# include<iostream>
using namespace std;


//��̳��﷨

class Base10801
{

public:

	Base10801()
	{

		m_A = 100;
	}
	int m_A;

};

class Base10802
{

public:

	Base10802()
	{

		m_A = 200;
	}
	int m_A;
 };


//����  ��Ҫ�̳�  Base1��Base2

//�﷨   class ���� : �̳з�ʽ ���� 1 , �̳з�ʽ ���� 2  
class Son108:public Base10801,public Base10802
{
public:

	Son108()
	{
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;

};

void test10801()
{
	Son108 s;
	
	cout << "sizeof son = " << sizeof(s) << endl;

	//�������г���ͬ����Ա,��Ҫ������������
	cout << "m_A = " << s.Base10801::m_A << endl;
	cout << "m_A = " << s.Base10802::m_A << endl;

}
int main() {

	test10801();


	system("pause");

	return 0;

}