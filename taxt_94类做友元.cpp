# include<iostream>
using namespace std;


//������Ԫ
class Building;


class GoodGay
{

public:
	GoodGay();

	void visit();  //�ιۺ���  ����Building�е�����
	Building* building;

};

class Building
{
	
	//���߱�����,GoodGay����Building��ĺ�����, ���Է����ʵ�Buliding���е�˽�г�Ա
	friend class GoodGay;

	
public:

	Building();    


public:

	string m_SittingRoom;  //����

private:

	string m_BedRoom;  //����

};

//����д��Ա����

Building::Building()
{

	m_SittingRoom = "����";

	m_BedRoom = "����";

}

GoodGay::GoodGay()
{

	//�������������

	building = new	Building;    //�൱���ڶ�������һ������

}


void GoodGay::visit()
{

	cout << "�û��������ڷ���:  " << building->m_SittingRoom << endl;
	cout << "�û��������ڷ���:  " << building->m_BedRoom << endl;


}


void test9401()
{

	GoodGay gg;

	gg.visit();


}
int main94() {

	test9401();


	system("pause");

	return 0;

}