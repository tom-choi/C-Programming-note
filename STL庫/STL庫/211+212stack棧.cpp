#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void test01()
{
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	while (!s.empty())
	{
		//�鿴���Ԫ��
		cout << "���Ԫ��: " << s.top() << endl;
		s.pop();
	}
	cout << "���Ĵ�С��: " << s.size() << endl;
}


int main()
{
	test01();
}