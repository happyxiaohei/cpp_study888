# include<iostream>
using namespace std;
#include<string>

//1.����ѧ����������   ѧ������(����,����,����)
//�Զ�����������,һЩ���ͼ������һ������
//�﷨   struct  ��������   {��Ա�б�}
struct Student
{
	//��Ա�б�

	string name;

	int age;

	int score;
}s3;





//2.ͨ��ѧ�������ʹ��������ѧ��


int main() {

	//�ṹ��Ķ����ʹ��




//1.  struct  Student s1  
Student s1;     //struct  ����ؼ��ֿ����ڴ���������ʱ��ʡ��

	s1.name = "����";
	s1.age = 18;
	s1.score = 100;

	cout << "����  " << s1.name << "����   " << s1.age << "����  " << s1.score << endl;
//2.  struct  Student s2 = {  ��ʼ��ֵ }
	struct Student s2 = { "����",19,80 };

	cout << "����  " << s2.name << "����   " << s2.age << "����  " << s2.score << endl;
//3.�ڶ���ṹ��ʱ˳�㴴������

	s3.name = "����";
	s3.age = 28;
	s3.score = 30;


	cout << "����  " << s3.name << "����   " << s3.age << "����  " << s3.score << endl;





	//�����ֶ���ķ���   һ������ǰ����,�����ַ���һ�����Լ�д�Ĵ�����ܿ��Ķ�

	//ע��,�ڶ����ʱ��  struct ������ʡ��     �ṹ���������  "."  "��"  ������ŷ��ʳ�Ա










	system("pause");

	return 0;

}