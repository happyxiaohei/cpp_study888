# include<iostream>
using namespace std;

int main34() {

	int arr[] = { 1,2,3 };

	//���д��������������Ԫ���ܳ���
	int end = sizeof(arr) / sizeof(arr[0]) ;

	//���д��������������Ԫ�ص��±�,�����ǳ���   �±���Ҫ -1  ��Ϊ�Ǵ�0��ʼ   ���ǳ��Ȳ���Ҫ
	// int end = sizeof(arr) / sizeof(arr[0]) -1 ;

	cout << "�����ڵ�Ԫ���ܳ�����:   " << end << endl;
	cout << "δ����ǰ��˳��:  " << endl;

	//���д�������ѭ���ȿ������ڵ�Ԫ������Щ
	for (int i = 0; i < end; i++)
	{
		cout << arr[i]<<"  ";
		
	}
	cout << endl;

	//��������ʼ����
	
	//���ѭ����   �ܹ���������ΪԪ�ظ��� -1  ����˼   
	//���������ѭ��   �����������
	for (int ls = 0; ls < end - 1; ls++)
	{
		//��������ʼ�ڲ�ѭ��
		// �����������    ���� = Ԫ�ظ��� -��ǰ���� -1 
		for (int cs = 0; cs < end -ls - 1; cs++)
		{
			//�����һ�����ֱȵڶ�����,��������
			if (arr[cs] < arr[cs + 1])    //���������������ĺ���,ȡ�����Լ����������ǽ���,���Ĵ�С�����Ϳ�����
			{
				int temp = arr[cs];
				arr[cs] = arr[cs + 1];
				arr[cs + 1] = temp;
			}
		}
	}
	cout << "������˳��Ϊ:  " << endl;

	for (int i = 0; i < end; i++)
	{
		cout << arr[i] << "  ";

	}
	cout << endl;
	system("pause");

	return 0;

}