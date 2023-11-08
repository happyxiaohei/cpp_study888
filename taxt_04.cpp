#include <iostream>
using namespace std;

//常量的定义方式
#define DAY 7

int main04()
{
	//DAY = 14;   这里会直接报错,因为DAY是常量,一旦重新定义就会报错

	cout << "一周共有" << DAY << "天" << endl;

	//const修饰的变量

	const int month = 12;
	//month = 24;       这里会直接报错,const修饰的变量也称为常量

	cout << "一年共有" << month << "个月份" << endl;


	system("pause");

	return 0;
}