# include<iostream>
using namespace std;

int main46() {


	//指针变量指向内存中编号为0的空间
	//用途 初始化指针变量
	//注意 空指针指向的内存是不可以访问的


	////1.空指针用于给指针变量进行初始化

	//int * p = NULL;  //这个大写的NULL 意思是指向空的意思

	////2.空指针是不可以进行访问的
	////0~255之间的内存编号是系统占用的 ,因此不可以访问

	//*p = 100; //这行代码一运行就会报错





	//野指针   
	//指针变量指向非法的内存空间

	//在程序中,尽量避免出现野指针

	//int* p = (int * )0x1100;

	//cout << *p << endl;//这行代码一运行就会报错



	//总结,空指针和野指针都不是我们申请的空间,因此不要访问
	system("pause");

	return 0;

}