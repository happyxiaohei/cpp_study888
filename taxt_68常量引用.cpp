# include<iostream>
using namespace std;

//��ӡ����
void showValue(const int& val)
{

	//val = 1000;
	cout << "val = " << val <<endl;
}
int main68() {


	//��������

	//ʹ�ó���:���������β�,��ֹ�����

	//int a = 10;

	//����const֮��,�������������޸� int temp = 10; cpmst int &ref = temp;
	const int& ref = 10;  //���ñ�������һ��Ϸ����ڴ�ռ�
	//ref = 20;  //����const ֮���Ϊֻ��,�����޸�


	int a = 10;
	
	showValue(a);



















	system("pause");

	return 0;

}