# include<iostream>
using namespace std;


//�̳��еĶ���ģ��

class Base104
{

public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};

class Son :public Base104
{

public:

	int m_D;
};


//���ÿ�����Ա������ʾ���߲鿴����ģ��   vs2022�ļ����еĵ�һ��   ��վ��129��
//��ת�̷�  F;
//��ת�ļ�·�� cd  ����·����
//�鿴����
//c1 /d1 reportSingleClassLayout����  �ļ���
//

//�ܽ�,������˽�г�ԱҲ�Ǳ�����̳���ȥ��,ֻ���ɱ����������غ���ʲ���
void test10401()
{

	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�г�Ա�����Ǳ���������������    ����Ƿ��ʲ���  ����ȷʵ���̳���ȥ��
	cout << "sizeof Son  = " << sizeof(Son) << endl;
}
int main104() {

	test10401();


	system("pause");

	return 0;

}