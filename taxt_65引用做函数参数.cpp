# include<iostream>
using namespace std;

//1.ֵ����
void myswap01(int a, int b)
{

	int temp = a;
	a = b;
	b = temp;

}
//2.��ַ����

void myswap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void myswap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

}
//3.���ô���

int main65() {

	int a = 10;
	int b = 20;

	myswap01(a,b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;  //ֵ���ݵķ�ʽ   �ββ�������ʵ��

	


	int aa= 10;
	int bb = 20;
	myswap02(&aa,&bb);

	cout << "aa = " << aa << endl;
	cout << "bb = " << bb << endl;  //��ַ���ݵķ�ʽ   �βλ�����ʵ�ε�


	int aaa = 10;
	int bbb = 20;
	myswap03(aaa, bbb);

	cout << "aaa = " << aaa << endl;
	cout << "bbb = " << bbb << endl;  //���ô��ݵķ�ʽ  �βλ�����ʵ�ε�


	//���õ��ŵ��ǿ��Լ�ָ���޸�ʵ��
	//ͨ�����ò���������Ч��ͬ����ַ������һ����,���õ��﷨�����
	















	system("pause");

	return 0;

}