# include<iostream>
using namespace std;

//结构体指针


//定义学生结构体

struct student
{
	string name;  // 姓名
	int age;  //年龄
	int score;  //分数

};

int main53() {


	//创建学生结构体变量

	struct student s = { "张萨姆",18,58 };  //注意 这里前面这个struct这个关键字在main函数中写的时候是可以省略的


	//通过指针指向结构体变量

	struct student *p = &s;


	//通过指针访问结构体变量中的数据

	//通过结构体指针 访问结构体中的属性  需要 ->  (减 大于 ) 这两个符号   简称箭头的意思 来访问
	cout << " 姓名:  " << p->name << " 年龄:  " << p->age << " 分数:  " << p->score << endl;




















	system("pause");

	return 0;

}