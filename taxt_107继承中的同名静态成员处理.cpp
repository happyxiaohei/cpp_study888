# include<iostream>
using namespace std;

//�̳��е�ͬ����̬��Ա����

class Base107
{

public:

	static int m_A;

	static void func()
	{
		cout << "Base  -  static void func() " << endl;
	}
	static void func(int a )
	{
		cout << "Son  -  static void func(int a ) " << endl;
	}
};

int Base107::m_A = 100;

class Son107:public Base107
{

public:

	static int m_A;

	static void func()
	{
		cout << "Son  -  static void func() " << endl;
	}
	static void func(int a)
	{
		cout << "Son  -  static void func(int a ) " << endl;
	}

};

int Son107::m_A = 200;


//ͬ����̬��Ա����

void test10701()
{

	//1.ͨ���������
	cout << "ͨ���������:  " << endl;

	Son107 s;

	cout << "Son  �� m_A = " << s.m_A << endl;
	cout << "Base �� m_A = " << s.Base107::m_A << endl;

	//2.ͨ����������

	cout << "ͨ����������:  " << endl;

	cout << "Son  �� m_A = " << Son107::m_A << endl;

	//��һ��::����ͨ��������ʽ����  �ڶ���::������ʸ�����������
	cout << "Base �� m_A = " << Son107::Base107::m_A << endl;


}

//ͬ����̬��Ա����

void test10702()
{

	//1.ͨ���������

	cout << "ͨ���������" << endl;
	Son107 s;
	s.func();
	s.Base107::func();

	//2.ͨ����������

	cout << "ͨ����������" << endl;

	Son107::func();

	Son107::Base107::func();

	// ������ֺ͸���ͬ����̬��Ա����,Ҳ�����ظ���������ͬ����Ա����
	//�������ʸ����б�����ͬ����Ա,��Ҫ��������
	Son107::Base107::func(500);



}
int main107() {



	//test10701();
	test10702();


	system("pause");

	return 0;

}