# include<iostream>
using namespace std;

//���μ̳�

//������

class Animal
{
public:
	int m_Age;
};

//������̳�  ������μ̳е�����
// �̳�֮ǰ���Ϲؼ���  virtual ��Ϊ��̳�
// Animal���Ϊ �����
//����

class Sheep:virtual  public Animal {};

//����

class Tuo:virtual public Animal{};

//������

class SheepTuo:public Sheep,public Tuo{};



void test10901()
{

	SheepTuo st;

	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 228;

	//�����μ̳�,��������ӵ����ͬ����,��Ҫ��������������
	cout << "st.Sheep::m_Age =" << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age =" << st.Tuo::m_Age  << endl;
	cout << "st.m_Age = " << st.m_Age << endl;

	//�����������֪��,ֻҪ��һ�ݾͿ���,���μ̳е������������� �����Դ�˷�

}

int main() {


	test10901();

	system("pause");

	return 0;

}