# include<iostream>
using namespace std;

int main13() {
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//���������ദ�����Ȼ������

	int a2=10;
	int b2=20;
	cout << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;
	//cout << a3 / b3 << endl;//���д���ᱨ��,��Ϊ����������Ϊ0

	double a4= 0.5;
	double b4= 0.225;
	cout << a4 / b4 << endl;


	cout << "ȡģ�Ľ������:"<<a1 % b1 << endl;  //%�ٷֺž���ȡģ,����ȡģ����˼  ��������ģ��
	cout << "ȡģ�Ľ������:"<<a2 % b2 << endl;  //��ȡģ�����ʱ��,��������ʱ��  ����ǰ���ڸ���
	//cout << "ȡģ�Ľ������:"<<a3 % b3 << endl;  //��������ִ�е�ʱ��,��ֱ�ӳ��ֱ�������,ԭ���ǳ���������Ϊ0  ���Գ����ֱ�ӱ���
	//cout << "ȡģ�Ľ������:" << a4 % b4 << endl;// ��������Ҳ��ֱ�ӱ���. ȡģ�����ʱ��,�ǲ�������С������ȡģ
	//һ���õ�ȡģ�����ʱ��һ�㶼������������ʽ��������,

	//1.ǰ�õ���
	 int a = 10;
	 ++a;
	 cout<<"a = "<<a<<endl;
	 
	//2.���õݼ�
	 
	 int b = 10;
	 b++;
	 cout<<"b = "<<b<<endl;
	 
	//3.ǰ�úͺ��õ�����

	 //ǰ�õ���  �����ñ���+1  Ȼ����б��ʽ����
	 int aa = 10;
	 int bb = ++aa * 10;
	 cout << "aa = " << aa << endl;
	 cout << "bb = " << bb << endl;

	 //���õ���  ���Ƚ��б��ʽ����,Ȼ���ٱ���+1
	 int aa2 = 10;
	 int bb2 = aa2++ * 10;
	 cout << "aa2 = " << aa2 << endl;
	 cout << "bb2 = " << bb2 << endl;

	system("pause");

	return 0;

}