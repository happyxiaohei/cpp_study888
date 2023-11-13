# include<iostream>
using namespace std;

int main17() {

	// ! 非   &&与   ||  或
	cout << "1为真,0为假" << endl;
	int a = 10;
	//在C++中  除了0 都为真
	cout << "逻辑非=" << !a << endl;

	cout << "逻辑非=" << !!a << endl;

	//  真变假  假变真

	//--------------------------------------------


	int b = 10;
	int c = 10;
	
	cout << "逻辑与=" << (b && c) << endl;


	 b = 0;
	 c = 10;

	 cout << "逻辑与=" << (b && c) << endl;

	b = 0;
	c = 0;

	cout << "逻辑与=" << (b && c) << endl; 

	//   同真为真,其余为假




	//--------------------------------------------------------

	int q = 10;
	int w = 10;

	cout <<"逻辑或="<< (q || w) << endl;
	
	q = 0;
	w = 10;
	cout << "逻辑或=" << (q || w) << endl;

	q = 0;
	w = 0;
	cout << "逻辑或=" << (q || w) << endl;

	//  同假为假,其余为真
	system("pause");

	return 0;

}