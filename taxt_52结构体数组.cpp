# include<iostream>
using namespace std;
#include<string>  //字符串头文件

//结构体数组

//1. 定义一个结构体

struct Student
{
	//姓名
	string name;
	//年龄
	int  age;
	//分数
	int score;

};





int main52() {



//2.创建一个结构体数组
	struct Student strArray[3] =
	{
		{"张三",18,100},
		{"李四",28,88},
		{"王五",38,66}
	};


//3.给结构体数组中的元素赋值

	strArray[2].name = "赵柳";
	strArray[2].age = 88;
	strArray[2].score = 60;

	//这行代码代表的是可以修改数组内元素的值,   
	//上面创建的数组元素可以理解为初始化数组内元素的值





//4.遍历结构体数组

	for (int i = 0; i < 3; i++)
	{
		//cout << "姓名 : " << strArray[i].name << "年龄 :" << strArray[i].age << "分数 :" << strArray[i].score << endl;
		
		//输出的方式也可以这样输出
		cout << " 姓名 : " << strArray[i].name 
			<< " 年龄 : " << strArray[i].age 
			<< " 分数 : " << strArray[i].score << endl;
	}




















	system("pause");

	return 0;

}