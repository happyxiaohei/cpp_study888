# include<iostream>
using namespace std;

int main19() {
	//1.��ʾ���
	cout << "�����Ӱ���д��" << endl;
	//2.�û���ʼ���
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ: " << endl;

	//3.�����û�����ķ������������Ľ���

	switch (score)
	{
	case 10:

	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;//���ǽ��������֧����˼
	case 8:

	case 7:
		cout << "����Ϊ�Ǻõ�Ӱ" << endl;
		break;
	case 6:

	case 5:
		cout << "����Ϊ��һ���Ӱ" << endl;
		break;
	default:
		cout << "����Ϊ������Ƭ" << endl;
		break;
	}

	//ע��     ��switch����� ���ʽ������ֻ�������ͻ����ַ���
	//case�м��粻��break  ��ô�����һֱ����ִ��
	//��Ƚ���if���,�������жϵ�ʱ�� switch���ִ��Ч�ʸ���   ���ǲ��������ж�   ���Ǽ�д�Ļ�Ҳ�ǿ������������ж�

	system("pause");

	return 0;

}