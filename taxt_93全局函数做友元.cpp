# include<iostream>
using namespace std;
#include<string>

//������

class Building93
{
	//ȫ�ֺ����� ��Ԫ,��Ҫ����friend����������
	//��������Ԫ�Ĺؼ���   friend    ������   

	//goodGayȫ�ֺ�����Buliding �ĺ�����    ���Է���Buliding�е�˽�г�Ա
	friend void goodGay(Building93& building93);

public:

	Building93()
	{

		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

public:

	string m_SittingRoom;

private:
	
	string m_BedRoom;
};

//ȫ�ֺ���

void goodGay(Building93& building93)
{

	cout << "�û���ȫ�ֺ������ڷ��� :  " << building93.m_SittingRoom << endl;
	
	cout << "�û���ȫ�ֺ������ڷ��� :  " << building93.m_BedRoom << endl;

}

void test9301()
{

	Building93 building;
	goodGay(building);
}
int main() {

	test9301();
	

	system("pause");

	return 0;

}