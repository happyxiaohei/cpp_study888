# include<iostream>
using namespace std;

int main26() {

	//��ӡ�˷��ھ���


	for (int i = 1; i <= 9; i++)  //���ǵ�һ��    ��ӡ����

	{

		//cout << i << endl;

		for (int j = 1; j <= i; j++)  //���ǵڶ���,��ӡ����
		{
			cout << j<<"*" << i <<"="<< j * i << "   ";
		}
		cout << endl;
	}
	system("pause");

	return 0;

}