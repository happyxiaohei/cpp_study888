# include<iostream>
using namespace std;
#include<string>


	//1.设计英雄结构体
struct Hero
{
	//姓名
	string name;
	//年龄
	int age;
	//性别
	string sex;
};

void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{

		for (int j = 0; j < len - i - 1; j++)
		{
			//判断  如果j下标的元素年龄大于j+1下标的元素的年龄,交换两个元素
			if (heroArray[j].age > heroArray[j + 1].age)  //这里是直接判断年龄   而不是整个数组内元素的内容   所有直接排序数组元素就可以了
			{

				struct Hero temp = heroArray[j];
				heroArray[j ] = heroArray[j+1];
				heroArray[j + 1] = temp;

			}
		}
	}

}

//打印排序后数组中的信息

void pringtHero(struct Hero heroArray[], int len)
{

	for (int i = 0; i < len; i++)
	{
		cout << "姓名:  " << heroArray[i].name << "年龄 :  " << heroArray[i].age << "性别 :  " << heroArray[i].sex << endl;
	}

}

int main() {



	//2.创建一个数组存放5名数组
	struct Hero heroArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	//测试一下能否正常输出

	for (int i = 0; i < len; i++)
	{
		cout << "姓名:  " << heroArray[i].name << "年龄 :  " << heroArray[i].age << "性别 :  " << heroArray[i].sex << endl;
	}

	cout << "\n" << endl;
	//3.对数组进行排序,按照年龄进行升序排序

	bubbleSort(heroArray, len);
	//4.将排序后结果打印输出

	pringtHero(heroArray, len);






















	system("pause");

	return 0;

}