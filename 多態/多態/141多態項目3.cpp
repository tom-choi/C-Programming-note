#include <iostream>
#include <string>

using namespace std;

class CPU
{
public:
	virtual void caculate() = 0;
};
class GPU
{
public:
	virtual void display() = 0;
};
class Memory
{
public:
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(CPU* cpu, GPU* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	void work()
	{
		//調用接口
		m_cpu->caculate();
		m_vc->display();
		m_mem->storage();
	}
	//~Computer()
	//{
	//	if (m_cpu != NULL)
	//	{
	//		delete[]m_cpu;
	//		m_cpu = NULL;
	//	}
	//	if (m_vc != NULL)
	//	{
	//		delete[]m_vc;
	//		m_vc = NULL;
	//	}
	//	if (m_mem != NULL)
	//	{
	//		delete[]m_mem;
	//		m_mem = NULL;
	//	}
	//}
private:
	CPU* m_cpu{};
	GPU* m_vc{};
	Memory* m_mem{};
};

class InterCPU : public CPU
{
public:
	virtual void caculate()
	{
		cout << "Intel的CPU開始計算!\n";
	}
};
class InterGPU : public GPU
{
public:
	virtual void display()
	{
		cout << "Intel的GPU開始計算!\n";
	}
};
class InterMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel的內存開始計算!\n";
	}
};

class LenovoCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo的CPU開始計算!\n";
	}
};
class LenovoGPU : public GPU
{
public:
	virtual void display()
	{
		cout << "Lenovo的GPU開始計算!";
	}
};
class LenovoMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的內存開始計算!";
	}
};

void test01()
{
	CPU* intelcpu = new InterCPU;
	GPU* intelcard = new InterGPU;
	Memory* intelcMem = new InterMemory;
	
	Computer* computer1 = new Computer(intelcpu,intelcard, intelcMem);
	computer1->work();
	delete computer1;
}


int main()
{
	test01();
	return 0;
}