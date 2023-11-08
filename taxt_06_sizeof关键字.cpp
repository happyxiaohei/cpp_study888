#include<iostream>
using namespace std;

int main06() {
	//整型: short(2)  int(4)  long(4)  long long(8)  括号里代表字节
	//可以用sizeof来查看占用内存大小
	//sizeof(数据类型或者变量)

	short num1 = 10;
	cout << "short占用内存空间为:" << sizeof(short) << endl;
	cout << "short占用内存空间为:" << sizeof(num1) << endl;


	system("pause");

	return 0;
}