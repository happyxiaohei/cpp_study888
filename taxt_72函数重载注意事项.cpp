# include<iostream>
using namespace std;

//函数重载的注意事项

//1.引用作为重载的条件

void func011(int &a)
{
	cout << "func (int &a)调用" << endl;

}

void func011(const int &a)
{
	cout << "func (const int &a)调用" << endl;

}
//2.函数重载碰到默认参数

void func022(int a, int b = 20)
{
	cout << "func022 (int a, int b = 20) 的调用" << endl;
}

void func022(int a)
{
	cout << "func022 (int a, int b = 20) 的调用" << endl;
}
int main() {

	int a = 20;
	func011(a);
	
	func011(20);

	//func022(10);   //当函数重载碰到默认参数,出现二义性,报错,尽量避免出现这种情况

	func022(10,20);


	system("pause");

	return 0;

}