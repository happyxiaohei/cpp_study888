# include<iostream>
using namespace std;
#include<string>

struct student
{
	
	string name;  //姓名
	int age;  //年龄
	int score;  //分数
};



//打印学生信息

//1.值传递
void printStudent1(struct student s)
{
	s.age = 50;
	cout << "在子函数1中打印  姓名: " << s.name << " 年龄 :" << s.age << " 分数: " << s.score << endl;

}

//2.地址传递

void printStudent2(struct student * p)
{
	p->age = 900;
	cout << "在子函数2中打印  姓名: "<<p->name<< " 年龄 :" << p ->age<< " 分数: " <<p ->score << endl;
}

int main55() {


	//结构体做函数参数

	//将学生传入到一个参数中,打印学生身上的所有信息

	//创建结构体变量

	struct student s;

	s.name = "张三";
	s.age = 18;
	s.score = 88;



	printStudent1(s);    //值传递不会更改main函数中的数据
	
	cout << "在main 函数中打印  姓名: " << s.name << " 年龄 :" << s.age << " 分数: " << s.score << endl;


	printStudent2(&s);     //地址传递会更改main函数中的数据

	cout << "在main 函数中打印  姓名: " << s.name << " 年龄 :" << s.age << " 分数: " << s.score << endl;


//总结   如果不想修改主函数中的数据,那么用值传递,反之用地址传递














	system("pause");

	return 0;

}