# include<iostream>
using namespace std;

//多态案例    制作饮品

class AbstractDrinking
{

public:
	//煮水
	virtual void Boil() = 0;
	
	//冲泡
	virtual void Brew() = 0;
	
	//倒入杯中
	virtual void PourInCup() = 0;
	
	//加入作料
	virtual void PutSomething() = 0;

	//制作饮品
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();

	}
};

//制作咖啡
class Coffee :public AbstractDrinking
{
	//煮水
	virtual void Boil()
	{

		cout << "倒入农夫山泉" << endl;
	}

	//冲泡
	virtual void Brew()
	{

		cout << "冲泡咖啡" << endl;
	}

	//倒入杯中
	virtual void PourInCup()
	{

		cout << "倒入杯中" << endl;
	}

	//加入作料
	virtual void PutSomething()
	{

		cout << "加入糖或牛奶" << endl;
	}


};

//制作茶
class Tea :public AbstractDrinking
{
	//煮水
	virtual void Boil()
	{

		cout << "倒入山泉水" << endl;
	}

	//冲泡
	virtual void Brew()
	{

		cout << "冲泡茶叶" << endl;
	}

	//倒入杯中
	virtual void PourInCup()
	{

		cout << "倒入杯中" << endl;
	}

	//加入作料
	virtual void PutSomething()
	{

		cout << "加入柠檬或者枸杞" << endl;
	}


};

//制作函数
void doWork(AbstractDrinking *abs)
{

	abs->makeDrink();
	delete abs;
}

void test11301()
{

	//制作咖啡
	doWork(new Coffee);  

	cout << "__________________"<<endl;

	//执着茶

	doWork(new Tea);
}
int main113() {


	test11301();

	system("pause");

	return 0;

}