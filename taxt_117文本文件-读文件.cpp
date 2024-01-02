# include<iostream>
using namespace std;
#include<fstream>
#include<string>
void test11701()
{

	//1.包含头文件

	//2.创建流对象
	ifstream ifs;

	//3.打开文件并且判断是否打开成功
	ifs.open("test11601文件.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;


	}

	//4.读数据

	//第一种

	char buf[1024] = { 0 };

	while (ifs >> buf)
	{
		cout << buf << endl;
	}

	//第二种

	//char buf[1024] = { 0 };

	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//第三种

	//string buf;

	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	//第四种
	//char c;
	//while ((c = ifs.get())!= EOF)  //EOF  的意思是  如果没有读到文件尾  就一直读
	//{
	//	cout << c;
	//}

	//第四种不推荐


	//5.关闭文件
	ifs.close();
}
int main() {

	//总结
	//读文件可以利用ifstream  或者fstream 类
	//利用is_open函数可以判断文件是否打开成功
	//close关闭文件

	test11701();

	system("pause");

	return 0;

}