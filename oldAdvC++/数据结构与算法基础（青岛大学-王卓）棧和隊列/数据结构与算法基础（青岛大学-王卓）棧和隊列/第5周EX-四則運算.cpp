#include <iostream>
#include <string>
using namespace std;

//函數結果狀態代碼
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

//四則運算
/*
* 規則：從左到右遍歷表達式的數字和符號，遇到數字就進結果，
	遇到符號，就將等棧頂兩個數字出棧，進行操作，行進棧，一直到 最終獲得結果。
*/

string fourMath(Stack &S)
{
	string str = "";//存入數字
	string res = "";//後綴表達式
	string oper_name = "+-*/()"; //要使用符號

	bool is_oper = false;
	while (1)
	{
		cin >> str;
		if (str == "end")
			break;
		for (int i = 0; i < oper_name.length(); i++)
		{
			if (str[0] == oper_name[i]) {
				//是運算符時，is_oper為true
				is_oper = true;
				break;
			}
		}

		//當這是運算符的時候
		if (is_oper)
		{
			SElemType topelem;
			GetTop(S, topelem);

			string e = "";
			if (str == ")")
			{
				//當符號為 ) 時，將直到 ( 前的字符輸入進res
				while (PopStack(S, e) != ERROR && e != "(")
				{
					res += e + " ";
				}
			}
			//當棧頂符號的優先級高於當前符號時
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
	//返回【後綴表達式】
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
	string tmp = "";//暫存符號
	string oper_name = "+-*/()"; //要使用符號
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
	//計算過後，棧剩下的元素便為答案
	PopStack(S, tmp);
	cout << "答案為: " << tmp << endl;
}

int main()
{
	Stack S;
	initStack(S);
	cout << "請輸入一中綴表達式，一行一字元 ( 輸入end代表輸入完成 )：" << endl;
	string str = fourMath(S);
	cout << "後綴表達式：" << str << endl;
	PrintResult(S, str);
	DeleteStack(S);
	return 0;
}