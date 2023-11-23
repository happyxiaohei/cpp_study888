# include<iostream>
using namespace std;

//这里因为需要用到字符串   所以需要添加一个头文件  这样程序就不会报错

#include<string>

int main37() {


	//1.创建二维数组

	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,90}
	};

	//这里创建一个名字的数组

	string names[3] = {"张三","李四","王五"};

	//2.统计每个人的总和分数

	for (int i = 0 ; i < 3; i++)
	{
		//设定一个变量来接收统计分数综合
		int sum = 0;

		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
			//cout << scores[i][j] << "  ";
		}
		cout << names[i] << "的分数总和为: " << sum <<endl;
	}

	//这里注意  数组用到字符串格式的话  就需要添加string这个头文件  不添加就会导致文件报错

	system("pause");

	return 0;

}