# include<iostream>
using namespace std;

//����

//��c++����Ҫ����new�ڶ��������ڴ�


int* func()
{
	//����nwe�ؼ���  ���Խ����ݿ��ٵ�����
	int* p = new int(10);
	return p;
}
int main() {


	int* p = func();

	cout << *p << endl;
	cout << *p << endl;


	//�����������ɳ������Ա���ٺ��ͷ�   ��������nwe�ؼ��ֽ��п����ڴ�




















	system("pause");

	return 0;

}