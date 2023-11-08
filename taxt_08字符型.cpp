# include<iostream>
using namespace std;

int main() {
	// 字符型创建方式
	char ch = 'a';
	cout << ch << endl;

	//字符型变量所占用内存大小

	cout << "char字符型变量所占用内存:" << sizeof(char) << endl;

	//字符型常见错误

	//char ch2 = "b"; //创建字符型变量的时候,只能用单引号

	//char ch2 = 'asdf';//这种写法也是错误的,单引号里只能存放一个字符


	system("pause");

	return 0;

}