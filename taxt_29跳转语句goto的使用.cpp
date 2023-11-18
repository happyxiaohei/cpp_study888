# include<iostream>
using namespace std;

int main29() {


	cout << "1.xxxx" << endl;
	cout << "2.xxxx" << endl;
	cout << "3.xxxx" << endl;
	goto FDDA;    //后面的标记名称可以大写,也可以小写,但是为了方便阅读代码,一般还是选用大写来写
	//这个作用是在执行代码的时候,直接跳转到标记的位置,这里设置一个跳转的起始点,
	cout << "4.xxxx" << endl;
	cout << "5.xxxx" << endl;

	FDDA:
	cout << "6.xxxx" << endl;
	cout << "7.xxxx" << endl;
	//FDDA:   //这里是设定跳转的终点. 需要首尾的相互对应
	cout << "8.xxxx" << endl;

	//但是这个跳转语句建议少用,因为这样会影响代码流程的混乱

	system("pause");

	return 0;

}