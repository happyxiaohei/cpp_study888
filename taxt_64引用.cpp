# include<iostream>
using namespace std;

int main64() {

	//���õĻ����﷨

	//��������  &���� = ԭ��

	int a = 10;
	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//�����Ǹ����������   

	//1.���ñ���Ҫ��ʼ��
	int aa = 10;

	//int& d;  //��������ǲ������

	int& bb = aa;


	//2.����һ����ʼ����,�Ͳ����Ը�����

	int cc = 20;

	bb = cc;  //��������Ǹ�ֵ����.����������

	cout << aa<< endl;
	cout << bb<< endl;
	cout << cc << endl;























	system("pause");

	return 0;

}