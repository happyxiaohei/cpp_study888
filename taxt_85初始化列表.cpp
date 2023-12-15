# include<iostream>
using namespace std;


//初始化列表

class Penson666
{

public:

	 //这是传统的初始化操作
	//Penson666(int a,int b,int c)
	//{
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//}


	//初始化列表初始化属性

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