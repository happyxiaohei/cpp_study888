# include<iostream>
using namespace std;

//�̳еĻ����﷨


//��ͨʵ��ҳ��

//Javaҳ��

//class Java
//{
//
//public:
//
//	void header()
//	{
//
//		cout << "��ҳ.������.��¼.ע��....(����ͷ��)" << endl;
//
//	}
//
//	void footer()
//	{
//
//		cout << "��������,��������,վ�ڵ�ͼ.....(�����ײ�)" << endl;
//	}
//
//	void left()
//	{
//
//		cout << "Java . Python . C++ .....(���������б�)" << endl;
//
//	}
//
//	void content()
//	{
//
//		cout << "Javaѧ����Ƶ" << endl;
//
//	}
//};
//
////Pythonҳ��
//
//class Python
//{
//
//public:
//
//
//	void header()
//	{
//
//		cout << "��ҳ.������.��¼.ע��....(����ͷ��)" << endl;
//
//	}
//
//	void footer()
//	{
//
//		cout << "��������,��������,վ�ڵ�ͼ.....(�����ײ�)" << endl;
//	}
//
//	void left()
//	{
//
//		cout << "Java . Python . C++ .....(���������б�)" << endl;
//
//	}
//
//	void content()
//	{
//
//		cout << "Pythonѧ����Ƶ" << endl;
//
//	}
//
//};
//
//
//class CPP
//{
//
//public:
//
//
//	void header()
//	{
//
//		cout << "��ҳ.������.��¼.ע��....(����ͷ��)" << endl;
//
//	}
//
//	void footer()
//	{
//
//		cout << "��������,��������,վ�ڵ�ͼ.....(�����ײ�)" << endl;
//	}
//
//	void left()
//	{
//
//		cout << "Java . Python . C++ .....(���������б�)" << endl;
//
//	}
//
//	void content()
//	{
//
//		cout << "CPPѧ����Ƶ" << endl;
//
//	}
//
//};


//�̳�ʵ��ҳ��

class BasePage
{

public:

	void header()
	{

		cout << "��ҳ.������.��¼.ע��....(����ͷ��)" << endl;

	}

	void footer()
	{

		cout << "��������,��������,վ�ڵ�ͼ.....(�����ײ�)" << endl;
	}

	void left()
	{

		cout << "Java . Python . C++ .....(���������б�)" << endl;

	}



};

//�̳еĺô����Ǽ����ظ�����
//�﷨:  class ���� : �̳з�ʽ ����  
//����  Ҳ��Ϊ ���� 
//����  Ҳ��Ϊ ������     
//�������еĳ�Ա,�������󲿷�   һ���Ǵӻ���̳й�����    һ�����Լ����ӵĳ�Ա
//�ӻ���̳й����ı����乲��,�������ĳ�Ա�����������


//Javaҳ��

class Java : public BasePage
{

public:

	void content()
	{

		cout << "Javaѧ����Ƶ" << endl;
	}

};

//Pythonҳ��

class Python : public BasePage
{

public:

	void content()
	{

		cout << "Javaѧ����Ƶ" << endl;
	}

};
//CPPҳ��

class CPP : public BasePage
{

public:

	void content()
	{

		cout << "Javaѧ����Ƶ" << endl;
	}

};
void test10201()
{

	cout << " Java������Ƶҳ������:  " << endl;

	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "----------------------------" << endl;
}

void test10202()
{

	cout << " Python������Ƶҳ������:  " << endl;

	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "----------------------------" << endl;
}

void test10203()
{

	cout << " CPP������Ƶҳ������:  " << endl;

	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();

	cout << "----------------------------" << endl;
}
int main102() {

	test10201();
	test10202();
	test10203();


	system("pause");

	return 0;

}
