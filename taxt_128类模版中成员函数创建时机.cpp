#pragma once            //��ֹͷ�ļ��ظ�����
# include<iostream>     //�������������ͷ�ļ�
using namespace std;	//ʹ�ñ�׼�����ռ�
#include<string>

class person12801
{

public:

	void showPerson1()
	{

		cout << "Person1 show" << endl;
	}
};

class person12802
{

public:

	void showPerson2()
	{

		cout << "Person2 show" << endl;
	}
};

template<class T>
class MyClass
{

public:

	T obj;

	//;��ģ���еĳ�Ա����

	void func1()
	{

		obj.showPerson1();

	}

	void func2()
	{

		obj.showPerson2();

	}
};

void test12801()
{

	MyClass<person12802>m;
	//m.func1();
	m.func2();


}

//�ܽ�,��ģ���еĳ�Ա����������һ��ʼ�ʹ�����,�ڵ���ʱ��ȥ����
int main128() {


	test12801();

	system("pause");

	return 0;

}