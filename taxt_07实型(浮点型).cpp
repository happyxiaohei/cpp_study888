#include <iostream>
using namespace std;


//������   float
//˫����   bouble
//Ĭ�������, ���һ��С��,����ʾ��6λ��Ч����
int main07() {

	float f1 = 3.1415926f;

	cout << "f1 = " << f1 <<  endl;
	double f2 = 3.1415926;
	cout << "f2 = " << f2 << endl;

	cout << "float = " << sizeof(float) << endl;
	cout << "double = " << sizeof(double) << endl;
	system("pause");

	return 0;
}