# include<iostream>
using namespace std;

//设计一个学生类,属性有姓名和学号,
//可以给姓名和学号赋值, 可以显示学生的姓名和学号

class student
{
	//权限
public: 

	//类中的大户型和行为  我们统一称为  成员   以下属于专业术语
	//属性  可以称为  成员属性  成员变量
	//行为  可以称为  成员函数  成员方法


 
	//属性

	string m_Name;
	int m_Id;


	//行为
	void showStudent()
	{
		cout << "姓名  :" << m_Name << "  学号  :" << m_Id << endl;


	}

	//给姓名赋值

	void setname(string name)
	{
		m_Name = name;
	}

	//给学号赋值

	void setid(int  id)
	{
		m_Id = id;
	}
};

int main74() {

	//创建一个具体的学生    实例化对象

	student s1;

	//给s1对象 进行属性赋值操作

	//s1.m_Name = "张三";
	//s1.m_Id = 555;	
	
	s1.setname("张三");  //这是可以通过行为给属性赋值
	s1.setid(5525);  


	
	//显示学生信息

	s1.showStudent();
	
	student s2;

	s2.m_Name = "李四";
	s2.m_Id = 888;

	s2.showStudent();




	system("pause");

	return 0;

}