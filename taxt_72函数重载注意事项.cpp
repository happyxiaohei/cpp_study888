# include<iostream>
using namespace std;

//�������ص�ע������

//1.������Ϊ���ص�����

void func011(int &a)  //int &a = 10; ���Ϸ�
{
	cout << "func (int &a)����" << endl;

}

void func011(const int &a)  //const int &a  = 10;  �Ϸ�
{
	cout << "func (const int &a)����" << endl;

}
//2.������������Ĭ�ϲ���

void func022(int a, int b = 20)  //����һ�����������Ŀ�  
{
	cout << "func022 (int a, int b = 20) �ĵ���" << endl;
}

//void func022(int a)
//{
//	cout << "func022 (int a, int b = 20) �ĵ���" << endl;
//}
int main72() {

	int a = 20;
	func011(a);
	
	func011(30);



	func022(10,20);

	//func022(10);   //��������������Ĭ�ϲ���,���ֶ�����,����,������������������

	system("pause");

	return 0;

}