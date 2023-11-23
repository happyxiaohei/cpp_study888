# include<iostream>
using namespace std;

//想调用函数  首先先得定义一个函数

//函数定义的时候, num1和num2并没有真实的数据,
// 她只是一个形式上的参数,简称 形参


int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main39() {


	//main函数中调用add 函数 
	int a = 100;
	int b = 200;
	
	//函数调用语法:函数名称(参数)
	//a 和b 称为实际参数,简称实参
	// 
	//当调用函数的时候,实参的值会传递给形参


	int c = add(a, b);

	cout << "c  =  " << c << endl;

	system("pause");

	return 0;

}