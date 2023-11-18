# include<iostream>
using namespace std;

int main27() {

	//跳转语句
	// 
	//break的使用环境

	//1. 在switch语句中使用break

	//cout << "请选择困难程度" << endl;
	//cout << "1.困难" << endl;
	//cout << "2.中等" << endl;
	//cout << "3.简单" << endl;

	//int num = 0;   //这里创建一个变量来接收用户输入的结果
	//cin >> num;    //这里等待用户的输入

	//switch (num)
	//{
	//case 1:
	//	cout << "您选择的是困难程度" << endl;
	//	break;
	//case 2:
	//	cout << "您选择的是中等程度" << endl;
	//	break;
	//case 3:
	//	cout << "您选择的是简单程度" << endl;
	//	break;
	//default:
	//	break;

	//}


	//2.在循环语句中的使用情况

	//for (int i = 0; i < 10; i++)
	//{
	//
	//	cout << i << endl;
	//	if (i == 7)
	//	{
	//		break;
	//	}
	//}


	//3.在嵌套循环语句中的使用情况


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