# include<iostream>
using namespace std;

int main27() {

	//��ת���
	// 
	//break��ʹ�û���

	//1. ��switch�����ʹ��break

	//cout << "��ѡ�����ѳ̶�" << endl;
	//cout << "1.����" << endl;
	//cout << "2.�е�" << endl;
	//cout << "3.��" << endl;

	//int num = 0;   //���ﴴ��һ�������������û�����Ľ��
	//cin >> num;    //����ȴ��û�������

	//switch (num)
	//{
	//case 1:
	//	cout << "��ѡ��������ѳ̶�" << endl;
	//	break;
	//case 2:
	//	cout << "��ѡ������еȳ̶�" << endl;
	//	break;
	//case 3:
	//	cout << "��ѡ����Ǽ򵥳̶�" << endl;
	//	break;
	//default:
	//	break;

	//}


	//2.��ѭ������е�ʹ�����

	//for (int i = 0; i < 10; i++)
	//{
	//
	//	cout << i << endl;
	//	if (i == 7)
	//	{
	//		break;
	//	}
	//}


	//3.��Ƕ��ѭ������е�ʹ�����


	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 8)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");

	return 0;

}