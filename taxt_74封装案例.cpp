# include<iostream>
using namespace std;

//���һ��ѧ����,������������ѧ��,
//���Ը�������ѧ�Ÿ�ֵ, ������ʾѧ����������ѧ��

class student
{
	//Ȩ��
public: 

	//���еĴ��ͺ���Ϊ  ����ͳһ��Ϊ  ��Ա   ��������רҵ����
	//����  ���Գ�Ϊ  ��Ա����  ��Ա����
	//��Ϊ  ���Գ�Ϊ  ��Ա����  ��Ա����


 
	//����

	string m_Name;
	int m_Id;


	//��Ϊ
	void showStudent()
	{
		cout << "����  :" << m_Name << "  ѧ��  :" << m_Id << endl;


	}

	//��������ֵ

	void setname(string name)
	{
		m_Name = name;
	}

	//��ѧ�Ÿ�ֵ

	void setid(int  id)
	{
		m_Id = id;
	}
};

int main74() {

	//����һ�������ѧ��    ʵ��������

	student s1;

	//��s1���� �������Ը�ֵ����

	//s1.m_Name = "����";
	//s1.m_Id = 555;	
	
	s1.setname("����");  //���ǿ���ͨ����Ϊ�����Ը�ֵ
	s1.setid(5525);  


	
	//��ʾѧ����Ϣ

	s1.showStudent();
	
	student s2;

	s2.m_Name = "����";
	s2.m_Id = 888;

	s2.showStudent();




	system("pause");

	return 0;

}