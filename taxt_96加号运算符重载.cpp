# include<iostream>
using namespace std;


//�Ӻ����������


class Person9601
{

public:

//1.��Ա�������ؼӺ�

	//���صĹؼ�����    operator   Ŷ�ն�����  
	//Person9601 operator+ (Person9601& p)
	//{

	//	Person9601 temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}

	int m_A;
	int m_B;
};


//2.ȫ�ֺ������ؼӺ�

Person9601 operator+ (Person9601& p1, Person9601& p2)
{
	Person9601 temp;

	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	
	return temp;

}

//3.��������

Person9601 operator+ (Person9601& p1, int nuw)
{
	Person9601 temp;

	temp.m_A = p1.m_A + nuw;
	temp.m_B = p1.m_B + nuw;

	return temp;

}

void test9601()
{

	Person9601 p1;
	p1.m_A = 10;
	p1.m_B = 10;
	

	Person9601 p2;

	p2.m_A = 10;
	p2.m_B = 10;



	//��Ա�������صı��ʵ���
	//Person9601 p3 = p1.operator+(p2);

	//ȫ�ֺ������صı��ʵ���

	Person9601 p3 = operator+(p1, p2);

	
	
	
	//����ǼӺ����صļ�д��
	//Person9601 p3 = p1 + p2;
	
	//���������  Ҳ���Է�����������

	Person9601 p4 = p1 + 100;




	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;
	cout << "p3.m_A = " << p4.m_A << endl;
	cout << "p3.m_B = " << p4.m_B << endl;

	//�ܽ�  �������õ��������͵ı��ʽ��������ǲ����ܸı��     ��Ҫ�������������

}




int main() {

	test9601();


	system("pause");

	return 0;

}