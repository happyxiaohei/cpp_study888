# include<iostream>
using namespace std;

//����ͬ�����

class CPU  //����CPU��
{
public:
	virtual void calculate() = 0;
};

class VideoCard  //�����Կ���
{

public:
	virtual void display() = 0;
};

class Memory  //�����ڴ���
{
public:
	
	virtual void storage() = 0;
};

//������
class Computer  
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//�ṩ��������

	void work()
	{
		//�������������,���ýӿ�
		m_cpu->calculate();

		m_vc->display();

		m_mem->storage();
	}

	//�ṩ��������,�ͷ�3���������

	~Computer()
	{
		if (m_cpu != NULL)//�ͷ�CPU
		{

			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_vc != NULL)//�ͷ��Կ�
		{
			delete m_vc;
			m_vc = NULL;
		}

		if(m_mem != NULL)//�ͷ��ڴ���
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:

	CPU * m_cpu;  //CPU�����ָ��
	VideoCard* m_vc;//�Կ����ָ��
	Memory* m_mem;//�ڴ������ָ��
};


//���峧��
//Intel����

class IntelCPU :public CPU
{

public:

	virtual void calculate()
	{
		cout << "Intel��cpu��ʼ������" << endl;
	}
};


class IntelVideoCard :public VideoCard
{

public:

	virtual void display()
	{
		cout << "Intel���Կ���ʼ������" << endl;
	}
};

class IntelMemory :public Memory
{

public:

	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ������" << endl;
	}
};


//Lenovo ���볧��

class LenovoCPU :public CPU
{

public:

	virtual void calculate()
	{
		cout << "Lenovo��cpu��ʼ������" << endl;
	}
};


class LenovoVideoCard :public VideoCard
{

public:

	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ������" << endl;
	}
};

class LenovoMemory :public Memory
{

public:

	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ������" << endl;
	}
};

void test11501()
{
	//��һ̨�������
	cout << "��һ̨���Կ�ʼ������" << endl;

	CPU* intelCpu = new IntelCPU;
	VideoCard* intelVideoCard = new IntelVideoCard;
	Memory* intelMemory = new IntelMemory;

	//������һ̨����

	Computer* computer1 = new Computer(intelCpu, intelVideoCard, intelMemory);
	computer1->work();
	delete computer1;


	cout << "----------------------" << endl;
	

	//�����ڶ�̨����
cout << "�ڶ�̨���Կ�ʼ������" << endl;
	
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "----------------------" << endl;
	//��������̨����
	cout << "����̨���Կ�ʼ������" << endl;

	Computer* computer3 = new Computer(new IntelCPU, new LenovoVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;



}

int main115() {


	test11501();

	system("pause");

	return 0;

}