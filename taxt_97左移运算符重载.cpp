# include<iostream>
using namespace std;

//�������������

class Person9701
{

public:

	Person9701(int a, int b)
	{
		m_A = a;
		m_B = b;


	}
	 friend ostream& operator <<(ostream& cout, Person9701& p);
private:


	//���ó�Ա�������� ���������

	//�������ó�Ա��������<<�����,��Ϊ�޷�Ϊʵ��cout�����    ֻ������ȫ�ֺ����������������

	
	//void operator<<(cout)
	//{



	//}
	int m_A;
	int m_B;
};


//ֻ������ȫ�ֺ����������������
ostream & operator <<(ostream &cout,Person9701 &p)    //������  operator<<(cout,p )  ��cout<<p



{

	cout << "m_A = " << p.m_A << "  m_B = " << p.m_B;  
	return cout;

}

void test9701()
{

	Person9701 p(10,10);

	//p.m_A = 10;
	//p.m_B = 10;


	cout << p<<"hello world" << endl;

}


//�ܽ�  ������������������Ԫ����ʵ������Զ�����������
int main97() {

	test9701();


	system("pause");

	return 0;

}