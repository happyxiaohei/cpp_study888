# include<iostream>
using namespace std;
#include<string>
#include<ctime>


//第一步   创建老师和学生的结构体


struct student  //创建学生结构体
{
	string sName;   //姓名
	
	int score;  //分数
	
	int age; //年龄

};

struct tracher  //老师结构体
{
	string tName;
	
	struct student sarray[5];  //嵌套学生数组

	//到这里相当于创建了一组老师和学生的结构体


};


//开始给老师和学生赋值
void akkcationSoace(struct tracher Tsarray[], int len)
{


	for (int i = 0; i < len; i++)
	{
		
		string seedname = "ABCDE";  //相当于添加一个名字的种子

		Tsarray[i].tName = "程序老师_";
		Tsarray[i].tName += seedname[i];

		//开始给学生的名字赋值
		for (int j = 0; j < 5; j++)
		{
			Tsarray[i].sarray[j].sName = "学生_";
			


			Tsarray[i].sarray[j].sName += seedname[i];

			//开始给年龄赋值

			//添加一个随机数
			int GNG =  20 + rand() % (28 - 20 +1)  ;

			Tsarray[i].sarray[j].age = GNG;

			//开始给分数赋值
			int GNG2 =  30 + rand() % (100 - 30 +1);

			Tsarray[i].sarray[j].score = GNG2;

			//这里赋值赋好了


			

		}

	}



}



//创建打印所有信息的函数

void pringInga(struct tracher Tsarry[3], int len)
{




	for (int i = 0; i < len; i++)

	{
		cout << "老师姓名  :  " << Tsarry[i].tName << "\n" << endl;

		for (int j = 0; j < 5; j++)
		{

			cout << "\t学生姓名  :  " << Tsarry[i].sarray[j].sName<<
			"\t  学生分数  :  " << Tsarry[i].sarray[j].score <<
			 "\t学生年龄  :  " << Tsarry[i].sarray[j].age << endl;

			/*cout << "\t  学生分数  :  " << Tsarry[i].sarray[j].score << endl;*/
		}

	}




}

int main58() {
	//添加随机数种子
	srand((unsigned int)time(NULL));
	
	//接下来去主函数里创建三个老师数组


	//struct tracher Tsarray[3];
	tracher Tsarray[3];

	int len = sizeof(Tsarray) / sizeof(Tsarray[0]);
	


	akkcationSoace(Tsarray, len);    //这里主函数里输出上面函数赋值的内容




	pringInga(Tsarray, len);    //这里输出所有内容







	system("pause");

	return 0;

}