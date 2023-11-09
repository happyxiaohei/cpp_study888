# include<iostream>
using namespace std;
#include<string>//string头文件   得包含后才能使用这个关键字   新版本后这个头文件也可以不用

int main12() {
	//这里发现一个小问题,就是文件里的中文字数少的时候,上传github的时候中文会显示成乱码的情况,但是解决方法是,不用管它,当文件里的中文字数变多了后就恢复正常了

	//1.整型
	//int a = 0;
	//cout << "请给整型变量A赋值:" << endl;
	//cin >> a;
	//cout << "整型变量A:" <<a<< endl;


	//2.浮点型
	//float b= 0;
	//cout << "请给浮点型变量A赋值:" << endl;
	//cin >> b;
	//cout << "浮点型变量A:" << b << endl;
	
	//3.字符型
	//char ch = 0;
	//cout << "请输入字符型变量" << endl;
	//cin >> ch;
	//cout << ch << endl;
	
	//4.字符串型
	//string str = "hello";
	//cout << "请输入字符串型变量" << endl;
	//cin >> str;
	//cout << "字符串str=" << str << endl;

	
	//5.布尔类型
	bool flag = false;
	cout << "请给布尔类型flag赋值" << endl;
	cin >> flag;//bool类型  只要是非0的值都代表真
	cout << "布尔类型flag=" << flag << endl;

	//cin  这个是输入的关键词   
	system("pause");

	return 0;

}