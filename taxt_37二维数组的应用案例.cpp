# include<iostream>
using namespace std;

//������Ϊ��Ҫ�õ��ַ���   ������Ҫ���һ��ͷ�ļ�  ��������Ͳ��ᱨ��

#include<string>

int main37() {


	//1.������ά����

	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,90}
	};

	//���ﴴ��һ�����ֵ�����

	string names[3] = {"����","����","����"};

	//2.ͳ��ÿ���˵��ܺͷ���

	for (int i = 0 ; i < 3; i++)
	{
		//�趨һ������������ͳ�Ʒ����ۺ�
		int sum = 0;

		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
			//cout << scores[i][j] << "  ";
		}
		cout << names[i] << "�ķ����ܺ�Ϊ: " << sum <<endl;
	}

	//����ע��  �����õ��ַ�����ʽ�Ļ�  ����Ҫ���string���ͷ�ļ�  ����Ӿͻᵼ���ļ�����

	system("pause");

	return 0;

}