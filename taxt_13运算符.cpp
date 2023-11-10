# include<iostream>
using namespace std;

int main13() {
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


	cout << "取模的结果的是:"<<a1 % b1 << endl;  //%百分号就是取模,或者取模的意思  本质是求模数
	cout << "取模的结果的是:"<<a2 % b2 << endl;  //当取模运算的时候,除不过的时候  还是前面内个数
	//cout << "取模的结果的是:"<<a3 % b3 << endl;  //这条程序执行的时候,会直接出现报错的情况,原因是除数不可以为0  所以程序会直接报错
	//cout << "取模的结果的是:" << a4 % b4 << endl;// 这条程序也是直接报错. 取模运算的时候,是不可以是小数进行取模
	//一般用到取模运算的时候一般都是以整数的形式进行运算,

	//1.前置递增
	 int a = 10;
	 ++a;
	 cout<<"a = "<<a<<endl;
	 
	//2.后置递减
	 
	 int b = 10;
	 b++;
	 cout<<"b = "<<b<<endl;
	 
	//3.前置和后置的区别

	 //前置递增  是先让变量+1  然后进行表达式运算
	 int aa = 10;
	 int bb = ++aa * 10;
	 cout << "aa = " << aa << endl;
	 cout << "bb = " << bb << endl;

	 //后置递增  是先进行表达式运算,然后再变量+1
	 int aa2 = 10;
	 int bb2 = aa2++ * 10;
	 cout << "aa2 = " << aa2 << endl;
	 cout << "bb2 = " << bb2 << endl;

	system("pause");

	return 0;

}