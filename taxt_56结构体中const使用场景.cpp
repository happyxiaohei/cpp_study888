# include<iostream>
using namespace std;
#include<string>

//const��ʹ�ó���


struct student
{

	string name;  //����
	int age;  //����
	int score;  //����
};

//�������е��βθ�Ϊָ��,�ɼ����ڴ�ռ�,���Ҳ��Ḵ���µĸ�������

//void pringStdents(student s)
//{
//	cout << " ����:  " << s.name << " ����: " << s.age << " ����:  " << s.score << endl;
//}
//
//void pringStdents2(student *s)
//{
//	s->age = 888;
//	cout << " ����:  " << s->name << " ����: " << s->age << " ����:  " << s->score << endl;
//}

void pringStdents3(const student *s)
{
	//s->age = 9999;  //����const֮��,һ�����޸ĵĲ����ͻᱨ��,��ֹ���ǵ������
	cout << " ����:  " << s->name << " ����: " << s->age << " ����:  " << s->score << endl;
}

int main56() {


	//�����ṹ�����

	struct student s = { "����",15,77 };


	//ͨ��������ӡ�ṹ�������Ϣ
 
	//pringStdents(s);
	//cout << " ��main������ ����:  " << s.name << " ����: " << s.age << " ����:  " << s.score << endl;


	//pringStdents2(&s);


	//cout << " ��main������ ����:  " << s.name << " ����: " << s.age << " ����:  " << s.score << endl;


	pringStdents3(&s);


	cout << " ��main������ ����:  " << s.name << " ����: " << s.age << " ����:  " << s.score << endl;



















	system("pause");

	return 0;

}