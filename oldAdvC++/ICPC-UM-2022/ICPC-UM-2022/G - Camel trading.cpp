//#include <iostream>
//#include <sstream>
//#include <string>
//#include <stack>
//#define my_int long long 
//using namespace std;
//
//my_int num_operator(my_int x, char op, my_int y)
//{
//	my_int ans;
//	if (op == '+')
//		ans = x + y;
//	else if (op == '*')
//		ans = x * y;
//	return ans;
//}
//
//int get_dit(string line)
//{
//	int a = 0;
//	for (int p = 0; line[p] >= '0' && line[p] <= '9'; p++)
//		a = a * 10 + line[p] - '0';
//	return a;
//}
//
//my_int get_result(string s, stack<string> &s_num,bool judge)
//{
//	char FIRST = '+';
//	char SECOND = '*';
//	if (judge)
//	{
//		FIRST = '*';
//		SECOND = '+';
//	}
//	string sub_s;
//	int j = 0;
//	my_int ans = 0;
//	for (; j < s.size(); j++)
//	{
//		if (s[j] != '+' && s[j] != '*')
//		{
//			sub_s += s[j];
//			if (j == s.size() - 1)
//				s_num.push(sub_s);
//		}
//		else
//		{
//			s_num.push(sub_s);
//			here:
//			if (s[j] == FIRST)
//			{
//				sub_s = s[j];
//				sub_s = "";
//			}
//			else if (s[j] == SECOND)
//			{
//				j++;
//				sub_s = "";
//				while (s[j] != '+' && s[j] != '*' && j != s.size())
//				{
//					sub_s += s[j];
//					j++;
//				}				
//				my_int sum = num_operator(get_dit(sub_s), SECOND, get_dit(s_num.top()));
//				s_num.pop();
//				s_num.push(to_string(sum));
//				sub_s = "";
//				goto here;
//			}
//		}
//	}
//	if (judge)
//	{
//		ans = 1;
//		while (!s_num.empty())
//		{
//			ans *= get_dit(s_num.top());
//			s_num.pop();
//		}
//	}
//	else
//	{
//		while (!s_num.empty())
//		{
//			ans += get_dit(s_num.top());
//			s_num.pop();
//		}
//	}
//	return ans;
//}
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		stack<string> s_op, s_num;
//		string s;
//		cin >> s;
//		/*my_int min = get_result(s, s_num, false);
//		my_int max = get_result(s, s_num, true);*/
//		printf("The maximum and minimum are %lld and %lld.\n", get_result(s, s_num, false), get_result(s, s_num, true));
//	}
//}

#include<stdio.h>
#include<string.h>
int main()
{
    int cas, c1, c2, i;
    long long int num1, num2, t, n1[15], n2[15];
    char c;
    scanf("%d", &cas);
    while (cas--)
    {
        c = '+';
        num1 = 1;
        num2 = 0;
        c1 = 0;
        c2 = -1;
        memset(n1, 0, sizeof(n1));
        memset(n2, 0, sizeof(n2));
        while (c != '\n')
        {
            scanf("%lld", &t);
            if (c == '+') { n1[c1] += t; n2[++c2] = t; }
            else { n1[++c1] = t; n2[c2] *= t; }
            scanf("%c", &c);
        }
        for (i = 0; i <= c1; i++) num1 *= n1[i];
        for (i = 0; i <= c2; i++) num2 += n2[i];
        printf("The maximum and minimum are %lld and %lld.\n", num1, num2);
    }
    return 0;
}
