# include<iostream>
using namespace std;

//ð��������

               //����1��������׵�ַ,����2 ������ĳ���
void bubbleSort(int* arr, int len)
{
	for(int i = 0;i < len - 1;i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//���j>j+1��ֵ   ��������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
}

//��ӡ����ĺ���
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int main50() {


	//1.�ȴ�������

	int arr[] = { 5,8,2,3,6,9,7,22,5,6,77,582,1,23,14,1,11 };

	//����ĳ���
	int len = sizeof(arr) / sizeof(arr[0]);
	//2.��������,ʵ��ð������

	bubbleSort(arr, len);



	//3.��ӡ����������

	printArray(arr,len);






	system("pause");

	return 0;

}