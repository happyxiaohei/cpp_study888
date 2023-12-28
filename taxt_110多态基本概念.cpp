# include<iostream>
using namespace std;

//多态基本概念


//动物类
//父类
class Animal
{
public:

	virtual void speak()   //virtual   这个虚函数   加上虚函数后   就可以实现地址晚绑定
	{

		cout << "动物在说话!" << endl;
	}
};

//猫类  子类
class Cat :public Animal
{

public:
	//重写  函数返回值类型  函数名  参数列表 完全一直称为重写
	void speak()
	{

		cout << "小猫在说话!" << endl;
	}
};

//狗类  子类

class Dog :public Animal
{

public:

	void speak()
	{

		cout << "小狗在说话!" << endl;
	}
};


//地址早绑定  在编译阶段就确定函数地址
//如果想执行让猫说话   那么这个函数地址就不能提前绑定
//需要在运行阶段进行绑定,地址晚绑定

//动态多态满足条件
//1.有继承关系
//2.子类重写父类的虚函数

//动态多态使用
//父类的指针或者引用   指向子类对象

//执行说话的函数
void doSpeak(Animal &andimal)
{

	andimal.speak();
} 

void test11001()
{

	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);


}
int main110() {


	test11001();

	system("pause");

	return 0;

}