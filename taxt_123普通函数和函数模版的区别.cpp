#pragma once            //��ֹͷ�ļ��ظ�����
# include<iostream>     //�������������ͷ�ļ�
using namespace std;	//ʹ�ñ�׼�����ռ�
#include<string>


//1.��ͨ�������ÿ��Է�����ʽ����ת��
//2.����ģ��  ���Զ������Ƶ�,�����Է�����ʽ����ת��
//3.����ģ��  ����ʾָ������,���Է�����ʽ����ת��

int myAdd01(int a, int b)
{

	return a + b;

}

template<class T>
T myAdd02(T a, T b)
{

	return a + b;
}

void test12301()
{

	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd01(a, c) << endl;

	//�Զ������Ƶ�   ���ᷢ����ʽ����ת��
	//cout << myAdd02(a, c) << endl;  

	//��ʾָ������   �ᷢ����ʽ����ת��
	cout << myAdd02<int>(a, c) << endl;  
	
	//����ʹ����ʾָ�����͵ķ�ʽ,���ú���ģ��,��Ϊ�����Լ�ȷ��ͨ������T

}
int main123() {

	test12301();


	system("pause");

	return 0;

}