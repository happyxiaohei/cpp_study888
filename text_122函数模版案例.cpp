#pragma once            //防止头文件重复包含
# include<iostream>     //包含输入输出流头文件
using namespace std;	//使用标准命名空间
#include<string>


//实现通用  对数组进行排序的函数
//规则  从大到小
//算法  选择
//测试 char  数组. int 数组
template<class T>
void mySwap(T&a,T&b)
{

	T temp = a;
	a = b;
	b = temp;
}
template<class T >
void mySort(T arr[], int len)
{

	for (int i = 0; i < len; i++)
	{

		int max = i;  //认定最大值的下标

		for (int j = i + 1; j < len; j++)
		{
			//认定的最大值  比遍历出的数组要小,说明 J下标的元素才是真正的最大值

			if (arr[max] < arr[j])
			{

				max = j;
			}
		}

		if (max != i)
		{
			//交换max和i的元素
			mySwap(arr[i], arr[max]);
		}
	}
}
//提供打印数组模版

template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{

		cout << arr[i] << "  ";

	}

	cout << endl;
}
void test12201()
{
	//测试char数组
	char charArr[] = "bdacfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);


	
}

void test12202()
{

	int intArr[] = { 1,7,5,9,8,4,6,3,0,2,10,14,15 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);

	printArray(intArr, num);

}


int main122() {

	test12201();
	
	test12202();
	

	system("pause");

	return 0;

}