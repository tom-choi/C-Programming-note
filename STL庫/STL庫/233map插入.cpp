#include <iostream>
#include <map>
using namespace std;

void printMap(map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << " value: " << (*it).second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int>m;

	//����
	//��һ�N
	m.insert(pair<int, int>(1, 10));

	//�ڶ��N(�Ԅ��R�e���)
	m.insert(make_pair(2, 20));

	//�����N
	m.insert(map<int, int>::value_type(3, 30));

	//���ķN(��)
	m[4] = 10;

	//����N��ֱ�Ӽ��Mȥ
	cout << m[5] << endl;

	cout << (m[6] = 10) << endl;
	printMap(m);

	//�h��
	m.erase(m.begin());
	printMap(m);

	m.erase(3);
	printMap(m);
}





int main()
{
	test01();
}