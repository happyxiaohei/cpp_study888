# include<iostream>
using namespace std;

int main28() {


	//continue ��ת����ʹ��    ����ţ


	
	for (int i = 0; i < 100; i++)
	{

		//�����ż��,�����
		if (i % 2 == 0)
		{
			continue;//  ����ɸѡ����, ִ�е���,�Ͳ�������ִ��,Ȼ������ִ����һ�ε�ѭ��
			//��break����������,break��ֱ���˳�����ѭ����,��continue�����ִ��ѭ�����ڵĴ���
		}
		cout << i << endl;

	}


	system("pause");

	return 0;

}