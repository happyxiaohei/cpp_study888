# include<iostream>
using namespace std;

//����Ĭ�ϲ���

//��������Լ���������,�����Լ�������,���û��,��ô��Ĭ��ֵ
//�﷨: ����ֵ���� ������(�β� = Ĭ��ֵ) {}

int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

//ע������

//1.���ĳ��λ���Ѿ�����Ĭ�ϲ���,��ô�����λ������,�����Ҷ�������Ĭ��ֵ

//int func2(int a = 10, int b, int c)
//{
//	return a + b + c;
//}

//2.�������������Ĭ�ϲ���,����ʵ�־Ͳ�����Ĭ�ϲ���

//������ʵ��ֻ����һ��Ĭ�ϲ���
int func3(int a = 10, int b = 20);

int func3(int a , int b)
{
	return a + b;
}
int main69() {


	cout<<func(10)<<endl;
	cout<<func(10,50)<<endl;
	cout<<func(10,50,100)<<endl;
	
	
	//cout<<func2(50,0,0)<<endl;  //���Ĭ��ֵ�������﷨д�Ļ�  �ͻᵼ�³������е�ʱ�򱨴�

	cout << func3(100, 100) << endl;





















	system("pause");

	return 0;

}