# include<iostream>
using namespace std;

int main22() {

	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);

	//do...while循环和while循环的区别在于,
	//do..while循环会先执行一遍循环内容,然后再来判断循环条件
	//而while循环是先判断循环条件,然后再开始执行循环内容
	system("pause");

	return 0;

}