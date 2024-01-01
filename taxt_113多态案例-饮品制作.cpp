# include<iostream>
using namespace std;

//��̬����    ������Ʒ

class AbstractDrinking
{

public:
	//��ˮ
	virtual void Boil() = 0;
	
	//����
	virtual void Brew() = 0;
	
	//���뱭��
	virtual void PourInCup() = 0;
	
	//��������
	virtual void PutSomething() = 0;

	//������Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();

	}
};

//��������
class Coffee :public AbstractDrinking
{
	//��ˮ
	virtual void Boil()
	{

		cout << "����ũ��ɽȪ" << endl;
	}

	//����
	virtual void Brew()
	{

		cout << "���ݿ���" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{

		cout << "���뱭��" << endl;
	}

	//��������
	virtual void PutSomething()
	{

		cout << "�����ǻ�ţ��" << endl;
	}


};

//������
class Tea :public AbstractDrinking
{
	//��ˮ
	virtual void Boil()
	{

		cout << "����ɽȪˮ" << endl;
	}

	//����
	virtual void Brew()
	{

		cout << "���ݲ�Ҷ" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{

		cout << "���뱭��" << endl;
	}

	//��������
	virtual void PutSomething()
	{

		cout << "�������ʻ������" << endl;
	}


};

//��������
void doWork(AbstractDrinking *abs)
{

	abs->makeDrink();
	delete abs;
}

void test11301()
{

	//��������
	doWork(new Coffee);  

	cout << "__________________"<<endl;

	//ִ�Ų�

	doWork(new Tea);
}
int main113() {


	test11301();

	system("pause");

	return 0;

}