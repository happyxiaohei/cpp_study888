# include<iostream>
using namespace std;

int main20() {

	//在屏幕中打印0~9这10个数字

	int num = 0;

	//在写这个循环的时候,一定要避免出现死循环的出现
	 //在执行循环语句的时候,程序必须提供跳出循环的出口,否则会出现死循环的情况
	while (num<10)//这个括号中需要填入条件
	{
		cout << num << endl;
		num++;
	}



	system("pause");

	return 0;

}