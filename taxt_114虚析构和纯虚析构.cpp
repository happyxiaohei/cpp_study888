# include<iostream>
using namespace std;
#include <string>

//�������ʹ�������

class Animal114
{

public:

	Animal114()
	{
		cout << "Animal�Ĺ��캯������" << endl;
	}

	//���������� ���Խ������ָ���ͷ��������ʱ���ɾ�������
	//virtual ~Animal114()  // ����virtual �ؼ��ֵĻ�  �Ͳ��������������е���������   ~Cat114()   ����������Ĵ���
	//{
	//	cout << "Animal��������������" << endl;
	//}


	//�����Ǵ�������    ��Ҫ����Ҳ��Ҫʵ��
	// ���˴�������֮��,�����Ҳ���ڳ�����,�޷�ʵ�������� 
	virtual ~Animal114() = 0;
	

	//���麯��
	virtual void speak() = 0;

};

Animal114::~Animal114()
{

	cout << "Animal�Ĵ���������������" << endl;
}

class Cat114 : public Animal114
{

public:

	Cat114(string name)
	{
		cout << "Cat���캯������" << endl;
		m_Name = new string(name);
	}

	virtual void speak()
	{

		
		cout << *m_Name << "Сè��˵��" << endl;

	}

	~Cat114()
	{

		if (m_Name != NULL)
		{
			cout << "Cat����������" << endl;
			delete m_Name;
			m_Name = NULL;

		}
	}

	string *m_Name;
};

void test11401()
{

	Animal114* animal = new Cat114("Tom");
	animal->speak();

	//����ָ��������ʱ�� ���������������������,������������ж������� �����ڴ�й©
	delete animal;


}
int main114() {

	test11401();


	//�ܽ�,
	//1.�������������������������ͨ������ָ���ͷ��������
	//2.���������û�ж�������,���Բ�дΪ��������������
	//3.ӵ�д�����������Ҳ���ڳ�����


	system("pause");

	return 0;

}