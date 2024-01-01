# include<iostream>
using namespace std;
#include <string>;
//�ֱ�����ͨд���Ͷ�̬д��ʵ�ּ�����

//��ͨд��

class Calculator
{

public:

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}

		//�������չ�µĹ���  ��Ҫ�޸�Դ��
		//����ʵ�Ŀ�����   �ᳫ ����ԭ��
		//����ԭ�� : ����չ���п���   ���޸Ľ��йر�

	}

	int m_Num1;  //������1
	int m_Num2;  //������2
};

void test11101()
{

	//��������������

	Calculator c;
	c.m_Num1 = 50;
	c.m_Num2 = 50;
	 
	cout <<  c.m_Num1 << " + " <<  c.m_Num2 << " = " << c.getResult("+") << endl;
	cout <<  c.m_Num1 << " - " <<  c.m_Num2 << " = " << c.getResult("-") << endl;
	cout <<  c.m_Num1 << " * " <<  c.m_Num2 << " = " << c.getResult("*") << endl;

}

//���ö�̬ʵ�ּ�����
//��̬�ĺô�
//1.��֯�ṹ����
//2.�ɶ���ǿ
//3.����ǰ�ںͺ�����չ�Լ�ά���Ը�



//ʵ�ּ�����������

class  AbstractCalculator
{

public:

	virtual int getResult()
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};

//�ӷ���������

class AddCalculator :public AbstractCalculator
{

public:

	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//������������

class SubCalculator :public AbstractCalculator
{

public:

	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//�˷��������

class MulCalculator :public AbstractCalculator
{

public:

	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test11102()
{
	//��̬ʹ������
	//����ָ���������ָ���������

	//�ӷ�����
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 200;

	cout << abc->m_Num1 << " + " << abc->m_Num2 <<" = " << abc->getResult() << endl;

	//����ǵ�����
	delete abc;

	//��������
	abc = new SubCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 200;

	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;

	//�˷�����

	abc = new MulCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 200;

	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;

}

//C++�����ᳫ���ö�̬��Ƴ���ܹ�,��Ϊ��̬�ŵ�ܶ�

int main111() {

	//test11101();

	test11102();

	system("pause");

	return 0;

}