# include<iostream>
using namespace std;

class Base105
{
public:

	Base105()
	{
		cout << "Base���캯��" << endl;
	}

	~Base105()
	{
		cout << "Base��������" << endl;
	}
};

class Son105 :public	Base105
{

public:

	Son105()
	{

		cout << "Son���캯��" << endl;
	}

	~Son105()
	{
		cout << "Son��������" << endl;
	}
};

void test10501()
{

	//Base105 b;

	//�̳��еĹ������������
	//
	//�ȹ��츸��,�ٹ�������  ,������˳���빹���˳���෴

	//�̳���,�ȵ��ø��๹�캯��,�ٵ������๹�캯��,����˳���빹���෴
	Son105 s;


}
int main105() {


	test10501();

	system("pause");

	return 0;

}