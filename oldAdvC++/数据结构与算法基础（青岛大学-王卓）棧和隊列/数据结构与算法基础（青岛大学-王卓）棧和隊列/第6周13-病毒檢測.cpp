#include <iostream>
using namespace std;

#define MAXLEN 255

int main()
{
	string sourceStr[4] = { "bbaabbba","bbbbbbb","abceaabb","abaabcea" };
	string targetStr[4] = { "baa","baa","aabb","aabb" };
	string resStr[4] = {};
	bool flag = true;
	for (int i = 0; i < sizeof(sourceStr) / sizeof(targetStr[0]); i++)
	{
		string tmp = targetStr[i] + targetStr[i];
		string searchStr = "";
		for (int j = 0; j < targetStr[i].length(); j++) {
			searchStr = tmp.substr(j, targetStr[i].length());
			if (sourceStr[i].find(searchStr) != string::npos) {
				resStr[i] = "YES";
				break;
			}
			else if (j == targetStr[i].length() - 1) {
				resStr[i] = "NO";
			}
		}
	}
	for (int i = 0; i < sizeof(resStr)/sizeof(string); i++)
	{
		cout << resStr[i] << endl;
	}
}