# include<iostream>
using namespace std;

int main64() {

	//引用的基本语法

	//数据类型  &别名 = 原名

	int a = 10;
	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//本质是给变量起别名   

	//1.引用必须要初始化
	int aa = 10;

	//int& d;  //这个操作是不允许的

	int& bb = aa;


	//2.引用一旦初始化后,就不可以更改了

	int cc = 20;

	bb = cc;  //这个操作是赋值操作.而不是引用

	cout << aa<< endl;
	cout << bb<< endl;
	cout << cc << endl;























	system("pause");

	return 0;

}