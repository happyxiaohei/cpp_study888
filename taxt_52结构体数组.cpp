# include<iostream>
using namespace std;
#include<string>  //�ַ���ͷ�ļ�

//�ṹ������

//1. ����һ���ṹ��

struct Student
{
	//����
	string name;
	//����
	int  age;
	//����
	int score;

};





int main52() {



//2.����һ���ṹ������
	struct Student strArray[3] =
	{
		{"����",18,100},
		{"����",28,88},
		{"����",38,66}
	};


//3.���ṹ�������е�Ԫ�ظ�ֵ

	strArray[2].name = "����";
	strArray[2].age = 88;
	strArray[2].score = 60;

	//���д��������ǿ����޸�������Ԫ�ص�ֵ,   
	//���洴��������Ԫ�ؿ������Ϊ��ʼ��������Ԫ�ص�ֵ





//4.�����ṹ������

	for (int i = 0; i < 3; i++)
	{
		//cout << "���� : " << strArray[i].name << "���� :" << strArray[i].age << "���� :" << strArray[i].score << endl;
		
		//����ķ�ʽҲ�����������
		cout << " ���� : " << strArray[i].name 
			<< " ���� : " << strArray[i].age 
			<< " ���� : " << strArray[i].score << endl;
	}




















	system("pause");

	return 0;

}