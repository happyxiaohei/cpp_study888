# include<iostream>
using namespace std;

//��������������ع�

class MyPrint10101
{

public:

	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};

//�����ĺ�������

void MyPrint10102(string text)
{

	cout << text << endl;

}


void test10101()
{

	MyPrint10101 myprint;
	myprint("hello world!");  //����ʹ�������ǳ������ں�������,��˳�Ϊ�º���
	MyPrint10102("hello world");

}

//�º����ǳ����,���û�й̶���д��

class MyAdd
{

public:

	int operator()(int num1, int num2)
	{

		return num1 + num2;


	}
};

void test10102()
{

	MyAdd myadd;
	int ret = myadd(50, 100);
	cout << "ret =  " << ret << endl;

	//���������������
	//һ�����ͼ�һ��С����   ��������������    �����С�����൱�ڴ�ֵ��Myadd��
	cout << "�������������ֵΪ:  " << MyAdd()(100, 100) << endl;
}
int main101() {


	//test10101();

	test10102();

	system("pause");

	return 0;

}