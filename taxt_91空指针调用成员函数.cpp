# include<iostream>
using namespace std;


//��ָ����ó�Ա����

class person91
{

public:

	void showclassname()
	{
		cout << "this is person91 class" << endl;
	}

	void showpersonage()
	{

		//���д�����������Ϊ�˷�ֹ�Ҵ�ָ��,��ɴ������.
		//Ҳ����Ԥ�����뱻�ƻ�

		if (this == NULL)
		{
			return;

		}

		//�����ԭ������Ϊ������һ��NULL(��)ָ��
		cout << "age = " <<this->m_age<< endl;


	}

	int m_age;
};

void test9101()
{
	person91* p = NULL;

	//���д������е�ʱ�򲻻��
	//p->showclassname();

	//���д������е�ʱ����
	//p->showpersonage();

}

int main91() {

	test9101();


	system("pause");

	return 0;

}