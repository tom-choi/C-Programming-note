#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& p)
{
	for (vector<int>::iterator it = p.begin(); it < p.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}




int main()
{
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	printVector(v1);

	v1.pop_back();
	printVector(v1);

	v1.insert(v1.begin(), 100);
	printVector(v1);

	v1.insert(v1.begin(), 2, 1000);
	printVector(v1);

	v1.erase(v1.begin());
	printVector(v1);

	//Çå¿Õ
	v1.erase(v1.begin(), v1.end());
	v1.clear();
	printVector(v1);
}

