# include<iostream>
using namespace std;

class person90
{

public:

	person90(int age)
	{
		//thisָ��ָ�� �����õĳ�Ա���� �����ĺ���
		this->age = age;    
	}

	//������粻��person90&�������õĻ�,��ô���ص�ֵ�Ǵ�����һ���µ�ֵ,�����Ƿ����ۼӺ��ֵ

	person90& personaddage(person90 &p)
	//person90 personaddage(person90 &p)
	{

		this->age += p.age;

		//thisָ��p2��ָ��,��*thisָ��ľ���p2�������ı���
		return *this;
	}
	int age;
};


//1.������Ƴ�ͻ

void test9001()
{

	person90 p1 (18);
	cout << "p1������Ϊ:  " << p1.age << endl;
}

//2. ���ض�������*this

void test9002()
{

	person90 p1(10);
	
	
	person90 p2(10);

	//��ʽ���˼��
	p2.personaddage(p1).personaddage(p1).personaddage(p1);
	cout << "p2������Ϊ:  " << p2.age << endl;
}


int main90() {


	//test9001();

	test9002();

	system("pause");

	return 0;

}