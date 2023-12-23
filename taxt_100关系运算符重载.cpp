# include<iostream>
using namespace std;

//重载关系运算符


class Person100
{

public:

	Person100(string name, int age)
	{

		m_Name = name;
		m_Age = age;
	}

	//重载  == 号

	bool operator==(Person100& p)
	{

		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{

			return true;
		}
		return false;
	}

	//重载  != 号

	bool operator!=(Person100& p)
	{

		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{

			return false;
		}
		return true;
	}
	string m_Name;
	int m_Age;
};

void test10001()
{

	Person100 p1("张三", 18);
	//Person100 p2("张三", 18);
	Person100 p2("李四", 18);

	if (p1 == p2)
	{
		cout << "p1 和 p2 是相等的" << endl;
	}
	else
	{

		cout << "p1 和 p2 是不相等的" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1 和 p2 是不相等的" << endl;
	}
	else
	{

		cout << "p1 和 p2 是相等的" << endl;
	}

}
int main100() {

	test10001();


	system("pause");

	return 0;

}