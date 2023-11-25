# include<iostream>
using namespace std;

void swap11(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap 11 a = " << a << endl;
	cout << "swap 11 b = " << b << endl;
}


void swap22(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;


}


int main49() {

	//指针和函数,
	//1.值传递
	int a = 10;
	int b = 20;

	swap11(a, b);   //值传递不会改变实参

	cout << "a = " <<a<< endl;
	cout << "b = " <<b<< endl;


	//2.地址传递


	swap22(&a, &b);   //如果是地址传递,可以修饰实参

	cout << "swap22 a = " << a << endl;
	cout << "swap22 b = " << b << endl;

	//如果不想修改实参,就用值传递,如果想修改实参,就用地址传递
	





















	system("pause");

	return 0;

}