# include<iostream>
using namespace std;

//�̳з�ʽ

//�����̳�
class Base1
{
public:
	int m_A;

protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1
{

	void func()
	{

		m_A = 10;  //�����еĹ���Ȩ�޳�Ա  ����������Ȼ�ǹ�����Ա
		m_B = 10;  //�����еı���Ȩ�޳�Ա  ����������Ȼ�Ǳ�����Ա
		//m_C = 10;  //�����е�˽��Ȩ�޳�Ա  ������ʲ���
	}
};


void test10301()
{

	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;   ����Son1 �� m_B�Ǳ���Ȩ��  ������ʲ���
	
	
}


//�����̳�
class Base2
{
public:
	int m_A;

protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2
{

	void func()
	{

		m_A = 100;  //�����еĹ���Ȩ�޳�Ա  �������б�Ϊ�Ǳ�����Ա
		m_B = 100;  //�����еı���Ȩ�޳�Ա  �������б�Ϊ�Ǳ�����Ա
		//m_C = 100;  //�����е�˽��Ȩ�޳�Ա  ������ʲ���
	}
};


void test10302()
{

	Son2 s2;
	//s2.m_A = 1000;   ��Son2   ��m_A��Ϊ������Ա, ���������ʲ���
	//s2.m_B = 1000;   ��Son2   ��m_B��Ϊ������Ա  ���������ʲ���


}

//˽�м̳�

class Base3
{
public:
	int m_A;

protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3
{

	void func()
	{

		m_A = 100;  //�����еĹ���Ȩ�޳�Ա  �������б�Ϊ��˽�г�Ա
		m_B = 100;  //�����еı���Ȩ�޳�Ա  �������б�Ϊ��˽�г�Ա
		//m_C = 100;  //�����е�˽��Ȩ�޳�Ա  ������ʲ���
	}
};


void test10303()
{

	Son3 s3;
	//s3.m_A = 1000;   ��Son3   ��m_A��Ϊ˽�г�Ա, ���������ʲ���
	//s3.m_B = 1000;   ��Son3   ��m_B��Ϊ˽�г�Ա  ���������ʲ���


}


class GrandSon3 :public Son3
{

public:

	void func()
	{

		//m_A = 1000;  // ����Son3��  m_A��Ϊ˽��,��ʹ�Ƕ���  Ҳ�Ƿ��ʲ���
		//m_B = 1000;  // ����Son3��  m_A��Ϊ˽��,��ʹ�Ƕ���  Ҳ�Ƿ��ʲ���
	}
};

int main103() {




	system("pause");

	return 0;

}