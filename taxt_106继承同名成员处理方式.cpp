# include<iostream>
using namespace std;


//�̳���ͬ����Ա����

class Base106
{

public:

	Base106()
	{

		 m_A = 100;
	}

	void func()
	{

		cout << "Base - func()����" << endl;
	}

	void func(int a)
	{

		cout << "Base - func(int a )����" << endl;
	}
	int m_A;
};

class Son106:public Base106
{

public:

	Son106()
	{

		m_A = 200;
	}

	void func()
	{

		cout << "Son106 - func()����" << endl;
	}



};

void test10601()
{

	Son106 s;

	cout << " Son  �� m_A = " << s.m_A << endl;

	//���ͨ���������  ���ʵ�������ͬ����Ա  ��Ҫ��������
	cout << " Base  �� m_A = " << s.Base106::m_A << endl;

}

void test10602()
{

	Son106 s;

	s.func();  //ֱ�ӵ���   �����������е�ͬ����Ա

	//��������г��ֺ͸���ͬ���ĳ�Ա����   �����ͬ����Ա�����ص�����ͬ����Ա����



	s.Base106::func();  //
	
	//�������ʵ������б����ص�ͬ����Ա����  ��Ҫ��������
	
	s.Base106::func(100);  //


}
int main106() {

	//test10601();

	test10602();


	//�ܽ�,
	//����������ֱ�ӷ��ʵ������е�ͬ����Ա
	
	//����������������Է��ʵ�����ͬ����Ա
	
	//�������븸��ӵ��ͬ���ĳ�Ա����,��������ظ�����ͬ����Ա����,����������Է��ʵ�������ͬ������

	system("pause");

	return 0;

}