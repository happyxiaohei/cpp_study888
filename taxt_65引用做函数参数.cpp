# include<iostream>
using namespace std;

//1.值传递
void myswap01(int a, int b)
{

	int temp = a;
	a = b;
	b = temp;

}
//2.地址传递

void myswap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void myswap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

}
//3.引用传递

int main65() {

	int a = 10;
	int b = 20;

	myswap01(a,b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;  //值传递的方式   形参不会修饰实参

	


	int aa= 10;
	int bb = 20;
	myswap02(&aa,&bb);

	cout << "aa = " << aa << endl;
	cout << "bb = " << bb << endl;  //地址传递的方式   形参会修饰实参的


	int aaa = 10;
	int bbb = 20;
	myswap03(aaa, bbb);

	cout << "aaa = " << aaa << endl;
	cout << "bbb = " << bbb << endl;  //引用传递的方式  形参会修饰实参的


	//引用的优点是可以简化指针修改实参
	//通过引用参数产生的效果同按地址传递是一样的,引用的语法更清楚
	















	system("pause");

	return 0;

}