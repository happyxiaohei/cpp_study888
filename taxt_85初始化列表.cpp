# include<iostream>
using namespace std;


//��ʼ���б�

class Penson666
{

public:

	 //���Ǵ�ͳ�ĳ�ʼ������
	//Penson666(int a,int b,int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}


	//��ʼ���б��ʼ������

	Penson666(int a ,int b,int c) :m_A(a),m_B(b),m_C(c) {}


	int m_A;
	int m_B;
	int m_C;
};

void test666()
{
	//Penson666 p(55, 88, 22);


	Penson666 p(22,88,55);


	cout << "  m_A = " << p.m_A <<  endl;
	cout << "  m_B = " << p.m_B << endl;
	cout << "  m_C = " << p.m_C << endl;
}
int main() {

	test666();


	system("pause");

	return 0;

}