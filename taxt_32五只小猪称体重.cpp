# include<iostream>
using namespace std;

int main32() {


	//  题目
	// 五只小猪中寻找其中最重的一只
	

	//1.创建五只小猪体重的数组

	int arr[5] = { 300,350,500,400,250 };

	//2.从数组中寻找最大值

	int max = 0;
	//这是一种遍历的算法\
	//先认定一个最大的值为 0 

	for (int i = 0; i < 5; i++)
	{
		//if语句这条代码的意思是 
		//如果访问的数组中的元素比我认定的最大的值还要大,那么更新最大值

		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	//3.打印最大值
	cout <<"最重的小猪的体重是:  " << max << endl;

	system("pause");

	return 0;

} 