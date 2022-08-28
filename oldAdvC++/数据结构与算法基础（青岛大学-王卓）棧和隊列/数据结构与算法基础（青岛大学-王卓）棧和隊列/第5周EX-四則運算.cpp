#include <iostream>
#include <string>
using namespace std;

//�����Y����B���a
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

#define MAXSIZE 100

typedef string SElemType;
typedef int Status;

typedef struct Stack
{
	SElemType* top;
	SElemType* base;
	int Stacksize;
};

Status initStack(Stack& S)
{
	S.base = new SElemType[MAXSIZE];
	if (!S.base)
		return ERROR;
	S.top = S.base;
	S.Stacksize = MAXSIZE;
	return ERROR;
}

Status PushStack(Stack& S,SElemType e)
{
	if (S.top - S.base == S.Stacksize)
		return ERROR;
	*S.top++ = e;
	return OK;
}

Status PopStack(Stack& S, SElemType& e)
{
	if (S.top == S.base)
		return ERROR;
	e = *(--S.top);
	return OK;
}

Status DeleteStack(Stack& S)
{
	if (S.base)
	{
		delete[] S.base;
		S.top = NULL;
		S.base = NULL;
	}
	return OK;
}

Status GetTop(Stack& S, SElemType& e)
{
	if (S.top == S.base)
		return ERROR;
	e = *(S.top - 1);
	return OK;
}

int StackLength(Stack S) {
	return S.top - S.base;
}

//�Ąt�\��
/*
* Ҏ�t�������ұ�v���_ʽ�Ĕ��ֺͷ�̖���������־��M�Y����
	������̖���͌��ȗ�픃ɂ����ֳ������M�в��������M����һֱ�� ��K�@�ýY����
*/

string fourMath(Stack &S)
{
	string str = "";//���딵��
	string res = "";//��Y���_ʽ
	string oper_name = "+-*/()"; //Ҫʹ�÷�̖

	bool is_oper = false;
	while (1)
	{
		cin >> str;
		if (str == "end")
			break;
		for (int i = 0; i < oper_name.length(); i++)
		{
			if (str[0] == oper_name[i]) {
				//���\����r��is_oper��true
				is_oper = true;
				break;
			}
		}

		//���@���\����ĕr��
		if (is_oper)
		{
			SElemType topelem;
			GetTop(S, topelem);

			string e = "";
			if (str == ")")
			{
				//����̖�� ) �r����ֱ�� ( ǰ���ַ�ݔ���Mres
				while (PopStack(S, e) != ERROR && e != "(")
				{
					res += e + " ";
				}
			}
			//����픷�̖�ă��ȼ���춮�ǰ��̖�r
			else if ((topelem == "*" || topelem == "/") && (str == "+" || str == "-"))
			{
				while (PopStack(S, e) != ERROR)
				{
					res += e + " ";
				}
				PushStack(S, str);
			}
			else
			{
				PushStack(S, str);
			}
		}
		else
		{
			res += str + " ";
		}
		is_oper = false;
	}
	string e = "";
	while (PopStack(S, e) != ERROR)
	{
		res += e + " ";
	}
	//���ء���Y���_ʽ��
	return res;
}

double CalcTwoElem(Stack& S, char oper)
{
	SElemType e1, e2;
	PopStack(S, e1);
	PopStack(S, e2);

	double v1 = stod(e1);
	double v2 = stod(e2);
	switch (oper)
	{
	case '+':
		return v2 + v1;
	case '-':
		return v2 - v1;
	case '*':
		return v2 * v1;
	case '/':
		return v2 / v1;
	}
	return 0; 
}

void PrintResult(Stack& S, string str)
{
	string tmp = "";//�����̖
	string oper_name = "+-*/()"; //Ҫʹ�÷�̖
	int j = 0;
	for (int i = 0; i < str.length(); i++)
	{
		while (str[j] != ' ')
			tmp += str[j++];
		if (tmp[0] != '+' && tmp[0] != '-' && tmp[0] != '*' && tmp[0] != '/')
		{
			PushStack(S, tmp);
		}
		else
		{
			SElemType e = to_string(CalcTwoElem(S, tmp[0]));
			cout << "CalcTwoElem: " << e << endl;
			PushStack(S, e);
		}

		tmp = "";
		j++;
		i = j;
	}
	//Ӌ���^�ᣬ��ʣ�µ�Ԫ�ر���
	PopStack(S, tmp);
	cout << "�𰸞�: " << tmp << endl;
}

int main()
{
	Stack S;
	initStack(S);
	cout << "Ոݔ��һ�оY���_ʽ��һ��һ��Ԫ ( ݔ��end����ݔ����� )��" << endl;
	string str = fourMath(S);
	cout << "��Y���_ʽ��" << str << endl;
	PrintResult(S, str);
	DeleteStack(S);
	return 0;
}