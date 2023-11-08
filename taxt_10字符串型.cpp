# include<iostream>
using namespace std;
#include<string> //用c++字符串风格的时候就得添加这个头文件

int main10() {

	//c语言风格字符串
	//注意事项,   char 字符串名后面要加[]中括号
	//字符串内容需要用双引号来包括
	char str1[] = "hello world";
	cout << str1 << endl;

	//c++风格字符串
	//这里需要注意,需要添加一个头文件   #include<string>
	

	string str2 = "hello world2";
	cout << str2 << endl;



	system("pause");

	return 0;

} 