# include<iostream>
using namespace std;

class p1
{
	int m_A;  //默认权限   是私有
};
struct p2
{
	int m_A;  //默认权限   是公共
};
int main76() {

	//struct   和 class  区别

	//struct   默认权限是公共   public
	//class    默认权限是私有   private

	p1  p11;
	//p11.m_A = 100;//在class  默认权限为私有  因此不可以访问

	p2  p22;
	p22.m_A = 100;    //在struct  默认权限为公共  因此可以访问
	system("pause");

	return 0;

}