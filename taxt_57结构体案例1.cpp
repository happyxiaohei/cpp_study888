# include<iostream>
using namespace std;
#include<string>

#include<ctime>   

//第三步,创建学生的结构体
struct Student
{
	string tName;  //姓名

	int score;  //分数
};

//第一步 创建老师的结构体

struct Tescher
{
	string tName;  //老师姓名

	//第二步  嵌套学生结构体

	struct Student sArray[5];  //老师所带的学生数组

};

//第五步 创建数组给老师和学生赋值的函数

void allocateSpace(struct Tescher tArray[],int len)
{
	//第七步,开始给老师和学生赋值

	string nameSeed = "ABCDE"; 

	

	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];   //这是一个技巧   先在外面写出需要累加的字符

		for (int j = 0; j < 5; j++)
		{ 
			tArray[i].sArray[j].tName = "Student_";
			tArray[i].sArray[j].tName += nameSeed[j];
			
			//第十步  给分数设置成为随机数

			int random = rand() % 61 + 40;  //后面加40 是代表从40到 61+40 之间取值
			//40~100 之间取值
			//在使用随机数的时候需要添加头文件,

			//int random = rand() % 100 + 1 ;

			tArray[i].sArray[j].score = random;

	
		}
	}

}



//第九步,打印所有信息

void pringInfo(struct Tescher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名:  " << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名:  " << tArray[i].sArray[j].tName <<
				"  考试分数:  " << tArray[i].sArray[j].score << endl;
			
		}
	}
}





int main57() {

	//第十一步   添加随机数种子  //这步很重要   不然生成的分数永远是一样的


	//srand((unsigned)time(NULL));

	srand((unsigned int)time(NULL));

	//创建3名老师的数组


	//第四步
	
	struct Tescher tArray[3];
	
	//通过函数给三名老师的信息赋值,并给老师带的学生赋值
	 
	//第六步
	int len = sizeof(tArray) / sizeof(tArray[0]);   //这种写法可以为了以后如果修改数组元素值的话不用再去修改源代码的内容了
	allocateSpace(tArray, len);
	
	//打印所有老师及所带的学生信息

	//第八步,

	pringInfo(tArray, len);





















	system("pause");

	return 0;

}