# include<iostream>
using namespace std;

int main18() {

	int a = 10;
	int b = 20;
	int c = 0;

	c=(a > b ? a : b);
	cout << "c=" << c << endl;
	//��δ���İ׻�����    
	//a�Ƿ����b  ��ôΪ��,��a��ֵ��ֵ��c,����b��ֵ��ֵ��c
	int aa = 330;
	int bb = 50;
	int cc = 0;

	cc = (aa > bb ? aa : bb);
	cout << "cc=" << cc << endl;


	//c++��  ��Ŀ��������ص��Ǳ���,�����Լ�����ֵ��
	(aa > bb ? aa : bb) = 100;
	cout << "aa=" << aa << endl;
	cout << "bb=" << bb << endl;
	system("pause");

	return 0;

}