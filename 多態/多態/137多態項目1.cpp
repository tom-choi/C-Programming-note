#include <iostream>
#include <string>

using namespace std;

class Calculator
{
public:
	int m_Num1;
	int m_Num2;
	
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//要擴展功能，需要修改源碼
		//開閉擴展
	}
};

class AbstractCalculator
{
public:
	int m_Num1;
	int m_Num2;

	virtual int getResult()
	{
		return 0;
	}
};

//加法
class AddCalculator : public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//減法
class SubCalculator : public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}

};
//乘法
class MulCalculator : public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}

};




void test01()
{
	Calculator test;
	test.m_Num1 = 100;
	test.m_Num2 = 900;
	cout << test.m_Num1 << " + " << test.m_Num2 << " = " << test.getResult("+") << endl;

	cout << test.m_Num1 << " - " << test.m_Num2 << " = " << test.getResult("-") << endl;

	cout << test.m_Num1 << " * " << test.m_Num2 << " = " << test.getResult("*") << endl;
}

void test02()
{
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;

	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete[]abc;

	abc = new SubCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete[]abc;
}


int main()
{
	test02();
	return 0;
}