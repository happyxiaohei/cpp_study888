# include<iostream>
using namespace std;
#include<string>

#include<ctime>   

//������,����ѧ���Ľṹ��
struct Student
{
	string tName;  //����

	int score;  //����
};

//��һ�� ������ʦ�Ľṹ��

struct Tescher
{
	string tName;  //��ʦ����

	//�ڶ���  Ƕ��ѧ���ṹ��

	struct Student sArray[5];  //��ʦ������ѧ������

};

//���岽 �����������ʦ��ѧ����ֵ�ĺ���

void allocateSpace(struct Tescher tArray[],int len)
{
	//���߲�,��ʼ����ʦ��ѧ����ֵ

	string nameSeed = "ABCDE"; 

	

	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];   //����һ������   ��������д����Ҫ�ۼӵ��ַ�

		for (int j = 0; j < 5; j++)
		{ 
			tArray[i].sArray[j].tName = "Student_";
			tArray[i].sArray[j].tName += nameSeed[j];
			
			//��ʮ��  ���������ó�Ϊ�����

			int random = rand() % 61 + 40;  //�����40 �Ǵ����40�� 61+40 ֮��ȡֵ
			//40~100 ֮��ȡֵ
			//��ʹ���������ʱ����Ҫ���ͷ�ļ�,

			//int random = rand() % 100 + 1 ;

			tArray[i].sArray[j].score = random;

	
		}
	}

}



//�ھŲ�,��ӡ������Ϣ

void pringInfo(struct Tescher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ����:  " << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ������:  " << tArray[i].sArray[j].tName <<
				"  ���Է���:  " << tArray[i].sArray[j].score << endl;
			
		}
	}
}





int main57() {

	//��ʮһ��   ������������  //�ⲽ����Ҫ   ��Ȼ���ɵķ�����Զ��һ����


	//srand((unsigned)time(NULL));

	srand((unsigned int)time(NULL));

	//����3����ʦ������


	//���Ĳ�
	
	struct Tescher tArray[3];
	
	//ͨ��������������ʦ����Ϣ��ֵ,������ʦ����ѧ����ֵ
	 
	//������
	int len = sizeof(tArray) / sizeof(tArray[0]);   //����д������Ϊ���Ժ�����޸�����Ԫ��ֵ�Ļ�������ȥ�޸�Դ�����������
	allocateSpace(tArray, len);
	
	//��ӡ������ʦ��������ѧ����Ϣ

	//�ڰ˲�,

	pringInfo(tArray, len);





















	system("pause");

	return 0;

}