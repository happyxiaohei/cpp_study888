# include<iostream>
using namespace std;

int main34() {

	int arr[] = { 1,2,3 };

	//这行代码是求出数组内元素总长度
	int end = sizeof(arr) / sizeof(arr[0]) ;

	//这行代码是求出数组内元素的下标,而不是长度   下标需要 -1  因为是从0开始   但是长度不需要
	// int end = sizeof(arr) / sizeof(arr[0]) -1 ;

	cout << "数组内的元素总长度是:   " << end << endl;
	cout << "未排序前的顺序:  " << endl;

	//这行代码是用循环先看数组内的元素有哪些
	for (int i = 0; i < end; i++)
	{
		cout << arr[i]<<"  ";
		
	}
	cout << endl;

	//接下来开始排序
	
	//这个循环是   总共排序论述为元素个数 -1  的意思   
	//这里是外层循环   求的是总轮数
	for (int ls = 0; ls < end - 1; ls++)
	{
		//接下来开始内层循环
		// 这里是求次数    次数 = 元素个数 -当前轮数 -1 
		for (int cs = 0; cs < end -ls - 1; cs++)
		{
			//如果第一个数字比第二个大,交换数字
			if (arr[cs] < arr[cs + 1])    //这里才是整个代码的核心,取决于自己是想升序还是降序,更改大小条件就可以了
			{
				int temp = arr[cs];
				arr[cs] = arr[cs + 1];
				arr[cs + 1] = temp;
			}
		}
	}
	cout << "排序后的顺序为:  " << endl;

	for (int i = 0; i < end; i++)
	{
		cout << arr[i] << "  ";

	}
	cout << endl;
	system("pause");

	return 0;

}