#include <iostream>
#include <string>

using namespace std;

bool string_upper_diy(char str[], int str_len, bool b_odd_pos = true)
{
	for (int i = 0; i < str_len; i++)
	{
		if (b_odd_pos == false)
		{
			if (i % 2 != 0 && str[i] >= 'a' && str[i] <= 'z') //Ææ
			{
				str[i] -= 32;
			}
			if (i % 2 == 0 && str[i] >= 'A' && str[i] <= 'Z') //Å¼
			{
				str[i] += 32;
			}
		}
		else
		{
			if (i % 2 == 0 && str[i] >= 'a' && str[i] <= 'z') //Ææ
			{
				str[i] -= 32;
			}
			if (i % 2 != 0 && str[i] >= 'A' && str[i] <= 'Z') //Å¼
			{
				str[i] += 32;
			}
		}
	}
	return true;
}

int main()
{
	char str[] = "abcdefg";
	string_upper_diy(str, strlen(str), true);
	cout << str;
}