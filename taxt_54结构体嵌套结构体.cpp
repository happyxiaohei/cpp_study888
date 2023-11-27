# include<iostream>
using namespace std;
#include<string>

//结构体嵌套结构体

//在结构体中可以定义另一个结构体作为成员,用来解决实际问题

//先定义学生结构体
struct student
{
	string name; //姓名
	int age;//年龄
	int score;//分数

};

//再定义老师的结构体
struct teacher
{
	int id;   //教师编号
	string name;  //教师姓名
	int age;//年龄
	

	struct student stu;   //辅导的学生
};


int main54() {

	//创建老师

	teacher t;
	//初始化结构体内容
	

	//初始化老师的结构体
	t.id = 5555;
	t.name = "老王";
	t.age = 88;
	
	//初始化学生的结构体
	t.stu.name = "小张";
	t.stu.age = 18;
	t.stu.score = 66;

	cout << "老师的姓名: " << t.name << "  "
		<< "老师的编号:" << t.id << "  "
		<< "老师的年龄:" << t.age << "  " << endl;

	cout << "学生的姓名: " << t.stu.name << "  "
		<< "学生的年龄:" << t.stu.age << "  "
		<< "学生的分数:" << t.stu.score << "  " << endl;























	system("pause");

	return 0;

}