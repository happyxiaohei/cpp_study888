# include<iostream>
using namespace std;

class p1
{
	int m_A;  //Ĭ��Ȩ��   ��˽��
};
struct p2
{
	int m_A;  //Ĭ��Ȩ��   �ǹ���
};
int main76() {

	//struct   �� class  ����

	//struct   Ĭ��Ȩ���ǹ���   public
	//class    Ĭ��Ȩ����˽��   private

	p1  p11;
	//p11.m_A = 100;//��class  Ĭ��Ȩ��Ϊ˽��  ��˲����Է���

	p2  p22;
	p22.m_A = 100;    //��struct  Ĭ��Ȩ��Ϊ����  ��˿��Է���
	system("pause");

	return 0;

}