# include<iostream>
using namespace std;

//�����������ķ���ֵ

//1.��Ҫ���ؾֲ�����������

int& text0101()
{
	int a = 80;  //�ֲ���������������е�ջ��
	return a;
}
//2.�����ĵ��ÿ�����Ϊ��ֵ

int& text0202()
{
	static int a = 80;  // static �Ǿ�̬�����Ĺؼ���   ��̬���������ȫ����,ȫ�������������ڳ������������ͷ�
	return a;
}
int main66() {

	int &ref01 = text0101();

	int &ref02 = text0202();  //�Ⱥŵ���߳�Ϊ��ֵ


	cout << "ret = " << ref01 << endl;   //��������Ϊ�ǷǷ�����, �������������������
	
	cout << "ret01 = " << ref02 << endl;   

	text0202() = 500;  //��������ķ���ֵ������,����������ÿ�����Ϊ��ֵ

	cout << "ret01 = " << ref02 << endl;


























	system("pause");

	return 0;

}