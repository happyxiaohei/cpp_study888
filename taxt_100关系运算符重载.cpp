# include<iostream>
using namespace std;

//���ع�ϵ�����


class Person100
{

public:

	Person100(string name, int age)
	{

		m_Name = name;
		m_Age = age;
	}

	//����  == ��

	bool operator==(Person100& p)
	{

		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{

			return true;
		}
		return false;
	}

	//����  != ��

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

	Person100 p1("����", 18);
	//Person100 p2("����", 18);
	Person100 p2("����", 18);

	if (p1 == p2)
	{
		cout << "p1 �� p2 ����ȵ�" << endl;
	}
	else
	{

		cout << "p1 �� p2 �ǲ���ȵ�" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1 �� p2 �ǲ���ȵ�" << endl;
	}
	else
	{

		cout << "p1 �� p2 ����ȵ�" << endl;
	}

}
int main100() {

	test10001();


	system("pause");

	return 0;

}