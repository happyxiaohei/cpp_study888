# include<iostream>
using namespace std;

int main18() {

	int a = 10;
	int b = 20;
	int c = 0;

	c=(a > b ? a : b);
	cout << "c=" << c << endl;
	//这段代码的白话文是    
	//a是否大于b  那么为真,则a的值赋值给c,否则b的值赋值给c
	int aa = 330;
	int bb = 50;
	int cc = 0;

	cc = (aa > bb ? aa : bb);
	cout << "cc=" << cc << endl;


	//c++中  三目运算符返回的是变量,还可以继续赋值的
	(aa > bb ? aa : bb) = 100;
	cout << "aa=" << aa << endl;
	cout << "bb=" << bb << endl;
	system("pause");

	return 0;

}