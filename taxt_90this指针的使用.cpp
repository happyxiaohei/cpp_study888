# include<iostream>
using namespace std;

class person90
{

public:

	person90(int age)
	{
		//this指针指向 被调用的成员函数 所属的函数
		this->age = age;    
	}

	//这里假如不用person90&不用引用的话,那么返回的值是创建了一个新的值,而不是返回累加后的值

	person90& personaddage(person90 &p)
	//person90 personaddage(person90 &p)
	{

		this->age += p.age;

		//this指向p2的指针,而*this指向的就是p2这个对象的本体
		return *this;
	}
	int age;
};


//1.解决名称冲突

void test9001()
{

	person90 p1 (18);
	cout << "p1的年龄为:  " << p1.age << endl;
}

//2. 返回对象本身用*this

void test9002()
{

	person90 p1(10);
	
	
	person90 p2(10);

	//链式编程思想
	p2.personaddage(p1).personaddage(p1).personaddage(p1);
	cout << "p2的年龄为:  " << p2.age << endl;
}


int main90() {


	//test9001();

	test9002();

	system("pause");

	return 0;

}