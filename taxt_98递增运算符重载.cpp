# include<iostream>
using namespace std;

//���ص��������

class MyInteger
{

	friend ostream& operator <<(ostream& cout, MyInteger myint);

public:
	MyInteger ()
	{

		m_Num = 0;
	}

	
	//���� ǰ��++ �����      ��������Ϊ��һֱ��һ�����ݽ��е�������
	
	MyInteger& operator++()   
	{
		//�Ƚ���++
		m_Num++;
		
		//�ٽ�����������
		return *this;
	}
	
	//���� ����++ �����     
	//void operator++(int)    int ����ռλ����,������������ǰ�úͺ��õ���

	//���õ������ص�һ���Ǿֲ������ֵ    ǰ�õ������ص�һ��������
	MyInteger operator++(int)
	{
		//��   ��¼��ʱ���

		MyInteger temp = *this;


		//��  ����
		m_Num++;

		//��󽫼�¼���������

		return temp;
	}

	//���� ǰ��-- �����

	MyInteger& operator--()
	{

		m_Num--;
		return *this;
	}

	
	//���� ����-- �����

	MyInteger operator--(int)
	{
		MyInteger temp01 = *this;

		m_Num--;

		return temp01;

	}

private:

	int m_Num;
};



//����<<���������

ostream& operator <<(ostream& cout, MyInteger myint)
{

	cout << myint.m_Num<<endl;
		return cout;
}

void test9801()
{

	MyInteger myint;

	cout << ++(++myint) << endl;   
	cout << myint << endl;    

}

void test9802()
{
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;

}

void test9803()
{

	MyInteger myint;

	cout << --(--myint) << endl;
	cout << myint << endl;
}

void test9804()
{

	MyInteger myint;

	cout << myint-- << endl;
	cout << myint << endl;
}

//�ܽ� ǰ�õ�������  ����,   ���õ�������  ֵ
int main98() {

	//test9801();   //ǰ�õ���

	//int a = 0;
	//cout << ++(++a) << endl;
	//cout << a << endl;


	//test9802();  //���õ���

	test9803();  //ǰ�õݼ�

	test9804();  //���õݼ�
	system("pause");

	return 0;

}