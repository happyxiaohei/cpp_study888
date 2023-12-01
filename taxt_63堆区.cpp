# include<iostream>
using namespace std;

//堆区

//在c++中主要利用new在堆区开辟内存


int* func()
{
	//利用nwe关键字  可以将数据开辟到堆区
	int* p = new int(10);
	return p;
}
int main() {


	int* p = func();

	cout << *p << endl;
	cout << *p << endl;


	//堆区数据是由程序管理员开辟和释放   数据是由nwe关键字进行开辟内存




















	system("pause");

	return 0;

}