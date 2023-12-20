# include<iostream>
using namespace std;


//空指针调用成员函数

class person91
{

public:

	void showclassname()
	{
		cout << "this is person91 class" << endl;
	}

	void showpersonage()
	{

		//这行代码的意义就是为了防止乱传指针,造成代码出错.
		//也可以预防代码被破坏

		if (this == NULL)
		{
			return;

		}

		//报错的原因是因为传入了一个NULL(空)指针
		cout << "age = " <<this->m_age<< endl;


	}

	int m_age;
};

void test9101()
{
	person91* p = NULL;

	//这行代码运行的时候不会蹦
	//p->showclassname();

	//这行代码运行的时候会蹦
	//p->showpersonage();

}

int main91() {

	test9101();


	system("pause");

	return 0;

}