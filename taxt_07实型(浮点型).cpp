#include <iostream>
using namespace std;


//单精度   float
//双精度   bouble
//默认情况下, 输出一个小数,会显示出6位有效数字
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