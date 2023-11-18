# include<iostream>
using namespace std;

int main26() {

	//打印乘法口诀表


	for (int i = 1; i <= 9; i++)  //这是第一步    打印行数

	{

		//cout << i << endl;

		for (int j = 1; j <= i; j++)  //这是第二步,打印列数
		{
			cout << j<<"*" << i <<"="<< j * i << "   ";
		}
		cout << endl;
	}
	system("pause");

	return 0;

}