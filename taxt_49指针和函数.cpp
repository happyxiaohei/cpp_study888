# include<iostream>
using namespace std;

void swap11(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap 11 a = " << a << endl;
	cout << "swap 11 b = " << b << endl;
}


void swap22(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;


}


int main49() {

	//ָ��ͺ���,
	//1.ֵ����
	int a = 10;
	int b = 20;

	swap11(a, b);   //ֵ���ݲ���ı�ʵ��

	cout << "a = " <<a<< endl;
	cout << "b = " <<b<< endl;


	//2.��ַ����


	swap22(&a, &b);   //����ǵ�ַ����,��������ʵ��

	cout << "swap22 a = " << a << endl;
	cout << "swap22 b = " << b << endl;

	//��������޸�ʵ��,����ֵ����,������޸�ʵ��,���õ�ַ����
	





















	system("pause");

	return 0;

}