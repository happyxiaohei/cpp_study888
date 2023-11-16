# include<iostream>
using namespace std;

//time系统时间头文件包含
#include<ctime>
//这个也是在第一部的时候就添加好了的
int main21() {

	//1.系统生成随机数

	//添加随机数种子.作用是利用当前系统时间生成随机数,防止每次随机数都一样
	srand((unsigned int)time(NULL));
	// 
	//rand这个关键字是生成随机数的关键字
	int num = rand() % 100 + 1;  //rand()%100+1生成0+1~99+1之间的随机数
	//假如不添加随机数种子的话,随机生成的数字不会变,除非重新赋值才会重新产生随机数

	cout << num << endl;//在真的游戏中,这行输出代码可以取消掉,因为这样会直接显示出了结果

	//2.玩家进行猜测
	int val = 0;
	while (1)//这里这个一代表着真的意思,这样程序就会出现死循环,就可以一直让玩家一直踩,知道才对
	{
		cin >> val;	//3.判读玩家的猜测

		if (val > num)//4.玩家猜对,结束游戏,玩家猜错,给与提示过大或者过小,重新返回第二步.
		{
			cout << "猜测数字过大,请继续猜测" << endl;
		}
		else if (val < num)
		{
			cout << "猜测数字过小,请继续猜测" << endl;

		}
		else
		{
			cout << "恭喜您,猜对了,游戏结束" << endl;
			
			break;//break的作用是跳出循环的作用
		}
	}




	
	system("pause");

	return 0;

}