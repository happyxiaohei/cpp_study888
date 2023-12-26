# include<iostream>
using namespace std;


//继承中的对象模型

class Base104
{

public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};

class Son :public Base104
{

public:

	int m_D;
};


//利用开发人员命令提示工具查看对象模型   vs2022文件夹中的第一个   哔站第129集
//跳转盘符  F;
//跳转文件路径 cd  具体路径下
//查看命名
//c1 /d1 reportSingleClassLayout类名  文件名
//

//总结,父类中私有成员也是被子类继承下去了,只是由编译器给隐藏后访问不到
void test10401()
{

	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有成员属性是被编译器给屏蔽了    因此是访问不到  但是确实被继承下去了
	cout << "sizeof Son  = " << sizeof(Son) << endl;
}
int main104() {

	test10401();


	system("pause");

	return 0;

}