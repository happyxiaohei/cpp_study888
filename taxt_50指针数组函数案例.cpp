# include<iostream>
using namespace std;

//冒泡排序函数

               //参数1是数组的首地址,参数2 是数组的长度
void bubbleSort(int* arr, int len)
{
	for(int i = 0;i < len - 1;i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//如果j>j+1的值   交换数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
}

//打印数组的函数
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int main50() {


	//1.先创建数组

	int arr[] = { 5,8,2,3,6,9,7,22,5,6,77,582,1,23,14,1,11 };

	//数组的长度
	int len = sizeof(arr) / sizeof(arr[0]);
	//2.创建函数,实现冒泡排序

	bubbleSort(arr, len);



	//3.打印排序后的数组

	printArray(arr,len);






	system("pause");

	return 0;

}