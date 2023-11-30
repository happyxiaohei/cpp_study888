# include<iostream>
using namespace std;
#include<string>  //添加字符串头文件

//设计英雄结构体

struct Yingxiong 
{
	string name;//姓名

	int age;//年龄

	string xingbie;//性别


};

void paixuhou(struct Yingxiong YX[], int len)   // 创建排序的函数
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (YX[j].age > YX[j + 1].age)
			{

				//int temp = YX[j].age;
				//YX[j ].age = YX[j +1].age;
				//YX[j + 1].age = temp;        //也可以这样写  道理是一样的

				struct Yingxiong temp1 = YX[j];
				YX[j] = YX[j + 1];
				YX[j + 1] = temp1;

			}


		}
	}


}


//创建打印所有信息的函数

void dayinsuoyou(struct Yingxiong YX[], int len)
{



	for (int i = 0; i < len; i++)
	{
		cout << "  姓名:  " << YX[i].name << "  年龄  :  " << YX[i].age << "  性别  :  " << YX[i].xingbie << "\n" << endl;
	}






}
int main60() {


	//给结构体赋值

	Yingxiong YX[]
	{
		{"刘备",22,"男"},
		{"关羽",545,"男"},
		{"张飞",4120,"男"},
		{"赵云",4,"男"},
		{"貂蝉",13129,"女"},
		{"刘备",22,"男"},
		{"关羽",545,"男"},
		{"张飞",4120,"男"},
		{"赵云",4,"男"},
		{"貂蝉",13129,"女"},
		{"刘备",22,"男"},
		{"关羽",545,"男"},
		{"张飞",4120,"男"},
		{"赵云",4,"男"},
		{"貂蝉",13129,"女"},
	};

	//测试一下是否能正常输出

	int len = sizeof(YX) / sizeof(YX[0]);

	for (int i = 0; i < len; i++)
	{
		cout << "姓名:  " << YX[i].name << "年龄  :  " << YX[i].age << "性别  :  " << YX[i].xingbie << "" << endl;
	}

	cout << "未排序前的结果 \n" << endl;

	 

	paixuhou(YX, len);   //创建排序的函数


	dayinsuoyou(YX, len);   //开始打印排序后的所有信息

















	system("pause");

	return 0;

}