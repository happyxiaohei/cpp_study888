# include<iostream>
using namespace std;

//����

//��c++����Ҫ����new�ڶ��������ڴ�


int* func()
{
	//����nwe�ؼ���  ���Խ����ݿ��ٵ�����
	//nwe�����Ǹ��������͵�ָ��
	int* p = new int(10);
	return p;
}

void test001()
{
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;

	//������ͷ��ڶ���������,���ùؼ���  delete
	delete p;   


}

void test002()
{
	//����10�������ݵ�����,�ڶ���

	int * arr = new int[10];   //�������10����������10��Ԫ��

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;    //�����Ǹ�10 ��Ԫ�ظ�ֵ
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//�ͷŶ�������

	delete[] arr;   //�ͷ������ʱ��,Ҫ��[]  �ſ���
}
int main63() {


	test001();

	test002();

	//�����������ɳ������Ա���ٺ��ͷ�   ��������nwe�ؼ��ֽ��п����ڴ�




















	system("pause");

	return 0;

}