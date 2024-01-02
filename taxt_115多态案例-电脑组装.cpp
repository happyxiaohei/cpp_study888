# include<iostream>
using namespace std;

//抽象不同零件类

class CPU  //抽象CPU类
{
public:
	virtual void calculate() = 0;
};

class VideoCard  //抽象显卡类
{

public:
	virtual void display() = 0;
};

class Memory  //抽象内存类
{
public:
	
	virtual void storage() = 0;
};

//电脑类
class Computer  
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//提供工作函数

	void work()
	{
		//让零件工作起来,调用接口
		m_cpu->calculate();

		m_vc->display();

		m_mem->storage();
	}

	//提供析构函数,释放3个电脑零件

	~Computer()
	{
		if (m_cpu != NULL)//释放CPU
		{

			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_vc != NULL)//释放显卡
		{
			delete m_vc;
			m_vc = NULL;
		}

		if(m_mem != NULL)//释放内存条
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:

	CPU * m_cpu;  //CPU的零件指针
	VideoCard* m_vc;//显卡零件指正
	Memory* m_mem;//内存条零件指针
};


//具体厂商
//Intel厂商

class IntelCPU :public CPU
{

public:

	virtual void calculate()
	{
		cout << "Intel的cpu开始工作了" << endl;
	}
};


class IntelVideoCard :public VideoCard
{

public:

	virtual void display()
	{
		cout << "Intel的显卡开始工作了" << endl;
	}
};

class IntelMemory :public Memory
{

public:

	virtual void storage()
	{
		cout << "Intel的内存条开始工作了" << endl;
	}
};


//Lenovo 联想厂商

class LenovoCPU :public CPU
{

public:

	virtual void calculate()
	{
		cout << "Lenovo的cpu开始工作了" << endl;
	}
};


class LenovoVideoCard :public VideoCard
{

public:

	virtual void display()
	{
		cout << "Lenovo的显卡开始工作了" << endl;
	}
};

class LenovoMemory :public Memory
{

public:

	virtual void storage()
	{
		cout << "Lenovo的内存条开始工作了" << endl;
	}
};

void test11501()
{
	//第一台电脑零件
	cout << "第一台电脑开始工作了" << endl;

	CPU* intelCpu = new IntelCPU;
	VideoCard* intelVideoCard = new IntelVideoCard;
	Memory* intelMemory = new IntelMemory;

	//创建第一台电脑

	Computer* computer1 = new Computer(intelCpu, intelVideoCard, intelMemory);
	computer1->work();
	delete computer1;


	cout << "----------------------" << endl;
	

	//创建第二台电脑
cout << "第二台电脑开始工作了" << endl;
	
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "----------------------" << endl;
	//创建第三台电脑
	cout << "第三台电脑开始工作了" << endl;

	Computer* computer3 = new Computer(new IntelCPU, new LenovoVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;



}

int main115() {


	test11501();

	system("pause");

	return 0;

}