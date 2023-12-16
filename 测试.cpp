# include<iostream>
using namespace std;

class clone
{
public:

	clone(string name)
	{
		z_name = name;
	
	}

	//品牌
	string z_name;

};


class person
{
public:


	//clone C_name = Cname;
	person(string name, string Cname) :m_name(name), C_name(Cname)
	{
		
	}
	//姓名
	string m_name;
	//衣服
	clone C_name;

};

void test3()
{

	person p1("张三", "华为");
	cout << "name:" << p1.m_name << endl;
	cout << "Cname:" << p1.C_name.z_name << endl;


}
int main88()
{



	test3();

	system("pause");
	return 0;

}