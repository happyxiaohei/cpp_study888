# include<iostream>
using namespace std;

int main30() {

	//数组的定义方式

	//1.
	//这行代码是定义一个数组名称
	int arr[5];

	//下面的代码是给数组里的元素进行赋值
	//中括号里的数字是数组的下标
	//数组元素的下标是从0开始索引的
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	//下面的代码是访问数组里的元素
	//cout << arr[0] << endl;
	//cout << arr[1] << endl;
	//cout << arr[2] << endl;
	//cout << arr[3] << endl;
	//cout << arr[4] << endl;


	//2.
	int arr2[5] = { 10,20,30 };

	//如果在初始化的数据的时候,没有全部填写的时候,那么会用0来填补剩余的元素
	
	//cout << arr2[0] << endl;
	//cout << arr2[1] << endl;
	//cout << arr2[2] << endl;
	//cout << arr2[3] << endl;
	//cout << arr2[4] << endl;

	//访问数组里的元素其实可以用for循环来访问
	//这种方式访问数组里的元素是比较方便的
	

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << arr[i] << endl;
	//}


	//3.

	//以这种方式定义数组的时候,必须要有初始长度 ,   不然报错

	int arr3[] = { 90,80,70,60,50,40,30,20,10 };


	for (int i = 0; i < 9; i++)
	{
		cout << arr3[i] << endl;
	}


	//总结,数组名的命名规范与变量名命名规范一致,不要和变量名重名
	//再次强调,数组中的下标是从0开始索引的
	system("pause");

	return 0;

}