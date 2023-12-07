# include<iostream>
using namespace std;

//堆区

//在c++中主要利用new在堆区开辟内存


int* func()
{
	//利用nwe关键字  可以将数据开辟到堆区
	//nwe返回是该数据类型的指针
	int* p = new int(10);
	return p;
}

void test001()
{
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;

	//如果想释放在堆区的数据,利用关键字  delete
	delete p;   


}

void test002()
{
	//创建10整型数据的数据,在堆区

	int * arr = new int[10];   //这里这个10代表数组有10个元素

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;    //这里是给10 个元素赋值
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//释放堆区数组

	delete[] arr;   //释放数组的时候,要加[]  才可以
}
int main63() {


	test001();

	test002();

	//堆区数据是由程序管理员开辟和释放   数据是由nwe关键字进行开辟内存




















	system("pause");

	return 0;

}