# include<iostream>
using namespace std;

//����Ȩ��������
// ����Ȩ��  public  (�����׿�)         ��Ա��  ���ڿ��Է���   ������Է���
// ����Ȩ��  protected  (�ն�̫�����)  ��Ա��  ���ڿ��Է���   ���ⲻ���Է���   ����Ҳ���Է��ʸ����еı�������
// ˽��Ȩ��  private  (����V�)         ��Ա��  ���ڿ��Է���   ���ⲻ���Է���   ���Ӳ����Է��ʸ����е�˽������
//

class person
{

	//����Ȩ��
public:
	string m_Name;  //����

	//����Ȩ��
protected:
	string m_car;  //����

	//˽��Ȩ��
private:
	int m_password;  //���п�����


public:

	void func()
	{
		m_Name = "����";
		m_car = "������";
		m_password = 321654;
	}

};


int main75() {
	
	//ʵ�����������

	person p1;
	
	
	
	p1.m_Name =  "����";       //����Ȩ������  �������ǿ��Է��ʵ�
	
	//p1.car = "����;          //����Ȩ������  ��������ʲ���
	
	//p1.password  = 987654;   //˽��Ȩ������  ��������ʲ���


	system("pause");

	return 0;

}