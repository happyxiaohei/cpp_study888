# include<iostream>
using namespace std;
#include<string>

struct student
{
	
	string name;  //����
	int age;  //����
	int score;  //����
};



//��ӡѧ����Ϣ

//1.ֵ����
void printStudent1(struct student s)
{
	s.age = 50;
	cout << "���Ӻ���1�д�ӡ  ����: " << s.name << " ���� :" << s.age << " ����: " << s.score << endl;

}

//2.��ַ����

void printStudent2(struct student * p)
{
	p->age = 900;
	cout << "���Ӻ���2�д�ӡ  ����: "<<p->name<< " ���� :" << p ->age<< " ����: " <<p ->score << endl;
}

int main55() {


	//�ṹ������������

	//��ѧ�����뵽һ��������,��ӡѧ�����ϵ�������Ϣ

	//�����ṹ�����

	struct student s;

	s.name = "����";
	s.age = 18;
	s.score = 88;



	printStudent1(s);    //ֵ���ݲ������main�����е�����
	
	cout << "��main �����д�ӡ  ����: " << s.name << " ���� :" << s.age << " ����: " << s.score << endl;


	printStudent2(&s);     //��ַ���ݻ����main�����е�����

	cout << "��main �����д�ӡ  ����: " << s.name << " ���� :" << s.age << " ����: " << s.score << endl;


//�ܽ�   ��������޸��������е�����,��ô��ֵ����,��֮�õ�ַ����














	system("pause");

	return 0;

}