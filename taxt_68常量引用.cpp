# include<iostream>
using namespace std;

//打印函数
void showValue(const int& val)
{

	//val = 1000;
	cout << "val = " << val <<endl;
}
int main68() {


	//常量引用

	//使用场景:用来修饰形参,防止误操作

	//int a = 10;

	//加上const之后,编译器将代码修改 int temp = 10; cpmst int &ref = temp;
	const int& ref = 10;  //引用必须引用一块合法的内存空间
	//ref = 20;  //假如const 之后变为只读,不可修改


	int a = 10;
	
	showValue(a);



















	system("pause");

	return 0;

}