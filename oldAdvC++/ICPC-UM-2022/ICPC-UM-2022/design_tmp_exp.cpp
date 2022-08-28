#include <iostream>
#include <vector>
using namespace std;

class Journal
{
	/*void foo()
	{
		for (auto& item : *static_cast<int32_t>())
	}*/
	string title;
	vector<string> entries;

	explicit Journal(const string& title) : title{ title } {};
	void Journal::add(const string& entry)
	{
		static int count = 1;
		entries.push_back(boost::lexical_cast<string>(count++) + ": " + entry);
	}
};


int main()
{
	Journal j("jss");

	return 0;
}