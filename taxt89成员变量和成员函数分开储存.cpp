# include<iostream>
using namespace std;

//��Ա����  ��  ��Ա���� �ֿ��洢��

class person8901
{
	int m_A;               //�Ǿ�̬��Ա����  ������ĶԵĶ�����

	static int m_B;        //��̬��Ա����    �������������

	void func()  {}        //�Ǿ�̬��Ա����  �������������

	static void func2(){}   //��̬��Ա����   �������������

};

int person8901::m_B = 100;

void test8901()
{

	person8901 p;

	//�ն���ռ���ڴ�ռ�Ϊ  :  1
	//C++���������ÿ���ն���Ҳ����һ���ֽڿռ�,��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ


	cout << "size of p = " << sizeof(p) << endl;
}

void test8902() 
{
	person8901 p;

	cout << "size of p = " << sizeof(p) << endl;
}
int main89() {

	//test8901();

	test8902();


	system("pause");

	return 0;

}