# include<iostream>
using namespace std;
#include<string>  //����ַ���ͷ�ļ�

//���Ӣ�۽ṹ��

struct Yingxiong 
{
	string name;//����

	int age;//����

	string xingbie;//�Ա�


};

void paixuhou(struct Yingxiong YX[], int len)   // ��������ĺ���
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (YX[j].age > YX[j + 1].age)
			{

				//int temp = YX[j].age;
				//YX[j ].age = YX[j +1].age;
				//YX[j + 1].age = temp;        //Ҳ��������д  ������һ����

				struct Yingxiong temp1 = YX[j];
				YX[j] = YX[j + 1];
				YX[j + 1] = temp1;

			}


		}
	}


}


//������ӡ������Ϣ�ĺ���

void dayinsuoyou(struct Yingxiong YX[], int len)
{



	for (int i = 0; i < len; i++)
	{
		cout << "  ����:  " << YX[i].name << "  ����  :  " << YX[i].age << "  �Ա�  :  " << YX[i].xingbie << "\n" << endl;
	}






}
int main60() {


	//���ṹ�帳ֵ

	Yingxiong YX[]
	{
		{"����",22,"��"},
		{"����",545,"��"},
		{"�ŷ�",4120,"��"},
		{"����",4,"��"},
		{"����",13129,"Ů"},
		{"����",22,"��"},
		{"����",545,"��"},
		{"�ŷ�",4120,"��"},
		{"����",4,"��"},
		{"����",13129,"Ů"},
		{"����",22,"��"},
		{"����",545,"��"},
		{"�ŷ�",4120,"��"},
		{"����",4,"��"},
		{"����",13129,"Ů"},
	};

	//����һ���Ƿ����������

	int len = sizeof(YX) / sizeof(YX[0]);

	for (int i = 0; i < len; i++)
	{
		cout << "����:  " << YX[i].name << "����  :  " << YX[i].age << "�Ա�  :  " << YX[i].xingbie << "" << endl;
	}

	cout << "δ����ǰ�Ľ�� \n" << endl;

	 

	paixuhou(YX, len);   //��������ĺ���


	dayinsuoyou(YX, len);   //��ʼ��ӡ������������Ϣ

















	system("pause");

	return 0;

}