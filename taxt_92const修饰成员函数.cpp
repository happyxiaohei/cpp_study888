# include<iostream>
using namespace std;


//������


class person92
{

public:

	//thisָ��ı���   ��ָ�볣��  ָ���ָ���ǲ������޸ĵ�
	//����ĺ�����˼����ɴ������˼��    const person02 * const this 
	//�ڳ�Ա���������const,���ε���thisָ��,��ָ��ָ���ֵҲ�������޸�
	
	void showperson92() const
	{

		this -> m_B = 100;
		//this->m_A = 100;
		//this = NULL;  //this ָ�벻�����޸�ָ���ָ��
	}

	void func()
	{


	}


	int m_A;

	//�������޸ĳ������еı����Ļ�   ��ǰ�����  mutable   (ţ�ز�)  ����ؼ���
	mutable int m_B; //�������,��ʹ�ڳ�������,Ҳ�����޸����ֵ
	
};

void test9201()
{

	person92 p1;
	p1.showperson92();
}


//������


void test9202()
{

	const person92 p2;  //�ڶ���ǰ���const,��Ϊ������
	
	//p2.m_A = 100;//
	
	p2.m_B = 100;//  m_B������ֵ ,  �ڳ�������Ҳ�����޸�

	
	//������ֻ�ܵ��ó�����

	//p2.func();   //������  �����Ե�����ͨ��Ա����,��Ϊ��ͨ��Ա���������޸�����


}

int main92() {




	system("pause");

	return 0;

}