# include<iostream>
using namespace std;

int main() {
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//两个整数相处结果依然是整数

	int a2=10;
	int b2=20;
	cout << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;
	//cout << a3 / b3 << endl;//这行代码会报错,因为除数不可以为0

	double a4= 0.5;
	double b4= 0.225;
	cout << a4 / b4 << endl;


	


	system("pause");

	return 0;

}