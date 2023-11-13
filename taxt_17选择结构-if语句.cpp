# include<iostream>
using namespace std;

int main() {

	////1.用户输入分数
	//int score = 0;
	//cout << "请输入一个分数:" << endl;
	//cin >> score;

	////2.打印用户输入的分数
	//cout << "您输入的分数为:" <<score<< endl;

	////3.判断分数是否大于600,如果大于,那么输出
	////注意事项,if条件 后面不要加分号

	//if (score > 600)  //大于600分执行下面大括号中的内容
	//{
	//	cout << "恭喜您考上了一本大学" << endl;
	//}
	//else   //小于,执行else的内容
	//{
	//	cout << "抱歉,你没有考上一本大学" << endl;
	//}



	//多条件的if语句

	//int score2 = 0;
	//cout << "请输入您的考试分数:" << endl;

	//cin >> score2;

	//if (score2 > 600)
	//{
	//	cout << "恭喜您,考上了一本大学!" << endl;

	//	if (score2 > 500)
	//	{
	//		cout << "恭喜您,考上了二本大学!" << endl;

	//		if (score2 >= 400)
	//		{
	//			cout << "恭喜您,考上了三本大学!" << endl;


	//		}
	//	}
	//}
	//else (score2 < 400)
	//{
	//	cout << "恭喜您,考上了本科大学" << endl;
	//}
	//	上面这段是未看完视频写的
	// 
	// 
	// 	

	//int score3;
	//cout << "请输入您的考试分数:" << endl;
	//cin >> score3;
	//if (score3 > 600)
	//{
	//	cout << "恭喜您,考上了一本大学" << endl;
	//}
	//else if (score3 > 500)
	//{
	//	cout << "恭喜您,考上了二本大学" << endl;
	//}
	//else if (score3 > 400)
	//{
	//	cout << "恭喜您,考上了三本大学" << endl;
	//}
	//else //这里后面可以不用加上条件了,因为上面所有的条件都不满足了
	//	//这里这个else 用作于收尾的作用
	//{
	//	cout << "恭喜您,考上了本科大学" << endl;
	//}


	//接下来是if语句嵌套
	

	int score4;
	cout << "请输入您的考试分数:" << endl;
	cin >> score4;
	if (score4 > 600)
	{
		cout << "恭喜您,考上了一本大学" << endl;
		if (score4 > 700)
		{
			cout << "您能选择北京大学" << endl;
		}
		else if (score4 > 650)
		{
			cout << "您能选择清华大学" << endl;
		}
		else  
		{
			cout << "您能选择人民大学" << endl;
		}
	}
	else if (score4 > 500)
	{
		cout << "恭喜您,考上了二本大学" << endl;
	}
	else if (score4 > 400)
	{
		cout << "恭喜您,考上了三本大学" << endl;
	}
	else
	{
		cout << "恭喜您,考上了本科大学" << endl;
	}




	//练习案例
	//三只小猪称体重
	//有三只小猪

	system("pause");

	return 0;

}