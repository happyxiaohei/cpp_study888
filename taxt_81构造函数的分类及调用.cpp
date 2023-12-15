# include<iostream>
using namespace std;

//1.构造函数的分类及调用

//分类
 
//   按照参数分类  分为无参(默认构造)  和  有参

//   按照类型分类   普通构造   拷贝构造

class Person222
{

public:
	Person222()
	{
		cout << "Person222 无参构造函数的调用" << endl;
	}

	Person222( int a )
	{

		age = a;
		cout << "Person222 有参构造函数的调用" << endl;

	}

	//拷贝构造函数

	Person222(const Person222 &p)   //这是拷贝构造函数的标准写法
	{
		//将传入的人身上的所有属性,拷贝到我身上

		cout << "Person222 拷贝构造函数的调用" << endl;
		age = p.age;
		
	}


	~Person222()
	{
		cout << "Person222 析构函数的调用" << endl;
	}

	int age;
};


void test222()
{

	//1.括号法

	Person222 p1;   //默认构造函数调用
	Person222 p2(20);   //有参构造函数调用
	Person222 p3(p2);  //拷贝构造函数调用
	
	//cout << "p2的年龄为:  " << p2.age << endl;
	//cout << "p3的年龄为:  " << p3.age << endl;  
	// 
	// 注意事项  
	// 调用默认构造函数的时候,不要加小括号
	// Person222 p1()  这样写编译器会认为是一个函数的声明

	
	//2.显示法

	Person222 p11;
	Person222 p22 = Person222(10);  //有参构造
	Person222 p33 = Person222(p22);  //拷贝构造

	Person222(200);//匿名对象  特点:当前行执行结束后,系统会立即回收掉匿名对象

	//注意事项
	//不要利用拷贝构造函数 来初始化匿名对象
	//Person222 p33;

	cout << "aaaaa" << endl;
	
	//3.隐式转换法

	Person222 p44 = 10;  //相当于写了  Person222 p44 = Person222(10);
	Person222 p55 = p44;  //拷贝构造
}

//这三种方法调用   一般常用的是第一种方法调用 

//调用
int main81() {

	test222();


	system("pause");

	return 0;

}