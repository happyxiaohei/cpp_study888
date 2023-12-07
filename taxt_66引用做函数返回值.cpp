# include<iostream>
using namespace std;

//引用做函数的返回值

//1.不要返回局部变量的引用

int& text0101()
{
	int a = 80;  //局部变量存放在四区中的栈区
	return a;
}
//2.函数的调用可以作为左值

int& text0202()
{
	static int a = 80;  // static 是静态变量的关键字   静态变量存放在全局区,全局区的数据是在程序结束后进行释放
	return a;
}
int main66() {

	int &ref01 = text0101();

	int &ref02 = text0202();  //等号的左边称为左值


	cout << "ret = " << ref01 << endl;   //这样的行为是非法操作, 导致输出的数据是乱码
	
	cout << "ret01 = " << ref02 << endl;   

	text0202() = 500;  //如果函数的返回值是引用,这个函数调用可以作为左值

	cout << "ret01 = " << ref02 << endl;


























	system("pause");

	return 0;

}