# include<iostream>
using namespace std;
#include<string>


	//1.���Ӣ�۽ṹ��
struct Hero
{
	//����
	string name;
	//����
	int age;
	//�Ա�
	string sex;
};

void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{

		for (int j = 0; j < len - i - 1; j++)
		{
			//�ж�  ���j�±��Ԫ���������j+1�±��Ԫ�ص�����,��������Ԫ��
			if (heroArray[j].age > heroArray[j + 1].age)  //������ֱ���ж�����   ����������������Ԫ�ص�����   ����ֱ����������Ԫ�ؾͿ�����
			{

				struct Hero temp = heroArray[j];
				heroArray[j ] = heroArray[j+1];
				heroArray[j + 1] = temp;

			}
		}
	}

}

//��ӡ����������е���Ϣ

void pringtHero(struct Hero heroArray[], int len)
{

	for (int i = 0; i < len; i++)
	{
		cout << "����:  " << heroArray[i].name << "���� :  " << heroArray[i].age << "�Ա� :  " << heroArray[i].sex << endl;
	}

}

int main() {



	//2.����һ��������5������
	struct Hero heroArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	//����һ���ܷ��������

	for (int i = 0; i < len; i++)
	{
		cout << "����:  " << heroArray[i].name << "���� :  " << heroArray[i].age << "�Ա� :  " << heroArray[i].sex << endl;
	}

	cout << "\n" << endl;
	//3.�������������,�������������������

	bubbleSort(heroArray, len);
	//4.�����������ӡ���

	pringtHero(heroArray, len);






















	system("pause");

	return 0;

}