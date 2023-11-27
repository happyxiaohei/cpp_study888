# include<iostream>
using namespace std;
#include<string>

//const的使用场景


struct student
{

	string name;  //姓名
	int age;  //年龄
	int score;  //分数
};

//将函数中的形参改为指针,可减少内存空间,而且不会复制新的副本出来

//void pringStdents(student s)
//{
//	cout << " 姓名:  " << s.name << " 年龄: " << s.age << " 分数:  " << s.score << endl;
//}
//
//void pringStdents2(student *s)
//{
//	s->age = 888;
//	cout << " 姓名:  " << s->name << " 年龄: " << s->age << " 分数:  " << s->score << endl;
//}

void pringStdents3(const student *s)
{
	//s->age = 9999;  //加入const之后,一旦有修改的操作就会报错,防止我们的误操作
	cout << " 姓名:  " << s->name << " 年龄: " << s->age << " 分数:  " << s->score << endl;
}

int main56() {


	//创建结构体变量

	struct student s = { "张三",15,77 };


	//通过函数打印结构体变量信息
 
	//pringStdents(s);
	//cout << " 在main函数中 姓名:  " << s.name << " 年龄: " << s.age << " 分数:  " << s.score << endl;


	//pringStdents2(&s);


	//cout << " 在main函数中 姓名:  " << s.name << " 年龄: " << s.age << " 分数:  " << s.score << endl;


	pringStdents3(&s);


	cout << " 在main函数中 姓名:  " << s.name << " 年龄: " << s.age << " 分数:  " << s.score << endl;



















	system("pause");

	return 0;

}