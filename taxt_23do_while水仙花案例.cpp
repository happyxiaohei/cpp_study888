# include<iostream>
using namespace std;

int main() {

	//1.�ȴ�ӡ������λ����

	int num = 100;

	do
	{
		//2.��������λ�������ҵ�ˮ�ɻ���
		//��������������,����Ӧ��λ�����еĸ�λ,ʮλ,��λ
		int a = 0;//��λ
		int b = 0;//ʮλ
		int c = 0;//��λ

		a = num % 10;//��ȡ��λ
		b = num / 10 % 10;//��ȡʮλ
		c = num / 100;//���λ
		if (a*a*a + b*b*b + c*c*c == num)//������if��俪ʼ�ж�.�����ˮ�ɻ���,��������,Ȼ���ٽ��������num++ѭ��
		{
			cout << num << endl;
		 	
		}
		num++;

	} while (num < 1000);//ѭ������Ϊ100~999�ڵ���������

	system("pause");

	return 0;

}