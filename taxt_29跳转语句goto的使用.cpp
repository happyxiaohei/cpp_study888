# include<iostream>
using namespace std;

int main29() {


	cout << "1.xxxx" << endl;
	cout << "2.xxxx" << endl;
	cout << "3.xxxx" << endl;
	goto FDDA;    //����ı�����ƿ��Դ�д,Ҳ����Сд,����Ϊ�˷����Ķ�����,һ�㻹��ѡ�ô�д��д
	//�����������ִ�д����ʱ��,ֱ����ת����ǵ�λ��,��������һ����ת����ʼ��,
	cout << "4.xxxx" << endl;
	cout << "5.xxxx" << endl;

	FDDA:
	cout << "6.xxxx" << endl;
	cout << "7.xxxx" << endl;
	//FDDA:   //�������趨��ת���յ�. ��Ҫ��β���໥��Ӧ
	cout << "8.xxxx" << endl;

	//���������ת��佨������,��Ϊ������Ӱ��������̵Ļ���

	system("pause");

	return 0;

}