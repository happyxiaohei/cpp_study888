# include<iostream>
using namespace std;


//���캯���ĵ��ù���
//1.����һ����,C++���������ÿ���඼���������������
//Ĭ�Ϲ���  (��ʵ��)
//��������  (��ʵ��)
//��������	(ֵ����)

//2.�������д���вι��캯��,�������Ͳ����ṩĬ�Ϲ���,������Ȼ���ṩ��������

//3.�������д�˿������캯��,�������Ͳ����ṩ������ͨ���캯����



class Penson444
{

public:

	//Penson444()
	//{
	//	cout << "Penson ��Ĭ�Ϲ��캯������" << endl;
	//}


	Penson444(int age)
	{
		m_age = age;

		cout << "Penson ���вι��캯������" << endl;
		
	}

	//Penson444(const Penson444 & p)
	//{
	//	m_age = p.m_age;

	//	cout << "Penson �Ŀ������캯������" << endl;
	//}

	~Penson444()
	{
		cout << "Penson ��������������" << endl;
	}

	int m_age;

};

//void text44401()
//{
//	Penson444 p1;
//	p1.m_age = 18;
//
//	Penson444 p2(p1);
//	cout << "p2������Ϊ:  " << p2.m_age << endl;
//
//	//�����д�������캯���Ļ�    �������������д
//
//}

void test44402()
{

	//Penson444 p;   ���û��дĬ�Ϲ��캯���Ļ�,ȥ����Ĭ�Ϲ��캯���Ļ��ͻ���ֱ���

	Penson444 p(28);

	Penson444 p2(p); 

	cout << "p2������Ϊ:  " << p2.m_age << endl;
}
int main83() {

	//text44401();

	test44402();


	system("pause");

	return 0;

}