# include<iostream>
using namespace std;

//�������캯���ĵ���ʱ��


class Person333
{
public:
	Person333()
	{
		cout << "Person333 Ĭ�Ϲ��캯���ĵ���" << endl;
	}
	Person333(int age)
	{
		cout << "Person333 �вι��캯���ĵ���" << endl;
		m_age = age;
	}

	Person333(const Person333 & p)
	{
		cout << "Person333 �������캯���ĵ���" << endl;
		m_age = p.m_age;

	}

	~Person333()
	{
		cout << "Person333 �����캯���ĵ���" << endl;
	}

	int m_age;
};


//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���

void test33301()
{
	Person333 p1(20);
	Person333 p2(p1);

	cout << "p2������Ϊ:  " << p2.m_age << endl;
}
//2.ֵ���ݵķ�ʽ������������ֵ

void dowork(Person333 p)
{


}

void test33302()
{
	Person333 p;
	dowork(p);
}
//3.��ֵ��ʽ���ؾֲ�����

Person333 dowork2()
{

	Person333 p1;
	
	cout << (int*)&p1<< endl;
	//return p1;
	return Person333(p1);
	//����ͽ̳��ϲ�һ��   ��Ϊvs2022����汾�����Ż� ���Ե����˿������������캯���ĵ���
}

void test33303()
{
	Person333 p = dowork2();
	
	cout << (int*)&p << endl;
}

int main82() {


	//test33301();
	//test33302();
	test33303();

	system("pause");

	return 0;

}