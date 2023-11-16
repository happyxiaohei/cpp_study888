# include<iostream>
using namespace std;

int main() {

	//1.先打印所有三位数字

	int num = 100;

	do
	{
		//2.从所有三位数字中找到水仙花数
		//先设置三个变量,来对应三位数字中的个位,十位,百位
		int a = 0;//个位
		int b = 0;//十位
		int c = 0;//百位

		a = num % 10;//获取个位
		b = num / 10 % 10;//获取十位
		c = num / 100;//获百位
		if (a*a*a + b*b*b + c*c*c == num)//这里用if语句开始判断.如果是水仙花数,则输出结果,然后再进行下面的num++循环
		{
			cout << num << endl;
		 	
		}
		num++;

	} while (num < 1000);//循环条件为100~999内的所有数字

	system("pause");

	return 0;

}