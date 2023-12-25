# include<iostream>
using namespace std;

//继承的基本语法


//普通实现页面

//Java页面

//class Java
//{
//
//public:
//
//	void header()
//	{
//
//		cout << "首页.公开课.登录.注册....(公共头部)" << endl;
//
//	}
//
//	void footer()
//	{
//
//		cout << "帮助中心,交流合作,站内地图.....(公共底部)" << endl;
//	}
//
//	void left()
//	{
//
//		cout << "Java . Python . C++ .....(公共分类列表)" << endl;
//
//	}
//
//	void content()
//	{
//
//		cout << "Java学科视频" << endl;
//
//	}
//};
//
////Python页面
//
//class Python
//{
//
//public:
//
//
//	void header()
//	{
//
//		cout << "首页.公开课.登录.注册....(公共头部)" << endl;
//
//	}
//
//	void footer()
//	{
//
//		cout << "帮助中心,交流合作,站内地图.....(公共底部)" << endl;
//	}
//
//	void left()
//	{
//
//		cout << "Java . Python . C++ .....(公共分类列表)" << endl;
//
//	}
//
//	void content()
//	{
//
//		cout << "Python学科视频" << endl;
//
//	}
//
//};
//
//
//class CPP
//{
//
//public:
//
//
//	void header()
//	{
//
//		cout << "首页.公开课.登录.注册....(公共头部)" << endl;
//
//	}
//
//	void footer()
//	{
//
//		cout << "帮助中心,交流合作,站内地图.....(公共底部)" << endl;
//	}
//
//	void left()
//	{
//
//		cout << "Java . Python . C++ .....(公共分类列表)" << endl;
//
//	}
//
//	void content()
//	{
//
//		cout << "CPP学科视频" << endl;
//
//	}
//
//};


//继承实现页面

class BasePage
{

public:

	void header()
	{

		cout << "首页.公开课.登录.注册....(公共头部)" << endl;

	}

	void footer()
	{

		cout << "帮助中心,交流合作,站内地图.....(公共底部)" << endl;
	}

	void left()
	{

		cout << "Java . Python . C++ .....(公共分类列表)" << endl;

	}



};

//继承的好处就是减少重复代码
//语法:  class 子类 : 继承方式 父类  
//父类  也称为 基类 
//子类  也称为 派生类     
//派生类中的成员,包含两大部分   一类是从基类继承过来的    一类是自己增加的成员
//从基类继承过来的表现其共性,而新增的成员体现了其个性


//Java页面

class Java : public BasePage
{

public:

	void content()
	{

		cout << "Java学科视频" << endl;
	}

};

//Python页面

class Python : public BasePage
{

public:

	void content()
	{

		cout << "Java学科视频" << endl;
	}

};
//CPP页面

class CPP : public BasePage
{

public:

	void content()
	{

		cout << "Java学科视频" << endl;
	}

};
void test10201()
{

	cout << " Java下载视频页面如下:  " << endl;

	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "----------------------------" << endl;
}

void test10202()
{

	cout << " Python下载视频页面如下:  " << endl;

	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "----------------------------" << endl;
}

void test10203()
{

	cout << " CPP下载视频页面如下:  " << endl;

	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();

	cout << "----------------------------" << endl;
}
int main102() {

	test10201();
	test10202();
	test10203();


	system("pause");

	return 0;

}
