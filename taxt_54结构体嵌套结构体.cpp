# include<iostream>
using namespace std;
#include<string>

//�ṹ��Ƕ�׽ṹ��

//�ڽṹ���п��Զ�����һ���ṹ����Ϊ��Ա,�������ʵ������

//�ȶ���ѧ���ṹ��
struct student
{
	string name; //����
	int age;//����
	int score;//����

};

//�ٶ�����ʦ�Ľṹ��
struct teacher
{
	int id;   //��ʦ���
	string name;  //��ʦ����
	int age;//����
	

	struct student stu;   //������ѧ��
};


int main54() {

	//������ʦ

	teacher t;
	//��ʼ���ṹ������
	

	//��ʼ����ʦ�Ľṹ��
	t.id = 5555;
	t.name = "����";
	t.age = 88;
	
	//��ʼ��ѧ���Ľṹ��
	t.stu.name = "С��";
	t.stu.age = 18;
	t.stu.score = 66;

	cout << "��ʦ������: " << t.name << "  "
		<< "��ʦ�ı��:" << t.id << "  "
		<< "��ʦ������:" << t.age << "  " << endl;

	cout << "ѧ��������: " << t.stu.name << "  "
		<< "ѧ��������:" << t.stu.age << "  "
		<< "ѧ���ķ���:" << t.stu.score << "  " << endl;























	system("pause");

	return 0;

}