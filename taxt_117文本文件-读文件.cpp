# include<iostream>
using namespace std;
#include<fstream>
#include<string>
void test11701()
{

	//1.����ͷ�ļ�

	//2.����������
	ifstream ifs;

	//3.���ļ������ж��Ƿ�򿪳ɹ�
	ifs.open("test11601�ļ�.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;


	}

	//4.������

	//��һ��

	char buf[1024] = { 0 };

	while (ifs >> buf)
	{
		cout << buf << endl;
	}

	//�ڶ���

	//char buf[1024] = { 0 };

	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//������

	//string buf;

	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	//������
	//char c;
	//while ((c = ifs.get())!= EOF)  //EOF  ����˼��  ���û�ж����ļ�β  ��һֱ��
	//{
	//	cout << c;
	//}

	//�����ֲ��Ƽ�


	//5.�ر��ļ�
	ifs.close();
}
int main() {

	//�ܽ�
	//���ļ���������ifstream  ����fstream ��
	//����is_open���������ж��ļ��Ƿ�򿪳ɹ�
	//close�ر��ļ�

	test11701();

	system("pause");

	return 0;

}