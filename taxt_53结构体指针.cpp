# include<iostream>
using namespace std;

//�ṹ��ָ��


//����ѧ���ṹ��

struct student
{
	string name;  // ����
	int age;  //����
	int score;  //����

};

int main53() {


	//����ѧ���ṹ�����

	struct student s = { "����ķ",18,58 };  //ע�� ����ǰ�����struct����ؼ�����main������д��ʱ���ǿ���ʡ�Ե�


	//ͨ��ָ��ָ��ṹ�����

	struct student *p = &s;


	//ͨ��ָ����ʽṹ������е�����

	//ͨ���ṹ��ָ�� ���ʽṹ���е�����  ��Ҫ ->  (�� ���� ) ����������   ��Ƽ�ͷ����˼ ������
	cout << " ����:  " << p->name << " ����:  " << p->age << " ����:  " << p->score << endl;




















	system("pause");

	return 0;

}