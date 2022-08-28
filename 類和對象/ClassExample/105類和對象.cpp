#include <iostream>
#include <string>

using namespace std;

class Point
{
public:
	void set_X(int x)
	{
		X = x;
	}
	void set_Y(int x)
	{
		Y = x;
	}
	inline int get_X()
	{
		return X;
	}
	inline int get_Y()
	{
		return Y;
	}
private:
	int X; int Y;
};
class Circle
{
public:
	void set_m_R(int x)
	{
		m_R = x;
	}
	inline int get_m_R()
	{
		return m_R;
	}
	void setCenter(Point center)
	{
		m_Center = center;
	}
	Point getCenter()
	{
		return m_Center;
	}

private:
	int m_R; Point m_Center;
	
};


void isinCircle(Circle& c, Point& p)
{

	int x_2 = (c.getCenter().get_X() - p.get_X()) * (c.getCenter().get_X() - p.get_X());
	int y_2 = (c.getCenter().get_Y() - p.get_Y()) * (c.getCenter().get_Y() - p.get_Y());
	int distance = x_2 + y_2;
	int rdistance = c.get_m_R() * c.get_m_R();
	if (distance == rdistance)
	{
		cout << "點在圓上" << endl;
	}
	else if (distance > rdistance)
	{
		cout << "點在圓外" << endl;
	}
	else
	{
		cout << "點在圓內" << endl;
	}
}


int main()
{
	Circle Acircle; Point Apoint; Point Cpoint;

	Acircle.set_m_R(5); 
	Apoint.set_X(3); Apoint.set_Y(5);
	Acircle.setCenter(Apoint);

	Cpoint.set_X(8); Cpoint.set_Y(9);
	isinCircle(Acircle,Cpoint);
}