# include<iostream>
using namespace std;

//��̬��Ա����   �ؼ���Ϊ   static

class Person8701
{
	//1.���ж��󶼹���ͬһ������
	//2.����׶ξͷ����ڴ�
	//3.��������,�����ʼ������
public:

	static int m_A;


	//��̬��Ա���� Ҳ���з���Ȩ�޵�

private:
	static int m_B;

};

//��һ������   ��������,�����ʼ������
int Person8701::m_A = 100;
int Person8701::m_B = 200;

void taxt8701()
{

	Person8701 p;
	cout << p.m_A << endl;

	Person8701 p2;
	p2.m_A = 200;
	cout << p.m_A << endl;

}

void taxt8702()
{

	//��̬��Ա����   ������ĳ��������,���ж��󶼹���ͬһ������
	//��� ��̬��Ա�����ַ��ʷ�ʽ

	//1.ͨ��������з���

	//Person8701 p;
	//cout << p.m_A << endl;



	//2.ͨ���������з���

	cout << Person8701::m_A << endl;
	
	
	
	//cout << Person8701::m_B << endl;   ������ʲ���˽�о�̬��Ա������


}

int main87()
{


	//taxt8701();

	taxt8702();

	system("pause");

	return 0;

}