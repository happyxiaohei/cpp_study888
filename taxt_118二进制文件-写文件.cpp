# include<iostream>
using namespace std;
#include<fstream>

//二进制文件  写文件

class Person118
{

public:

	char m_Name[64];  //姓名

	int m_Age;  //年龄
};

void test11801()
{

	//1.包含头文件

	//2.创建流对象
	ofstream ofs("taxt_118 person118.txt", ios::out | ios::binary);   //这个方式也可以打开文件   第二第三步可以合并

	//3.打开文件
	//ofs.open("person.txt", ios::out|ios::binary);


	//4.写文件
	Person118 p = { "张三",18 };
	ofs.write((const char*)&p, sizeof(Person118));
	//5.关闭文件
	ofs.close();
}

int main119() {

	test11801();
	//总结: 文件输出流对象可以通过write函数,以二进制方式写数据

	system("pause");

	return 0;

}