# include<iostream>
using namespace std;
#include<fstream>//假如要操作文件第一步就先添加这个头文件   是操作文件三大类中的第三个

void test11601()
{

	//1.包含头文件   
	//2.创建流对象
	ofstream ofs;   //这里相当于要创建写文件的操作流对象   所以用的是ofstream   

	//3.打开文件
	ofs.open("test11601文件.txt", ios::out);  //open 英文是打开的意思
	
	//4.写数据
	ofs << "写文件的第一个文件.txt" << endl;
	ofs << "姓名:张三" << endl;
	ofs << "性别:男" << endl;
	ofs << "年龄:18" << endl;

	//5.关闭文件
	ofs.close();


}
int main116() {

	test11601();

	//操作文件三大类
	// 1.ofstream   写操作
	// 2.ifstream   读操作
	// 3.fstream    读写操作
	// 
	// 文件步骤如下
	// 1.包含头文件
	// #include<fstream>
	// 
	// 2.创建流对象
	// ofstream ofs    (后面的名称和变量名一样  可以自定义名称)
	// 
	// 3.打开文件
	// ofs.open("文件路径",打开方式);
	// 
	// 4.写数据
	// ofs<<"写入的数据"<<endl; 
	// 
	// 5.关闭文件
	//  ofs.close();
	// 
	// 
	// 打开方式有
	// 1.ios::in   为读文件而打开文件
	// 2.ios::out  为写文件而打开文件
	// 3.ios::ate  初始位置:文件尾
	// 4.ios::app  追加方式写文件
	// 5.ios::trunc 如果文件存在先删除 ,在创建
	// 6.ios::binary 二进制方式
	// 
	// 注意  文件打开方式可以配合使用,利用"|" (或)
	// //例如:ios::binary|ios::out
	//
	// 
	// 总结:
	// 文件操作必须包含头文件
	// 读文件可以利用ofstream,或者fstream类
	// 打开文件的时候需要制定操作文件的路径,以及打开方式
	// 利用<<可以向文件中写数据
	// 操作完毕,要关闭文件
	//  
	//



	system("pause");

	return 0;

}