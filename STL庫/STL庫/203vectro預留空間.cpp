#include <iostream>
#include <vector>
using namespace std;

void test01()
{
	vector<int> v;

	//ÀûÓÃreserveîAÁô¿Õég
	v.reserve(100000);
	int num = 0; //½yÓ‹”U³ä´Î”µ
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}

	}
	cout << "num = " << num << endl;
}





int main()
{
	test01();

	return 0;
}