# include<iostream>
using namespace std;
#include<string>
#include<ctime>


//��һ��   ������ʦ��ѧ���Ľṹ��


struct student  //����ѧ���ṹ��
{
	string sName;   //����
	
	int score;  //����
	
	int age; //����

};

struct tracher  //��ʦ�ṹ��
{
	string tName;
	
	struct student sarray[5];  //Ƕ��ѧ������

	//�������൱�ڴ�����һ����ʦ��ѧ���Ľṹ��


};


//��ʼ����ʦ��ѧ����ֵ
void akkcationSoace(struct tracher Tsarray[], int len)
{


	for (int i = 0; i < len; i++)
	{
		
		string seedname = "ABCDE";  //�൱�����һ�����ֵ�����

		Tsarray[i].tName = "������ʦ_";
		Tsarray[i].tName += seedname[i];

		//��ʼ��ѧ�������ָ�ֵ
		for (int j = 0; j < 5; j++)
		{
			Tsarray[i].sarray[j].sName = "ѧ��_";
			


			Tsarray[i].sarray[j].sName += seedname[i];

			//��ʼ�����丳ֵ

			//���һ�������
			int GNG =  20 + rand() % (28 - 20 +1)  ;

			Tsarray[i].sarray[j].age = GNG;

			//��ʼ��������ֵ
			int GNG2 =  30 + rand() % (100 - 30 +1);

			Tsarray[i].sarray[j].score = GNG2;

			//���︳ֵ������


			

		}

	}



}



//������ӡ������Ϣ�ĺ���

void pringInga(struct tracher Tsarry[3], int len)
{




	for (int i = 0; i < len; i++)

	{
		cout << "��ʦ����  :  " << Tsarry[i].tName << "\n" << endl;

		for (int j = 0; j < 5; j++)
		{

			cout << "\tѧ������  :  " << Tsarry[i].sarray[j].sName<<
			"\t  ѧ������  :  " << Tsarry[i].sarray[j].score <<
			 "\tѧ������  :  " << Tsarry[i].sarray[j].age << endl;

			/*cout << "\t  ѧ������  :  " << Tsarry[i].sarray[j].score << endl;*/
		}

	}




}

int main58() {
	//������������
	srand((unsigned int)time(NULL));
	
	//������ȥ�������ﴴ��������ʦ����


	//struct tracher Tsarray[3];
	tracher Tsarray[3];

	int len = sizeof(Tsarray) / sizeof(Tsarray[0]);
	


	akkcationSoace(Tsarray, len);    //������������������溯����ֵ������




	pringInga(Tsarray, len);    //���������������







	system("pause");

	return 0;

}