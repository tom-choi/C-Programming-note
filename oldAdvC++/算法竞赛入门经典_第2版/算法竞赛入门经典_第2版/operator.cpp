#include <iostream>

using namespace std;

struct Point
{
	int x, y;
	Point(int x = 0, int y = 0) :x(x), y(y)
	{
		;
	}
};

Point operator+(const Point& a, Point& b)
{
	return Point(a.x + b.x, a.y + b.y);
}
ostream& operator<<(ostream& cout, const Point& p)
{
	cout << "(" << p.x << "," << p.y << ")" << endl;
	return cout;
}

int main()
{
	Point a, b(1, 2);
	a.x = 3;
	cout << a + b;
	return 0;
}