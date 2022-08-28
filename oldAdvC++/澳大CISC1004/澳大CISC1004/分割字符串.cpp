#include <iostream>
#include <vector>
#include <random>
using namespace std;
#include <string> 
vector<string> v1;
vector<string> v2;

void test01()
{
	string str;
	string temp = "";
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ","[0])
		{
			temp += str[i];
		}
		else
		{
			v1.push_back(temp);
			temp = "";
			i++;
		}
	}
}

void test02()
{
	string str;
	string temp = "";
	string result;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == "¡¢"[0] && str[i + 1] == "¡¢"[1])
		{
			if (i != str.length() - 1)
			{
				result = "[" + '\"' + temp + '\"' + ',' + to_string(rand() % 350 + 50) + "],";
				v2.push_back(result);
				temp = "";
				i++;
			}
			else
			{
				result = "[" + '\"' + temp + '\"' + ',' + to_string(rand() % 350 + 50) + "]";
				v2.push_back(result);
				temp = "";
				i++;
			}
		}
		else
		{
			temp += str[i];
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));
	//test01();
	//printf("Íê³É");
	test02();
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << endl;
	}
}