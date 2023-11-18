# include<iostream>
using namespace std;

int main28() {


	//continue 跳转语句的使用    啃提牛


	
	for (int i = 0; i < 100; i++)
	{

		//如果是偶数,则不输出
		if (i % 2 == 0)
		{
			continue;//  可以筛选条件, 执行到此,就不在向下执行,然后重新执行下一次的循环
			//和break的区别在于,break会直接退出整个循环体,而continue会继续执行循环体内的代码
		}
		cout << i << endl;

	}


	system("pause");

	return 0;

}