# include<iostream>
using namespace std;

//��Ա��������Ԫ
class Building9501;

class GoodGay9501
{

public:

	GoodGay9501();

	void visit();  //��visit�������Է���Building��˽�г�Ա
	void visit2();  //��visit2���������Է���Building��˽�г�Ա

	Building9501* building9501;
};

class Building9501
{

	//���߱�����    GoodGay���е�visit��Ա����  ��Building���еĺ�����   ���Է���˽������
	friend void GoodGay9501::visit();  //������ص�   ���������visit2�е����ݵĻ�   �����¸���Ȩ�޾Ϳ�����

public:

	Building9501();

public:

	string m_SittingRoom;  //����

private:

	string m_BenRoom;  //����

};

Building9501::Building9501()
{

	m_SittingRoom = "����";
	m_BenRoom = "����";

}

GoodGay9501::GoodGay9501()
{

	building9501 = new Building9501;

}

void GoodGay9501::visit()
{
	cout << "visit �������ڷ���:  " << building9501->m_SittingRoom << endl;
	cout << "visit �������ڷ���:  " << building9501->m_BenRoom << endl;

}

void GoodGay9501::visit2()
{

	cout << "visit2 �������ڷ���:  " << building9501->m_SittingRoom << endl;

	//cout << "visit2 �������ڷ���:  " << building9501->m_BenRoom << endl;

}

void test9501()
{

	GoodGay9501 gg;
	gg.visit();
	gg.visit2();
}
int main95() {


	test9501();

	system("pause");

	return 0;

}