# include<iostream>
using namespace std;

void func(int& ref)
{
	ref = 100;   //ref������,ת��Ϊ*ref = 100
}

int main67() {


	int a = 10;

	//�Զ�ת��Ϊ int* const ref = &a; ָ�볣����ָ��ָ�򲻿ɸ�,Ҳ˵����Ϊʲô���ò��ɸ�
	int& ref = a;
	ref = 20;  //�ڲ�����ref��ͻ���岻��,�Զ�������ת��Ϊ: *ref = 20;

	cout << "a = " << a << endl;
	cout << "ref = " << ref << endl;

	func(a);


	


	//c++�Ƽ������ü���,��Ϊ�﷨����,���ñ�����ָ�볣��,�������е�ָ�����������������������
	 
















	system("pause");

	return 0;

}