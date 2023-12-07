# include<iostream>
using namespace std;

void func(int& ref)
{
	ref = 100;   //ref是引用,转换为*ref = 100
}

int main67() {


	int a = 10;

	//自动转换为 int* const ref = &a; 指针常量是指针指向不可改,也说明了为什么引用不可改
	int& ref = a;
	ref = 20;  //内部发现ref是突变体不过,自动帮我们转换为: *ref = 20;

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	func(a);


	


	//c++推荐用引用计数,因为语法方便,引用本质是指针常量,但是所有的指针操作编译器都帮我们做了
	 
















	system("pause");

	return 0;

}