# include<iostream>
using namespace std;

//��ֵ���������

class Person9901
{

public:
	Person9901(int age)
	{
		m_Age = new int(age);
	}

	~Person9901()
	{

		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}

	//����  =  ��ֵ�����

	Person9901& operator=(Person9901& p)
	{

		//���������ṩǳ����

		//m_Age = p.m_Age;


		//Ӧ�����ж��Ƿ��������ڶ���,�����,���ͷŸɾ�,Ȼ�������

		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;

		}

		//��һ����������Ĳ���
		m_Age = new int(*p.m_Age);

		//���ض�����

		return *this;
	}

	int* m_Age;
};

void test9901()
{
	Person9901 p1(18);
	Person9901 p2(20);
	Person9901 p3(30);

	p3 = p2 = p1;

	p2 = p1;   //���Ǹ�ֵ����

	cout <<"p1������Ϊ:  " << *p1.m_Age << endl;
	cout <<"p2������Ϊ:  " << *p2.m_Age << endl;
	cout <<"p3������Ϊ:  " << *p3.m_Age << endl;

}
int main99() {

	test9901();

	//int a = 10;
	//int b = 20;
	//int c = 30;
	//c = b = a;

	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "c = " << c << endl;



	system("pause");

	return 0;

}