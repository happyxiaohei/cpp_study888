# include<iostream>
using namespace std;

int main48() {


	//指针和数组


	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "正常访问第一个元素" << arr[0] << endl;

	int* p = arr;  //arr就是数组的首地址

	cout << "利用指针访问第一个元素" << *p << endl;

	p++;

	cout << "利用指针访问第一个元素" << *p << endl;


	cout << "利用指针遍历数组" << endl;

	int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;  //这行代码意思是没有指针的时候遍历的结果
		cout << "利用指针访问第一个元素" << *p2 << endl;

		p2++;

	}


	//这里要是不重新定义一个新的指针的话,就会导致遍历出来的数组第一个元素不显示了,原因是因为前面已经p++了  指针已经偏移过一次了







	system("pause");

	return 0;

}