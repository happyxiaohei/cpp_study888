# include<iostream>
using namespace std;

//��װ������

//���һ��Բ��   ��Բ���ܳ�

//Բ���ܳ��Ĺ�ʽ: 2	* PI * �뾶

const double PI = 3.14;

//class ( ����˿ ) �������һ����,���������ŵľ���������

class circle ////Բ)   
{

	//����Ȩ��
	//����Ȩ��

	//�²��׿�
public:
	
	//����
	//�뾶
	int m_r;


	//��Ϊ
	//��ȡԲ���ܳ�

	double calculateZC()
	{
		return 2 * PI * m_r;
	}

};

int main73() {


	//ͨ��Բ��  ���������Բ(����)
	//ʵ����   (ͨ��һ����,����һ������Ĺ���)

	circle c1;

	c1.m_r = 10;

	cout << "Բ���ܳ�Ϊ:  " << c1.calculateZC() << endl;

	//��װ������ 
	//��������ʱ��  ���Ժ���Ϊд��һ��  ��������
	//�﷨  class ���� {  ����Ȩ�� :  ���� / ��Ϊ } ;

	system("pause");

	return 0;

}