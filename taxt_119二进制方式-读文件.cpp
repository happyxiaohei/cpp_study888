# include<iostream>
using namespace std;
#include<fstream>


class Person119
{

public:

	char m_Name[64];  //姓名

	int m_Age;  //年龄
};

//二进制文件  读文件

void test11901()
{

	//1.包含头文件

//2.创建流对象
	ifstream ifs("taxt_118 person118.txt", ios::in | ios::binary);

	//3.打开文件  判断是否打开成功
	// 
	//ifs.open("person.txt", ios::in|ios::binary);

	if (!ifs.is_open())
	{
		cout << "文件打开失败!" << endl;
		return;
	}

	//4.读文件


	Person119 p;

	ifs.read((char*)&p, sizeof(Person119));    //通过read函数,以二进制方式读数据

	cout << "姓名:  "<<p.m_Name << endl;
	cout << "年龄:  "<<p.m_Age << endl;

	//5.关闭文件
	ifs.close();

}

int main119() {

	test11901();


	system("pause");

	return 0;

}