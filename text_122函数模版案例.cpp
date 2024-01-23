#pragma once            //��ֹͷ�ļ��ظ�����
# include<iostream>     //�������������ͷ�ļ�
using namespace std;	//ʹ�ñ�׼�����ռ�
#include<string>


//ʵ��ͨ��  �������������ĺ���
//����  �Ӵ�С
//�㷨  ѡ��
//���� char  ����. int ����
template<class T>
void mySwap(T&a,T&b)
{

	T temp = a;
	a = b;
	b = temp;
}
template<class T >
void mySort(T arr[], int len)
{

	for (int i = 0; i < len; i++)
	{

		int max = i;  //�϶����ֵ���±�

		for (int j = i + 1; j < len; j++)
		{
			//�϶������ֵ  �ȱ�����������ҪС,˵�� J�±��Ԫ�ز������������ֵ

			if (arr[max] < arr[j])
			{

				max = j;
			}
		}

		if (max != i)
		{
			//����max��i��Ԫ��
			mySwap(arr[i], arr[max]);
		}
	}
}
//�ṩ��ӡ����ģ��

template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{

		cout << arr[i] << "  ";

	}

	cout << endl;
}
void test12201()
{
	//����char����
	char charArr[] = "bdacfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);


	
}

void test12202()
{

	int intArr[] = { 1,7,5,9,8,4,6,3,0,2,10,14,15 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);

	printArray(intArr, num);

}


int main122() {

	test12201();
	
	test12202();
	

	system("pause");

	return 0;

}