# include<iostream>
using namespace std;

//封装的意义

//设计一个圆类   求圆的周长

//圆求周长的公式: 2	* PI * 半径

const double PI = 3.14;

//class ( 可拉丝 ) 代表设计一个类,类后面紧跟着的就是类名称

class circle ////圆)   
{

	//访问权限
	//公共权限

	//怕不雷克
public:
	
	//属性
	//半径
	int m_r;


	//行为
	//获取圆的周长

	double calculateZC()
	{
		return 2 * PI * m_r;
	}

};

int main73() {


	//通过圆类  创建具体的圆(对象)
	//实例化   (通过一个类,创建一个对象的过程)

	circle c1;

	c1.m_r = 10;

	cout << "圆的周长为:  " << c1.calculateZC() << endl;

	//封装的意义 
	//在设计类的时候  属性和行为写在一起  表现事物
	//语法  class 类名 {  访问权限 :  属性 / 行为 } ;

	system("pause");

	return 0;

}