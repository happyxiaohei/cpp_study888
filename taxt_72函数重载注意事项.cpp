# include<iostream>
using namespace std;

//�������ص�ע������

//1.������Ϊ���ص�����

void func011(int &a)
{
	cout << "func (int &a)����" << endl;

}

void func011(const int &a)
{
	cout << "func (const int &a)����" << endl;

}
//2.������������Ĭ�ϲ���

void func022(int a, int b = 20)
{
	cout << "func022 (int a, int b = 20) �ĵ���" << endl;
}

void func022(int a)
{
	cout << "func022 (int a, int b = 20) �ĵ���" << endl;
}
int main() {

	int a = 20;
	func011(a);
	
	func011(20);

	//func022(10);   //��������������Ĭ�ϲ���,���ֶ�����,����,������������������

	func022(10,20);


	system("pause");

	return 0;

}