# include<iostream>
using namespace std;


//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class person8801
{

public:

	static void func()
	{
		m_A = 100;  //  ��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 200;  // ��̬��Ա����   �����Է��ʷǾ�̬��Ա����  ,,�޷����ֵ������ĸ������m_B������
		cout << "static void func����" << endl;
	}

	static int m_A;  //��̬��Ա����
	int m_B;    //�Ǿ�̬��Ա����


	//��̬��Ա����Ҳ���з���Ȩ�޵�

private:

	static void func2()
	{

		cout << "static void func����" << endl;
	}
};

 int person8801::m_A = 0;

//�����ַ��ʷ�ʽ
void test8701()
{
	//1.ͨ���������

	person8801 p;
	p.func();
	//2.ͨ����������
	person8801::func();

	//person8801::func2();    ������ʲ���˽�еľ�̬��Ա����
}
int main88() {


	test8701();

	system("pause");

	return 0;

}