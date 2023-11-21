# include<iostream>
using namespace std;

int main() {

	//1. 创建数组
	
	int arr[9]{ 1,2,3,4,5,6,7,8,9 };
	
	cout << "未置换前数组内的元素是:  " <<endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i]<< endl;
	}
	
	//2.实现逆置
	

	// 2.1 记录起始下标位置
	int start = 0;
	//这里   数组元素的下标都是从0开始,那么等于0 是一样的
	// 
	// 2.2记录结束下标位置
	int end = sizeof(arr) / sizeof(arr[0]) -1;
	//这行代码是相当于计算出数组内的元素最长的多少,然后直接赋值了



	// 2.3起始下标位置和结束下标的元素互换
		//创建一个循环来遍历数组内的所有元素进行置换

	while (start < end)
	{ 
		//这里开始实现元素互换
		int temp = arr[start];  //这行代码是把起始位置的元素先赋值给临时的一个变量 
		arr[start] = arr[end];//这行代码才是开始真正的互换,把末尾的元素先赋值给第一个   
		arr[end] = temp;   //然后末尾的元素等于储存在临时变量里的第一个元素   

		//这样就实现了互换的意义



		// 2.4 起始位置++   结束位置--
		start++;
		end--;

	}


	//3.打印输出置换后的数组内的元素

	cout<<"置换后数组内的元素内容是 :  "<<endl;
	for (int i = 0; i < 9; i++)
	{
		cout <<arr[i] << endl;
	}
	system("pause");

	return 0;

}