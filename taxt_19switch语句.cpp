# include<iostream>
using namespace std;

int main19() {
	//1.提示打分
	cout << "请给电影进行打分" << endl;
	//2.用户开始打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为: " << endl;

	//3.根据用户输入的分数来给出最后的结论

	switch (score)
	{
	case 10:

	case 9:
		cout << "您认为是经典电影" << endl;
		break;//这是结束这个分支的意思
	case 8:

	case 7:
		cout << "您认为是好电影" << endl;
		break;
	case 6:

	case 5:
		cout << "您认为是一般电影" << endl;
		break;
	default:
		cout << "您认为这是烂片" << endl;
		break;
	}

	//注意     在switch语句中 表达式的类型只能是整型或者字符型
	//case中假如不加break  那么程序会一直向下执行
	//相比较于if语句,多条件判断的时候 switch语句执行效率更高   但是不能区间判断   但是简化写的话也是可以做到区间判断

	system("pause");

	return 0;

}