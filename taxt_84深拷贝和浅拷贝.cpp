# include<iostream>
using namespace std;

//��� ��ǳ����

class Penson555
{

public:

	Penson555()
	{

		cout << "Person555 ��Ĭ�Ϲ��캯������" << endl;
	}

	Penson555(int age , int height)
	{

		m_aeg = age;

		m_Height = new int(height);
		cout << "Person555 ���вι��캯������" << endl;
	}

	//�Լ�ʵ�ֿ������캯��   ���ǳ��������������

	Penson555(const Penson555 &p)
	{
		cout << "Person555 �Ŀ������캯���ĵ���" << endl;
		m_aeg = p.m_aeg;

		//m_Height = p.m_Height;   //��δ����Ǳ�����Ĭ��ʵ�ֵĴ���

		//�������

		   
		m_Height = new int(*p.m_Height);



	}

	~Penson555()
	{
		//��������,���������ٵ��������ͷŲ���

		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person555 ��������������" << endl;
	}

	int m_aeg;  //����
	int *m_Height; //���
};

void test55501()
{

	Penson555 p1(88,180);

	cout << "p1������Ϊ:   " << p1.m_aeg  <<"p1�����Ϊ:  " << *p1.m_Height << endl;

	Penson555 p2(p1);
	cout << "p2������Ϊ:   " << p2.m_aeg << "p2�����Ϊ:  " << *p2.m_Height << endl;

}
int main84() {

	test55501();

	//ǳ�����������������  �������ڴ��ظ��ͷ�
	
	//ǳ����������Ҫ����������н��

	//�ܽ�     
	//ǳ����  �Ǽ򵥵ĸ�ֵ��������
	//���  ���ڶ�����������ռ�,���п�������

	//����������ڶ������ٵ�    һ��Ҫ�Լ��ṩ�������캯��  ��ֹǳ��������������
	system("pause");

	return 0;

}