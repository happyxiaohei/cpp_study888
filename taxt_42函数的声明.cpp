# include<iostream>
using namespace std;

//����������,
//�ȽϺ���,ʵ�������������ֽ��бȽ�,���ؽϴ��ֵ



//�����Ǻ�������
//��������ǰ���߱����������Ĵ���,�������ú���������

int max(int a, int b);

//��������������д���,���Ǻ����Ķ���ֻ����һ��
//������������εĻ�   �����ֱ�ӳ��ֱ���

int main42() {


	int a = 100;
	int b = 200;
	cout << max(a, b) << endl;


	system("pause");

	return 0;

}

//�����Ǻ����Ķ���
int max(int a, int b)
{
	return  a > b ? a : b;
}
