#include <iostream>
#include <string>
using namespace std;

char* get_same_string(char* p1, char* p2)
{
	char* result = new char[10]{}; int idx = 0; //初始化char //示範用new
	for (int i = 0; i < strlen(p1); i++)
	{
		for (int j = 0; j < strlen(p2); j++)
		{
			if (p1[i] == p2[j])
			{
				result[idx++] = p1[i];
			}
			else
				continue;
		}
	}
	return result;
	delete[]result;//示範用delete
}

int main()
{
	char p1[100] = "abcdef";
	char p2[100] = "cdefgh";
	cout <<  "它們擁有的相同字符為: " << get_same_string(p1, p2) << endl;
	return 0;
}



//int a1 = 2, a2 = 5;
	//int& b = a1; //第一次引用成功
	//int& b = a2; //不能進行第二次引用，錯誤

	//int a[5] = { 0 };
	//int& b[5] = a; //不能進行多個引用
	//int& c = a[0]; //可以引用數表中的單個數值

	//引用的引用:
	//int a = 3;
	//int& b = a;
	//int& c = b;
	//int& p = c;

/*交換的引用寫法
void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}*/

/*for (int idx = 0; idx < sizeof(result); idx++)
{
	cout << result[idx] << endl;
}*/