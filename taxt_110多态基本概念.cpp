# include<iostream>
using namespace std;

//��̬��������


//������
//����
class Animal
{
public:

	virtual void speak()   //virtual   ����麯��   �����麯����   �Ϳ���ʵ�ֵ�ַ���
	{

		cout << "������˵��!" << endl;
	}
};

//è��  ����
class Cat :public Animal
{

public:
	//��д  ��������ֵ����  ������  �����б� ��ȫһֱ��Ϊ��д
	void speak()
	{

		cout << "Сè��˵��!" << endl;
	}
};

//����  ����

class Dog :public Animal
{

public:

	void speak()
	{

		cout << "С����˵��!" << endl;
	}
};


//��ַ���  �ڱ���׶ξ�ȷ��������ַ
//�����ִ����è˵��   ��ô���������ַ�Ͳ�����ǰ��
//��Ҫ�����н׶ν��а�,��ַ���

//��̬��̬��������
//1.�м̳й�ϵ
//2.������д������麯��

//��̬��̬ʹ��
//�����ָ���������   ָ���������

//ִ��˵���ĺ���
void doSpeak(Animal &andimal)
{

	andimal.speak();
} 

void test11001()
{

	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);


}
int main110() {


	test11001();

	system("pause");

	return 0;

}