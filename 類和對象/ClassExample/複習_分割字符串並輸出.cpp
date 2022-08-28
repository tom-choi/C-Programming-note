#include <iostream>
#include <string>
using namespace std;

int main()
{
	char latter[] = ""; char result[] = "";
	string symbolA = "→"; string symbolB = ",";
	bool judgesymbolA = false; bool judgesymbolB = false;
	int idx = 0; int i = 0;
	cout << "請輸入字符串(分割起點為'→'，分割終點為',')，輸入'end'取得答案:" << endl ;
	while(true)
	{
		cin >> latter;
		for (i = 0; i < strlen(latter); i++)
		{
			if ((latter[i] == symbolA[0] && latter[i + 1] == symbolA[1]))
			{
				i += 2;
				judgesymbolA = true; judgesymbolB = true;
				cout << endl;
			}
			else if (latter[i] == symbolB[0] && (judgesymbolA == true))
			{
				i++;
				judgesymbolA = false; judgesymbolB = true;
				cout << endl;
			}
			cout << latter[i];
		} 
		if (judgesymbolB == false)
		{
			cout << " ";
		}
		else if (judgesymbolB == true)
		{
			cout << endl << "";
			judgesymbolB = false;
		}
	}
}