#include <iostream>

using namespace std;

template<typename T>
struct Point
{
	T x, y;
	Point(T x = 0, T y = 0) :x(x), y(y)
	{
		;
	}
};

template<typename T>
Point<T> operator+(const Point<T>& a, const Point<T>& b)
{
	return Point<T>(a.x + b.x, a.y + b.y);
}

template<typename T>
ostream& operator<<(ostream& cout, const Point<T>& p)
{
	cout << "(" << p.x << "," << p.y << ")";
	return cout;
}

int main()
{
	Point<int> A(1,0), B(5, 6);
	cout << A+B;
}