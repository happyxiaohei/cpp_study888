# include<iostream>
using namespace std;
#include<string>

//1.创建学生数据类型   学生包括(姓名,年龄,分数)
//自定义数据类型,一些类型集合组成一个类型
//语法   struct  数据类型   {成员列表}
struct Student
{
	//成员列表

	string name;

	int age;

	int score;
}s3;





//2.通过学生的类型创建具体的学生


int main() {

	//结构体的定义和使用




//1.  struct  Student s1  
Student s1;     //struct  这个关键字可以在创建变量的时候省略

	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;

	cout << "姓名  " << s1.name << "年龄   " << s1.age << "分数  " << s1.score << endl;
//2.  struct  Student s2 = {  初始化值 }
	struct Student s2 = { "李四",19,80 };

	cout << "姓名  " << s2.name << "年龄   " << s2.age << "分数  " << s2.score << endl;
//3.在定义结构体时顺便创建变量

	s3.name = "王五";
	s3.age = 28;
	s3.score = 30;


	cout << "姓名  " << s3.name << "年龄   " << s3.age << "分数  " << s3.score << endl;





	//这三种定义的方法   一般是用前两种,第三种方法一般是自己写的代码才能看的懂

	//注意,在定义的时候  struct 不可以省略     结构体变量利用  "."  "点"  这个符号访问成员










	system("pause");

	return 0;

}