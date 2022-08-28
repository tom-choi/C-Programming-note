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
		//查看棧頂元素
		cout << "棧頂元素: " << s.top() << endl;
		s.pop();
	}
	cout << "棧的大小為: " << s.size() << endl;
}


int main()
{
	test01();
}