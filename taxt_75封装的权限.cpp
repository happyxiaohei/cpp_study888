# include<iostream>
using namespace std;

//访问权限有三种
// 公共权限  public  (怕铺雷克)         成员在  类内可以访问   类外可以访问
// 保护权限  protected  (普尔太嗑雷特)  成员在  类内可以访问   类外不可以访问   儿子也可以访问父亲中的保护内容
// 私有权限  private  (普来V嗑)         成员在  类内可以访问   类外不可以访问   儿子不可以访问父亲中的私有内容
//

class person
{

	//公共权限
public:
	string m_Name;  //姓名

	//保护权限
protected:
	string m_car;  //汽车

	//私有权限
private:
	int m_password;  //银行卡密码


public:

	void func()
	{
		m_Name = "张三";
		m_car = "拖拉机";
		m_password = 321654;
	}

};


int main75() {
	
	//实例化具体对象

	person p1;
	
	
	
	p1.m_Name =  "李四";       //公共权限内容  在类外是可以访问的
	
	//p1.car = "奔驰;          //保护权限内容  在类外访问不到
	
	//p1.password  = 987654;   //私有权限内容  在类外访问不到


	system("pause");

	return 0;

}