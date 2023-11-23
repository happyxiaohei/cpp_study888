# include<iostream>
using namespace std;

//函数的声明,
//比较函数,实现两个整型数字进行比较,返回较大的值



//这里是函数声明
//作用是提前告诉编译器函数的存在,可以利用函数的声明

int max(int a, int b);

//函数的声明可以写多次,但是函数的定义只能是一次
//如果函数定义多次的话   程序会直接出现报错

int main42() {


	int a = 100;
	int b = 200;
	cout << max(a, b) << endl;


	system("pause");

	return 0;

}

//这里是函数的定义
int max(int a, int b)
{
	return  a > b ? a : b;
}
