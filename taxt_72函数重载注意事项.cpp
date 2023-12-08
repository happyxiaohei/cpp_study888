# include<iostream>
using namespace std;

//函数重载的注意事项

//1.引用作为重载的条件

void func011(int &a)  //int &a = 10; 不合法
{
	cout << "func (int &a)调用" << endl;

}

void func011(const int &a)  //const int &a  = 10;  合法
{
	cout << "func (const int &a)调用" << endl;

}
//2.函数重载碰到默认参数

void func022(int a, int b = 20)  //这是一个容易碰到的坑  
{
	cout << "func022 (int a, int b = 20) 的调用" << endl;
}

//void func022(int a)
//{
//	cout << "func022 (int a, int b = 20) 的调用" << endl;
//}
int main72() {

	int a = 20;
	func011(a);
	
	func011(30);



	func022(10,20);

	//func022(10);   //当函数重载碰到默认参数,出现二义性,报错,尽量避免出现这种情况

	system("pause");

	return 0;

}