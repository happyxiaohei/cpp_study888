# include<iostream>
using namespace std;

int main31() {

	//数组名称的用途是为了方便统计整个数组的占用大小   
	// 
	int arr[] = { 10,20,30,40,50,60,70,80,90 };
	cout << "整个数组占用的内存空间: " << sizeof(arr) << endl;
	cout << "每个元素所占用的空间: " << sizeof(arr[0]) << endl;
	cout << "整个数组占用的内存空间" << sizeof(arr) / sizeof(arr[0]) << endl;
	//再其次可以通过数组名查看数组首地址
	cout << "数组首地址为: " << (int) arr << endl;  
	//查看地址的方式是直接打印输出数组名称就可以了    
	// 但是输出方式是16进制的    想要10进制的话,前面加Int就可以了

	cout << "数组中的第一个元素地址为 : " << (int)&arr[0] << endl;
	cout << "数组中的第二个元素地址为 : " << (int)&arr[1] << endl;

	//数组名是一个常量,不可以进行赋值操作

	system("pause");

	return 0;

}